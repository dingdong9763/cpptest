#ifndef __SINGLENTON__
#define __SINGLENTON__

#include <iostream>
using namespace std;

class Singleton {
public:
    static Singleton& getInstance();
    void setup() {
        cout << "setuping"<< endl;
    };
private:
    Singleton(){cout<<"create"<<endl;};
    Singleton(const Singleton& rhs);
};

Singleton& Singleton::getInstance() {
    // 只有当调用的时候才创建这个静态的对象，多次调用也只是返回一个，如果没有人使用的话这个单例就不存在
    static Singleton s;
    return s;
}

#endif

#include <iostream>
using namespace std;

// 智能指针
// 指针有 * 和 -> 操作符，对于一个class去模拟point，我们必须对其 * 和 -> 操作符进行重载。
template<class T>
class my_shared_ptr {
public:
    T& operator*() const {
        return *px; // *用完就没有了
    }

    T* operator->() const {
        return px; //->用完还有
    }

    my_shared_ptr(T* p): px(p) {} //构造函数，接受天然指针
private:
    T* px; //一定带有一个一般的指针
    long* pn;
};

#include <iostream>
using namespace std;

typedef struct Stag{
    int a,b,c,d;
} S;

// 下面两个会被认为是同一个函数签名？
// const类型的函数是属于签名的一部分
double imag(const double& im) {
    return im;
};
double imag(const double im) {
    return im;
};

// 引用通常不用于声明变量 而用于参数类型和返回类型
int main() {
    double x = 0;
    double* p = &x;
    double& r = x;

    // #1 报错
    // cout << imag(10.0) << endl;

    cout << "sizeof(x):" << sizeof(x) << endl; // 8 double类型为8字节
    cout << "sizeof(p):" << sizeof(p) << endl; // 4 指针为4字节（32位电脑）
    cout << "sizeof(r):" << sizeof(r) << endl; // 8 引用指代double x 也是8字节

    cout << "x:" << x << endl;
    cout << "r:" << r << endl; // 0 输出一个值
    cout << "p:" << p << endl; // 输出一个地址
    cout << "*p:" << *p << endl; // 0 输出一个值
    

    // r引用指代x所以 r和x的地址一致
    cout << "&x:" << &x << endl; // 输出一个地址
    cout << "&r:"  << &r << endl; // 输出一个地址

    S s;
    S& rs = s;
    // s和rs大小相同地址相同（全都是假象）
    cout << "s:" << sizeof(s) << endl; // 16
    cout << "rs:" << sizeof(rs) << endl; // 16
    cout << &s << endl; // 输出一个地址
    cout << &rs << endl; // 输出一个地址
}

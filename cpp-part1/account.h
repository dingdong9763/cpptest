#ifndef __ACCOUNT__
#define __ACCOUNT__

class Account {
public:
    // 静态数据只有一份，不属于任何对象，存放在静态存储区
    // 声明
    static double m_rate; //银行利率应该是都相同的，所以设为静态
    // 静态函数 在内存只有一份
    // 静态函数没有this指针，不能存取访问非静态数据，只能存取静态数据！！
    static void set_rate(const double& x) {
        m_rate = x;
    }
};
// 静态数据一定要在类外面设初始化 定义=>类型+类::静态变量名
// 类的静态数据必须要在外面定义一下这样才能给初值
double Account::m_rate = 0.8;// 定义 写一行下来会造成这里面的变量获得内存，所以叫定义

//调用static函数的方式有两种：
//（1）通过对象object来调用
//（2）通过类型名class name来调用

#endif

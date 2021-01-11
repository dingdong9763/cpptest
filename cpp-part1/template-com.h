#ifndef __TEMCOM__
#define __TEMCOM__

template<typename T>
class complex {
public:
    complex(T r = 0, T i = 0) :re(r), im(i){};
    // complex& operator += (const complex& com);
    T real() {return re;}
    T imag() {return im;}
    inline const T& min(const T& a, const T& b)
    {
        return b < a ? b : a;
    }
private:
    T re, im;
};

#endif

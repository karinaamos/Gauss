#include "fraction.h"
#include "nod.h"

void Fraction::SetDenom(int32_t newDenom){
    if(newDenom == 0)
        throw "Знаменатель не может быть ноль";
    _denom = newDenom;
}

Fraction::Fraction(int32_t num, int32_t denom){
    int32_t temp = nod(fabs(num), fabs(denom));
    if (temp > 1){
        num /= temp;
        denom /= temp;
    }
    if ((num < 0 && denom < 0) || (denom < 0)){
        num *= -1;
        denom *= -1;
    }
    _num = num;
    SetDenom(denom);  
}

Fraction::Fraction(double n, int32_t* cel){
    int32_t num = 0;
    int32_t denom = 1;
    if (n >= 0){
        *cel = floor(n);
        num = (int)(round((n - *cel)*1000000000));
        denom = 1000000000;
    }
    else{
        *cel = ceil(n);
        num = (-1) * (int)(ceil((n - *cel)*1000000000));
        denom = 1000000000;
    }
    if (denom < 0){
        num *= -1;
        denom *= -1;
    }
    int32_t temp_t = nod(fabs(num), fabs(denom));
    if (temp_t > 1){
        num /= temp_t;
        denom /= temp_t;
    }
    _num = num;
    SetDenom(denom);
}

void Fraction::Print(){
    std::cout << _num << "/" << _denom << std::endl;
}

void Fraction::PrintD(double n, int32_t* pointer_temp){
    if (n < 0.0){
        std::cout << *pointer_temp << "  " << _num << "/" << _denom << std::endl;
    }
    else std::cout << *pointer_temp << "  " << _num << "/" << _denom << std::endl;
}
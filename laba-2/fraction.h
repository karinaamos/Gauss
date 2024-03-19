#include <iostream>
#include <cstdint>

class Fraction{
private:
    int32_t _num; // числитель
    int32_t _denom; // знаменатель
public:

    void SetDenom(int32_t newDenom);
    Fraction(int32_t num, int32_t denom);
    Fraction(double n, int32_t* cel);


    void Print();
    void PrintD(double n, int32_t* pointer_temp);
};
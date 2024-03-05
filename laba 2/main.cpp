#include <iostream>
#include "Fraction.h"

int main(){

    Fraction fract = Fraction(1, 2);
    std::cout << fract;

    Fraction fract_copy = Fraction(fract);
    std::cout << fract_copy;

    Fraction* MassivFraction = new Fraction[5];
    delete [] MassivFraction;

    Fraction* fract_pointer = new Fraction();
    delete fract_pointer;
}
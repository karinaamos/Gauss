#include <iostream>
#include <cstdint>

class Fraction{
private:
    int32_t _num;
    uint32_t _denom;
public:
    Fraction(); //Конструктор по умолчанию
    Fraction(int32_t num, uint32_t denom); // Конструктор с параметрами
    Fraction(const Fraction& fract){
        //конструктор копирования
        std::cout << "Copy constructor ->" << this << std::endl;  
        _num = fract._num;
        _denom = fract._denom;
    } 
    Fraction(double realFract);
    //ДЗ2-Лаба
    void Reduce();

    //Сеттеры
    void SetNum(int32_t newNum);
    void SetDenom(uint32_t newDenom);
    //Геттеры
    inline int32_t GetNum(){
        return _num;
    }
    inline uint32_t GetDenom(){
        return _denom;
    }

    //Печать
    void Print();
    inline void PrintDouble(){
        std::cout << static_cast<double>(_num) / _denom << std::endl;
    }

    //Перегрузка операции вывода в консоль
    friend std::ostream& operator<<(std::ostream& os, const Fraction& tmp){
        os << tmp._num << "/" << tmp._denom << std::endl;
        return os;
    }
    //деструктор
    ~Fraction(){
        std::cout << "Destructor ->" << this << std::endl;
    }
};


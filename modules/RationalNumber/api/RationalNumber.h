#ifndef COLLOQUIUM_RATIONALNUMBER_H
#define COLLOQUIUM_RATIONALNUMBER_H


#include <iostream>
#include <string>
using namespace std;

class RationalNumber {
private:
    int numerator, denominator;
public:
    RationalNumber(int n, int d);

    // Проверка если рациональное число является целым
    string INT_Q_B();

    // Преобразование целого в дробное
    RationalNumber TRANS_Z_Q(int z);

    // Преобразование сокращенного дробного в целое
    int TRANS_Q_Z();

    // Вывод рационального числа
    void display();
};


#endif //COLLOQUIUM_RATIONALNUMBER_H

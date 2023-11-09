#include "../api/RationalNumber.h"


RationalNumber::RationalNumber(int n, int d) : numerator(n), denominator(d) {
    if (denominator == 0) {
        throw std::invalid_argument("Denominator can't be zero.");
    }
}

string RationalNumber::INT_Q_B() {
    if (denominator == 1)
        return "Yes";
    else
        return "No";
}

RationalNumber RationalNumber::TRANS_Z_Q(int z) {
    numerator = z;
    denominator = 1;
    return {numerator, denominator};
}

int RationalNumber::TRANS_Q_Z() {
    if (denominator == 1)
        return numerator;
    else
        return -1; // Неправильное значение, возвращается, если число не целое
}

void RationalNumber::display() {
    cout << numerator << "/" << denominator << endl;
}


#include <iostream>
#include "modules/RationalNumber/api/RationalNumber.h"

int main() {
    // Testing three methods of the module Rational numbers (fractions)
    RationalNumber r(5, 2);
    cout << r.INT_Q_B() << endl; // вывод "нет"

    r.TRANS_Z_Q(7);
    r.display(); // вывод "7/1"

    cout << r.TRANS_Q_Z() << endl; // вывод "7"

    return 0;
}

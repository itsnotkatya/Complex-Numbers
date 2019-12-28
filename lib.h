//
// Created by Екатерина on 28/12/2019.
//

#ifndef COMPLEX_NUMBERS_LIB_H
#define COMPLEX_NUMBERS_LIB_H
#include <iostream>
struct Complex {
    float x;
    float y;
};

Complex operator+(Complex a, Complex b);
Complex operator-(Complex a, Complex b);
Complex operator/(Complex a, Complex b);
Complex operator*(Complex a, Complex b);
bool operator==(Complex a, Complex b);
bool operator!=(Complex a, Complex b);

std::ostream &operator<<(std::ostream &out, Complex a);
#endif //COMPLEX_NUMBERS_LIB_H

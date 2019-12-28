//
// Created by Екатерина on 28/12/2019.
//
#include "lib.h"
#include <iostream>

Complex operator+(const Complex a, Complex b) {
    Complex result = a;
    result.x += b.x;
    result.y += b.y;
    return result;
}

Complex operator-(const Complex a, Complex b) {
    Complex result = a;
    result.x -= b.x;
    result.y -= b.y;
    return result;
}

Complex operator/ (const Complex a, Complex b) {
    Complex result;
    result.x = (a.x*b.x + a.y*b.y)/(b.x*b.x + b.y*b.y);
    result.y = (a.y*b.x - a.x*b.y)/(b.x*b.x + b.y*b.y);
    return result;
}

Complex operator*(const Complex a, Complex b) {
    Complex result;
    result.x = a.x*b.x - a.y*b.y;
    result.y = a.x*b.y + a.y*b.x;
    return result;
}

bool operator==(const Complex a, const Complex b) {
    if ((a.x == b.x) && (a.y == b.y)) {
        return 1;
    }
}

bool operator!=(const Complex a, const Complex b) {
    if (!(a.x == b.x) && !(a.y == b.y)) {
        return 0;
    }
}

std::ostream &operator<<(std::ostream &out, Complex a) {

    out << a.x << ' ';
    out << a.y;

    return out;
}
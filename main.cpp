#include <iostream>
#include "lib.h"

using namespace std;
int main() {
    Complex a{11,7}, b{4,5};
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a / b << endl;
    cout << a * b << endl;
    return 0;
}
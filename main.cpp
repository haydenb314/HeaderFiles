#include <iostream>
#include "calculate.h"

int main() {
    float a, s, m, d;
    a = calculate::add(3, 5);
    s = calculate::subtract(8, 4);
    m = calculate::multiply(5, 2);
    d = calculate::divide(10, 4);

    std::cout << a << "\n";
    std::cout << s << "\n";
    std::cout << m << "\n";
    std::cout << d << "\n";

    return 0;
}

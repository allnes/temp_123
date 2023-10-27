#include <iostream>
#include "include/calc.hpp"

int main(int argc, char** argv) {
    std::cout << div(mul(minus(10, 5), plus(4, 6)) * 2.5, mul(minus(7, 2), plus(6, 8)) * 2.333) << std::endl;
    return 0;
}

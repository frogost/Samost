#include <iostream>
#include <math.h>


int main() {
    float a=32;
    float b=40;

    std::cout << "Остаток от деления на 7 a=" << (a/7)-(int(a)/7) << "  Остаток от деления на 13 a=" << (a/13)-(int(a)/13) << std::endl;
    std::cout << "Остаток от деления на 7 b=" << (b/7)-(int(b)/7) << "  Остаток от деления на 13 b=" << (b/13)-(int(b)/13) <<  std::endl;
    std::cout << "Результат деления на 7 a=" << a/7 << "    Результат деления на 13 a=" << a/13 << std::endl;
    std::cout << "Результат деления на 7 b=" << b/7 << "    Результат деления на 13 b=" << b/13 <<  std::endl;
    std::cout << "Результат деления a/b=" << (int(a)/13)/((b/7)-(int(b)/7)) << std::endl;
    return 0;
}
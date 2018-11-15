#include <iostream>
#include <math.h>

int main() {
    int a=376;
    std::cout <<"Сумма каждого числа    "<< a%10 + a/10%10 + a/100%10 <<  std::endl;
    float c = (a%10 + a/10%10 + a/100%10)/2.0;
    if (c == int (c))
        std::cout <<"Четное     "<< std::endl;
    else
        std::cout <<"Нечетное   "<<  std::endl;
    return 0;
}
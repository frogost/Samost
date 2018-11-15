#include <iostream>
#include <math.h>

int main() {
    int a=3768;
    std::cout <<a%10*1000+a/10%10*100+a/100%10*10+a/1000%10<<  std::endl;
    std::cout <<a/10%10*10+a/100%10<<  std::endl;
    return 0;
}
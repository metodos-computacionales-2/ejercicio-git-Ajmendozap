#include <iostream>
#include <math.h>

int main(void)
{
    float pi= M_PI;
    std::cout <<"ingrese el radio de su círculo:"<<std::endl;
    float r;
    std::cin>>r;
    float diametro = 2*r;
    float perimetro= 2*pi*r;
    float area= pi*r*r;
    std::cout <<"El diámetro de su círculo es "<< diametro<< ", el perímetro de círculo es "<< perimetro << " y el área de su círculo es "<< area<<std::endl;
    return 0;
}
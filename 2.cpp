#include <iostream>
#include <cmath>

int main(void)
{
    float lm;
    float l1;
    float l2;
    float l3;
    std::cout <<"ingrese el primer lado de su triángulo:"<<std::endl;
    std::cin>>l1;
    std::cout <<"ingrese el segundo lado de su triángulo:"<<std::endl;
    std::cin>>l2;
    std::cout <<"ingrese el tercer lado de su triángulo:"<<std::endl;
    std::cin>>l3;
    lm= l1;
    if(l2 > lm)   
    {
      lm=l2;
    }
    if(l3 > lm)
    {
      lm=l3;
    }
    if(sqrt(l1*l1 + l2*l2) == lm || sqrt(l2*l2 + l3*l3)== lm || sqrt(l1*l1 + l3*l3) == lm)
    {
      std::cout << "Su triángulo es rectángulo"<<std::endl;
    }
    else
    {
      std::cout << "Su triángulo no es rectángulo"<<std::endl;
    }
    return 0;
}

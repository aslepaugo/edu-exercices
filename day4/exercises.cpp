#include <iostream>

int main(){
    int x = 10;
    int y = 20;
    int z = 30;

    std::cout<< "Sum = " << x + y + z <<std::endl;
    std::cout<< "Diff = " << x - y - z <<std::endl;
    std::cout<< "Mult = " << x * y * z <<std::endl;
    std::cout<< "Div =" << x / y / z << std::endl;
    std::cout<< "Mod x and y = "<< x % y <<std::endl;

    std::cout<< (((145 - 100 / 20) / 20) * 50) + 45 << std::endl;

    int a = 3;
    int b = 7;

    int ab_band = a & b;
    int ab_bor = a | b;
    int ab_x = a ^ b;
    int a_tilda = ~a;
    int a_left = a << 1;
    int a_right = a >> 1;

    std::cout<< "ab_band = "<<ab_band<<std::endl;
    std::cout<< "ab_bor = "<<ab_bor<<std::endl;
    std::cout<< "ab_x = "<<ab_x<<std::endl;
    std::cout<< "a_tilda = "<<a_tilda<<std::endl;
    std::cout<< "a_left = "<<a_left<<std::endl;
    std::cout<< "a_right = "<<a_right<<std::endl;
    
    bool t = true;
    bool f = false;

    bool result = t && (t && (t && t || f) && (f || t != f));

    std::cout<<result<<std::endl;

    



}
#include <iostream>
#include "CoolProp.h"

int main(){
    std::cout << "The NBP of water is: " << CoolProp::PropsSI("T","P",101325,"Q",0,"Water") << " K" << std::endl;
}
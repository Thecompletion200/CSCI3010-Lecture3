// Steven Mai
#include "functions_to_implement.cpp"
#include <iostream>

int main(){
    std::vector<int> testVector = {1,4,5,27,1,47,8,10,51};
    std::cout << "The sum of the vector is " << Sum(testVector) << "\n";
    std::cout << "The product of the vector is " << Product(testVector) << "\n";
    int testNum = -40;
    std::cout << Sign(testNum) << "\n";
}

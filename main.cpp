#include <iostream>
#include "calculate.h"

int main() 
{
    std::cout << "Hello! Welcome to this Calculator.";

    bool i = true;

    while(i) {
    double a;
    double b;
    char op;

    std::cout << "Enter the 1st Number:";
    std::cin >> a;

    std::cout << "Enter the Operetor(+,-,*,/):";
    std::cin >> op;

    std::cout << "Enter the second number:";
    std::cin >> b;

    double result = calculate(a, b, op);

    std::cout << "The Result is: " << result << "\n";

    std::cout << "Do you want to continue? (1/0): ";

    std::cin >> i;

    


    }

    std::cout << "Thank you for using this calculator!";
 


}
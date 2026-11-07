#include <iostream>

int main() {
    int number1 = 0;
    int number2 = 0;

    std::cout << "Enter your first number: ";
    std::cin >> number1;

    std::cout << "Enter your second number: ";
    std::cin >> number2;
    int sum = number1 + number2;
    int difference = number1 - number2;
    int product = number1 * number2;
    double quotient = static_cast<double>(number1) / number2;
    if (number2 !=0){
        quotient = static_cast<double>(number1) / number2;
        std::cout << "\nDivision: " << quotient;
    }
    else {
        std::cout << "\nError : Cannot divide by zero!";
    }
    std::cout << "\nAddition: " << sum;
    std::cout << "\nSubtraction: " << difference;
    std::cout << "\nMultiplication: " << product;
    

}
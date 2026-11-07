#include <iostream>
#include <limits>

int main() {
    int choice = 0;
    double number1 = 0;
    double number2 = 0;
    int running = 1;
while (running == 1) {
    std::cout << "=====MY CALCULATOR =====\n";

// choose your own method of choosing
std::cout << "1. Addition\n";
std::cout << "2. Subtraction\n";
std::cout << "3. Multiplication\n";
std::cout << "4. Division\n";

std::cout << "\nChoose an operation: ";
if (!(std::cin >> choice)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Invalid input! Please enter a number.\n";
    continue;
}
std::cout << "\nEnter your first number: ";
std::cin >> number1;

std::cout << "Enter your second number: ";
std::cin >> number2;

switch (choice) {
    case 1:
    std::cout << "Addition: " << number1 + number2;
    break;
    case 2:
        std::cout << "Subtraction: " << number1 - number2;
    break;
    case 3:
        std::cout << "Multiplication: " << number1 * number2;
    break;
    case 4:
        if (number2 !=0) {
            std::cout << "Division: " << number1 / number2;
        }
        else {
            std::cout << "Error: Cannot divide by zero!";
        }
    break;
default:
    std::cout << "Invalid operation!";
    break;
}
std::cout << "\nWould you like to calculate again? (1 = yes, 0 = no): ";
std::cin >> running;
}
} // Closes the main.
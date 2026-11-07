#include <iostream>

int main() {
    int secretNumber = 37;
    int guess = 0;

    std::cout << "===== Number guessing game =====\n"; 
    std::cout << "Guess a number between 1 and 100!\n";

while (guess != secretNumber) {
    std::cout << "Enter your guess: ";
    std::cin >> guess;

    if (guess == secretNumber) {
        std::cout << "Correct! You win!\n";
    }
    else if (guess > secretNumber) {
        std::cout << "Too high!\n";
    }    
    else {
        std::cout << "Too low!\n";
    }
} // Closes the while loop


    return 0;
} // closes main()
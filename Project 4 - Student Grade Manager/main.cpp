# include <iostream>
# include <limits>
void showWelcome() {
    std::cout << "===== Student Grade Manager =====\n"; 
}
double calculateAverage(double total, int numberOfGrades){
    return total / numberOfGrades;
}
int main() {
    int numberOfGrades;
    double grade;
    double total = 0;

    showWelcome();
    while (true) {
        std::cout << "How many grades? ";
        
        if (std::cin >> numberOfGrades && numberOfGrades > 0){
            break;
        }
        std::cout << "Invalid input! Enter a positive number.\n";

        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
  
for (int i = 1; i <= numberOfGrades; i++) {
    while (true) {
        std::cout << "Enter grade " << i << ": ";
    
        if (std::cin >> grade && grade >= 0 && grade <= 100) {
        break;
    }
        std::cout << "Invalid grade! Try Again.\n";

        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    }

    total += grade;
}
double average = calculateAverage(total, numberOfGrades); 

    std::cout << "Average: " << average << "\n";
    if (average >= 90) {
        std::cout << "Letter Grade: A\n";
    } 
    else if (average >= 80) {
        std::cout << "Letter Grade: B\n";
    }
    else if (average >= 70) {
        std::cout << "Letter Grade: C\n";
    }
    else if (average >= 60) {
        std::cout << "Letter Grade: D\n";
    }
    else {
        std::cout << "Letter Grade: F\n";
    }
    return 0;
}
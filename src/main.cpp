#include <iostream>
#include <string>

int main() {
    const char* projectName = "Configuration Management with Git Branching";
    constexpr int labNumber = 7;

    std::cout << "Enter student name: ";
    std::string studentName;
    std::getline(std::cin, studentName);
    if (studentName.empty()) {
        std::cerr << "Error: student name cannot be empty.\n";
        return 1;
    }

    std::cout << "Welcome to the Lab 7 Git practice project!\n";
    std::cout << "Project: " << projectName << '\n';
    std::cout << "Student: " << studentName << '\n';
    std::cout << "Lab number: " << labNumber << '\n';
    std::cout << "Purpose: Practice Git branches and C++ code construction.\n";
    return 0;
}

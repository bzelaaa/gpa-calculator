#include <iostream>
#include <vector>

int main() {
    int numCourses;
    double totalPoints = 0.0;
    int totalCredits = 0;

    std::cout << "=== GPA Calculator ===" << std::endl;
    std::cout << "How many courses do you have? ";
    std::cin >> numCourses;

    for (int i = 1; i <= numCourses; i++) {
        std::string courseName;
        double garde;
        int credits;

        std::cout << "\nCourse " << i << " name: ";
        std::cin >> courseName;

        std::cout << "Grade (0.0-4.0): ";
        std::cin >> garde;

        std::cout << "Credit hours: ";
        std::cin >> credits;

        totalPoints += garde * credits;
        totalCredits += credits;
    }

    if (totalCredits == 0) {
        std::cout << "No credits entered. GPA cannot be calculated." << std::endl;
    } else {
        double gpa = totalPoints / totalCredits;
        std::cout << "\n=== Results ===" << std::endl;
        std::cout << "Total Credits: " << totalCredits << std::endl;
        std::cout << "Your GPA: " << gpa << std::endl;
    }

    return 0;
}

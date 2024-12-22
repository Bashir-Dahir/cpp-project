


#include <iostream>
using namespace std;

// Function to print the grade based on marks
void displayGrade(int score) {
    // Check the score range and determine the grade
    if (score >= 90) {
        cout << "Grade: A" << endl;
    } else if (score >= 80) {
        cout << "Grade: B" << endl;
    } else if (score >= 70) {
        cout << "Grade: C" << endl;
    } else if (score >= 60) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F" << endl;
    }
}

// Function to compute the Least Common Multiple (LCM) of two numbers
int findLCM(int num1, int num2) {
    int greater = (num1 > num2) ? num1 : num2; // Start with the larger of the two numbers

    // Incrementally check for the LCM
    while (true) {
        if (greater % num1 == 0 && greater % num2 == 0) {
            return greater; // Found the LCM
        }
        ++greater; // Check the next number
    }
}

// Function to compute the Highest Common Factor (HCF) of two numbers
int findHCF(int num1, int num2) {
    // Use the Euclidean algorithm to find HCF
    while (num2 != 0) {
        int remainder = num1 % num2; // Compute the remainder
        num1 = num2;                 // Update num1
        num2 = remainder;            // Update num2
    }
    return num1; // HCF is stored in num1
}

int main() {
    // Step 1: Input marks to determine the grade
    int marks;
    cout << "Enter your marks to find your grade: ";
    cin >> marks; // Take user input for marks
    displayGrade(marks); // Call the function to display the grade

    // Step 2: Input two numbers to calculate the LCM
    int firstNumber, secondNumber;
    cout << "\nEnter two numbers to find their LCM: ";
    cin >> firstNumber >> secondNumber; // Take two numbers as input
    int lcm = findLCM(firstNumber, secondNumber); // Compute the LCM
    cout << "The LCM of " << firstNumber << " and " << secondNumber << " is: " << lcm << endl;

    // Step 3: Input two numbers to calculate the HCF
    cout << "\nEnter two numbers to find their HCF: ";
    cin >> firstNumber >> secondNumber; // Take two numbers as input
    int hcf = findHCF(firstNumber, secondNumber); // Compute the HCF
    cout << "The HCF of " << firstNumber << " and " << secondNumber << " is: " << hcf << endl;

    return 0; // End of the program
}




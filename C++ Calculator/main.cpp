#include <iostream>
using namespace std;

void displayMenu() {
    cout << "Welcome to the Simple Calculator!" << endl;
    cout << "Please select an operation:" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice (1-5): ";
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        cout << "Error! Division by zero is not allowed." << endl;
        return 0;
    }
    return a / b;
}

int main() {
    int choice;
    double num1, num2;
    
    do {
        displayMenu();
        cin >> choice;
        
        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }

        switch (choice) {
            case 1:
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case 2:
                cout << "Result: " << subtract(num1, num2) << endl;
                break;
            case 3:
                cout << "Result: " << multiply(num1, num2) << endl;
                break;
            case 4:
                cout << "Result: " << divide(num1, num2) << endl;
                break;
            case 5:
                cout << "Exiting calculator." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }

        cout << endl;

    } while (choice != 5);

    return 0;
}
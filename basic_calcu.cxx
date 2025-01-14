#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2;
    bool continueCalculating = true;

    cout << "Basic Calculator\n";
    cout << "----------------\n";

    while (continueCalculating) {
        // Get first number
        cout << "\nEnter first number: ";
        while (!(cin >> num1)) {
            cout << "Invalid input. Please enter a number: ";
            cin.clear();
            cin.ignore(100, '\n');
        }

        // Get operation
        cout << "Enter operation (+, -, *, /): ";
        cin >> operation;

        // Get second number
        cout << "Enter second number: ";
        while (!(cin >> num2)) {
            cout << "Invalid input. Please enter a number: ";
            cin.clear();
            cin.ignore(100, '\n');
        }

        // Perform calculation
        switch (operation) {
            case '+':
                cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                break;
            case '-':
                cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                break;
            case '*':
                cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 != 0) {
                    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                } else {
                    cout << "Error: Division by zero!" << endl;
                }
                break;
            default:
                cout << "Invalid operation!" << endl;
        }

        // Ask if user wants to continue
        char choice;
        cout << "\nDo you want to perform another calculation? (y/n): ";
        cin >> choice;
        continueCalculating = (choice == 'y' || choice == 'Y');
    }

    cout << "\nThank you for using the calculator!\n";
    return 0;
}
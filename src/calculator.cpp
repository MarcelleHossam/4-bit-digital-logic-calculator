
#include <iostream>
#include <bitset>
using namespace std;

void Addition(int a, int b) {
    int result = a + b;
    cout << "Addition:\n";
    cout << "Decimal: " << result << "\n";
    cout << "Binary (8-bit): " << bitset<8>(result) << "\n\n";
}

void Subtraction(int a, int b) {
    int result = a - b;
    int twosComp = (result + 256) % 256; // 2's complement in 8 bits
    cout << "Subtraction:\n";
    cout << "Decimal: " << result << "\n";
    cout << "Binary (2's complement 8-bit): " << bitset<8>(twosComp) << "\n\n";
}

void Multiplication(int a, int b) {
    int result = a * b;
    cout << "Multiplication:\n";
    cout << "Decimal: " << result << "\n";
    cout << "Binary (8-bit): " << bitset<8>(result) << "\n\n";
}

void Division(int a, int b) {
    cout << "Division:\n";
    if (b == 0) {
        cout << "Error: Division by zero is not allowed.\n\n";
        return;
    }
    int quotient = a / b;
    int remainder = a % b;
    cout << "Quotient: " << quotient << "\n";
    cout << "Binary (8-bit): " << bitset<8>(quotient) << "\n";
    cout << "Remainder: " << remainder << "\n";
    cout << "Binary (8-bit): " << bitset<8>(remainder) << "\n\n";
}

void Comparison(int a, int b) {
    cout << "Comparison:\n";
    if (a > b) {
        cout << "Result: A > B\n";
        cout << "Code: 001\n\n";
    }
    else if (a == b) {
        cout << "Result: A = B\n";
        cout << "Code: 010\n\n";
    }
    else {
        cout << "Result: A < B\n";
        cout << "Code: 100\n\n";
    }
}

int main() {
    int a, b;
    char operation;

    cout << "Enter first 4-bit number (0-15): ";
    cin >> a;
    cout << "Enter second 4-bit number (0-15): ";
    cin >> b;

    if (a < 0 || a > 15 || b < 0 || b > 15) {
        cout << "Error: Only 4-bit values allowed (0 to 15).\n";
        return 1;
    }

    cout << "Select operation:\n";
    cout << "'+' for Addition\n";
    cout << "'-' for Subtraction\n";
    cout << "'*' for Multiplication\n";
    cout << "'/' for Division\n";
    cout << "'c' for Comparison\n";
    cout << "Enter operation: ";
    cin >> operation;


    switch (operation) {
    case '+': Addition(a, b); break;
    case '-': Subtraction(a, b); break;
    case '*': Multiplication(a, b); break;
    case '/': Division(a, b); break;
    case 'c': Comparison(a, b); break;
    default: cout << "Invalid operation.\n";
    }

    return 0;
}
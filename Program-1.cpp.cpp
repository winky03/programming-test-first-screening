#include <iostream>
using namespace std;

class Calculator {
    double a, b;

public:
    Calculator(double a, double b) {
        this->a = a;
        this->b = b;
    }

    double operate(string operation) {
        if (operation == "add") return a + b;
        else if (operation == "subtract") return a - b;
        else if (operation == "multiply") return a * b;
        else if (operation == "divide") {
            if (b == 0) {
                cout << "Cannot divide by zero\n";
                return 0;
            }
            return a / b;
        } else {
            cout << "Invalid operation\n";
            return 0;
        }
    }
};

int main() {
    double x, y;
    string op;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Enter operation (add, subtract, multiply, divide): ";
    cin >> op;

    Calculator calc(x, y);
    cout << "Result: " << calc.operate(op) << endl;
    return 0;
}

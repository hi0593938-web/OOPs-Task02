#include <iostream>
#include "Calculator.h"
using namespace std;

int main() {
    Calculator c1;
    int choice;

    c1.setData();

    cout << "\nChoose Operation:" << endl;
    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Result: " << c1.add() << endl;
            break;
        case 2:
            cout << "Result: " << c1.subtract() << endl;
            break;
        case 3:
            cout << "Result: " << c1.multiply() << endl;
            break;
        case 4:
            cout << "Result: " << c1.divide() << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}

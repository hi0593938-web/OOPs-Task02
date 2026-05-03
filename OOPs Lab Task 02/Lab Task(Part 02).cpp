#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    void setDimensions();  // Function declaration
    int area();            // Function declaration
    int perimeter();       // Function declaration
};

// Function definitions outside the class

void Rectangle::setDimensions() {
    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;
}

int Rectangle::area() {
    return length * width;
}

int Rectangle::perimeter() {
    return 2 * (length + width);
}

int main() {
    Rectangle r1;  // Object creation

    r1.setDimensions();  // Input values

    cout << "\nArea: " << r1.area() << endl;
    cout << "Perimeter: " << r1.perimeter() << endl;

    return 0;
}

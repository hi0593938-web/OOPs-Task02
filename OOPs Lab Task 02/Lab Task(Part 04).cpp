#include <iostream>
using namespace std;

class Temperature {
public:
    float celsius;  // public data member

    // Function to convert Celsius to Fahrenheit
    float convert() {
        return (celsius * 9/5) + 32;
    }

    // Function to display result
    void display() {
        float fahrenheit = convert();
        cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    }
};

int main() {
    Temperature t1;  // Object creation

    cout << "Enter temperature in Celsius: ";
    cin >> t1.celsius;

    t1.display();  // Display converted value

    return 0;
}

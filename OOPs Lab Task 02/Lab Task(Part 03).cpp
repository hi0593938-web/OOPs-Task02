#include <iostream>
using namespace std;

class Voter {
private:
    string name;
    int age;

public:
    void setData();     // to input data
    bool isEligible();  // to check eligibility
};

// Function definitions outside the class

void Voter::setData() {
    cout << "Enter name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;
}

bool Voter::isEligible() {
    if (age > 18)
        return true;
    else
        return false;
}

int main() {
    Voter v1;   // Object creation

    v1.setData();  // Input values

    if (v1.isEligible()) {
        cout << "\n" << "You are eligible to vote." << endl;
    } else {
        cout << "\n" << "You are not eligible to vote." << endl;
    }

    return 0;
}

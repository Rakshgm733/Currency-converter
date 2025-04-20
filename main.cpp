#include <iostream>
using namespace std;

int main() {
    int choice;
    double amount;

    cout << "Welcome to Currency Converter\n";
    cout << "1. USD to INR\n";
    cout << "2. INR to USD\n";
    cout << "3. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter amount in USD: ";
            cin >> amount;
            cout << "Amount in INR: " << amount * 82.7 << endl;
            break;
        case 2:
            cout << "Enter amount in INR: ";
            cin >> amount;
            cout << "Amount in USD: " << amount / 82.7 << endl;
            break;
        case 3:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice.\n";
    }

    return 0;
}

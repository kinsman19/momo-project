#include <iostream>
using namespace std;

int main() {
    const int defaultpin = 0;
    int attempts = 0;
    int select;
    float reference;
    char option;
    char Y;
    char N;
    int number;
    float amount;
    int pin;
    int c_pin;
    int new_pin;
    float balance, counter;
    string digits;
    balance = 1000;
    cout << "Main Menu" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Reset/Change Pin" << endl;
    cout << "3. Send" << endl;
    cin >> select;

    if (select == 1) {
        do {
            cout << "Please enter your 4-digit Pin: " << endl;
            cin >> pin;
            attempts++;
            if (pin != defaultpin) {
                cout << "Incorrect Pin. Please try again." << endl;
            }
            else if (pin == defaultpin && digits.length() == 4) {
                cout << "Your balance is: " << balance << endl;
            }
        } while (pin != defaultpin || attempts > 3);
        if (attempts > 3) {
            cout << "Maximum attempts reached." << endl;
            cout << "Exiting Program" << endl;
            return 0;
        }
    }
    else if (select == 2) {
        cout << "Are you sure you want to change your pin?" << endl;
        cout << "Choose Y/N" << endl;
        cin >> option;
        if (option == Y) {
            cout << "Enter new pin: " << endl;
            cin >> new_pin;
            pin = new_pin;
            cout << "Your new pin is: " << new_pin << endl;
        }
    }
    else if (select == 3) {
        cout << "ENTER MOBILE NUMBER: " << endl;
        cin >> number;
        cout << "ENTER AMOUNT TO TRANSFER: " << endl;
        cin >> amount;
        cout << "Transfer " << amount << " to " << number << endl;
        cout << "Enter Reference: " << endl;
        cin >> reference;
        cout << "Please enter your pin: " << endl;
        cin >> pin;
        do {
            attempts++;
            if (pin != defaultpin) {
                cout << "Incorrect Pin. Please try again." << endl;
            }
            else if (pin == defaultpin) {
                cout << "You have successfully sent " << amount << " to " << number << endl;
                cout << "Your current balance is: " << balance - amount << endl;
            }
        } while (pin != defaultpin || attempts > 3);
        if (attempts > 3) {
            cout << "Maximum attempts reached." << endl;
            cout << "Exiting program." << endl;
            return 0;
        }
    }
    return 0;
}


//problem_4
#include<iostream>
#include<string>
using namespace std;

int main() {
    string national_id = "National Id", password = "Password", username = "National Id", pin = "Password";
    string menu_1 = "Please choose a number: 1- Register. 2-Login. 3-Quit.", menu_2 = "1-Withdraw. 2-Deposit. 3-Account balance. 4- Quit.";
    string msg_1 = "Please enter your National ID from 14 digits", msg_2 = "Please create a password from 8 characters with first on uppercase";
    string msg_3 = "Please enter the amount of balance", msg_4 = "To login: Please enter your username and password";
    string msg_5 = "Please enter the amount of money", msg_6 = "Your account balance is = ";
    string error_1 = "National Id must be 14 characters", error_2 = "Password must 8 characters at least with first one uppercase";
    string error_3 = "Your balance must be positive numbers onle", error_4 = "You can't with draw, your balance is = ";
    double acc_balance = 0, choice = 0, amount = 0;

    cout << "Welcome to the '...' Atm. To help you please choose a choice:" << menu_1 << endl;
    cin >> choice;
    if (choice == 1) {
        cout << msg_1 << endl;
        cin >> national_id;
        if (national_id.size() == 14) {
            cout << msg_2 << endl;
        } else cout << error_1 << endl;

        cin >> password;
        if (password.size() >= 8 && isupper(password[0])) {
            cout << msg_3 << endl;
        } else cout << error_2 << endl;

        cin >> acc_balance;
        if (acc_balance >= 0) {
            cout << msg_4 << endl;
        } else cout << error_3 << endl;

    } else if (choice == 2) {
        cout << msg_4 << endl;

    } else return 0;

    while (choice == 1 || choice == 2) {
        cin >> username >> pin;
        if (username == national_id && pin == password) {
            cout << menu_2 << endl;
            cin >> choice;

            if (choice == 1) {
                cout << msg_5 << endl;
                cin >> amount;
                if (amount <= acc_balance) {
                    acc_balance -= amount;
                    cout << msg_6 << acc_balance << endl;
                } else cout << error_4 << acc_balance << endl;

            } else if (choice == 2) {
                cout << msg_5 << endl;
                cin >> amount;
                acc_balance += amount;
                cout << msg_6 << acc_balance << endl;

            } else if (choice == 3) {
                cout << acc_balance << endl;
            } else return 0;

        } else cout << "Invalid username or password, you have to register" << endl;
        break;
    }
    return 0;
}






//#include <iostream>
//using namespace std;
//
//class SavingsAccount {
//    int savingBalance;
//public:
//    SavingsAccount(int balance = 0) : savingBalance(balance) {}
//    static int annualInterestRate;
//    static void setAnnualInterestRate(int x);
//    int monthlyInterest();
//    int displayBalance();
//};
//
//int SavingsAccount::annualInterestRate = 0;
//
//void SavingsAccount::setAnnualInterestRate(int x) {
//    annualInterestRate = x;
//}
//
//int SavingsAccount::monthlyInterest() {
//    return (savingBalance * annualInterestRate) / 12;
//}
//
//int SavingsAccount::displayBalance() {
//    return savingBalance + monthlyInterest();
//}
//
//int main() {
//    SavingsAccount s1(1000);
//    SavingsAccount::setAnnualInterestRate(6);
//
//    cout << "Monthly Interest: " << s1.monthlyInterest() << endl;
//    cout << "Balance after interest: " << s1.displayBalance() << endl;
//
//    return 0;
//}


#include <iostream>
using namespace std;

class Calculator {
public:
    int x, y;
    Calculator() : x(0), y(0) {}
    void addupnumbers(int y);
    int getsum();
};

void Calculator::addupnumbers(int y) {
    x = x + y;
}
int Calculator::getsum() {
    return x;
}
int main() {
    Calculator c1;
    int y;
    cout << "*****Static Variables*****" << endl;
    cout << "Please enter 5 numbers to be summed" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Enter a number: ";
        cin >> y;
        c1.addupnumbers(y);
        cout << "The current total is " << c1.getsum() << endl;
    }
    cout << "Program completed" << endl;
    return 0;
}
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
public :
	int x, int y;
	Calculator() : x(0), y(0) {}
	int addupnumbers();
};

int Calculator::addupnumbers(int y) {
	x = x + y;
	return x;
}

int main
#include <iostream>
using namespace std;

class SavingsAccount {
    int savingBalance;
    public:
        SavingsAccount() : savingBalance(0) {}
    static int annualInterestRate;
    static int setAnnualInterestRate();
    int monthlyInterest();
    int displaybalance();
};
static int SavingsAccount::setAnnualInterestRate(int x) {
    annualInterestRate = x;
}
int SavingsAccount::monthlyInterest() {
    return (savingBalance* annualInterestRate) / 12;
}
int SavingsAccount::displaybalance() {
    return savingBalance + annualInterestRate;
}


int main()
{
    
}

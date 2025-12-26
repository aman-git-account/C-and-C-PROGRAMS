#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;   // hidden data

public:
    void setBalance(double b) {
        balance = b;
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount acc;
    acc.setBalance(5000);
    cout << acc.getBalance();
    return 0;
}

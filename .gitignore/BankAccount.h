
#ifndef BANKACCOUNT_BANKACCOUNT_H
#define BANKACCOUNT_BANKACCOUNT_H

class BankAccount {
private:
    double balance;
    double interestRate;
    double interest;
    int transactions;
public:
    BankAccount(double iRate = 0.025, double bal = 0) {
        balance = bal;
        interestRate = iRate;
        interest = 0;
        transactions = 0;
    }

    void setInterestRate(double iRate);
    void makeDeposit(double amount);
    bool withdraw(double amount);
    void calcInterest();

    double getInterestRate() const;
    double getBalance() const;
    double getInterest() const;
    int getTransactions() const;
};
#endif //BANKACCOUNT_BANKACCOUNT_H

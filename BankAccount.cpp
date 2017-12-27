#include "BankAccount.h"

void BankAccount::setInterestRate(double iRate) {
    interestRate = iRate;
}

void BankAccount::makeDeposit(double amount) {
    balance += amount;
    transactions++;
}

bool BankAccount::withdraw(double amount) {
    if (balance < amount) {
        return false;
    } else {
        balance -= amount;
        transactions++;
        return true;
    }
}

void BankAccount::calcInterest() {
    interest = balance * interestRate;
    balance += interest;
}

double BankAccount::getInterestRate() const {
    return interestRate;
}

double BankAccount::getBalance() const {
    return balance;
}

double BankAccount::getInterest() const {
    return interest;
}

int BankAccount::getTransactions() const {
    return transactions;
}

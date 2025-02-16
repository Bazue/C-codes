/*
A C++ program for encapsulation
Author: Ian Waiguru
Reg No:BSCIT-05-0096/2024
Date:14/02/2025
*/
#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    void setAccountHolder( string a) {
        accountHolder = a;
    }

    string getAccountHolder() {
        return accountHolder;
    }

    void setBalance(double s) {
        balance = s;
        }

    double getBalance()  {
        return balance;
    }
};
int main() {
   BankAccount e1;
   e1. setAccountHolder ("Ian Waiguru");
   cout<< "name is: " << e1.getAccountHolder()<<endl;
   e1.setBalance(50000);
   cout<< "Balance is: "<< e1.getBalance()<< endl;
    return 0;
    }
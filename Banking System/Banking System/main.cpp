//
//  main.cpp
//  Banking System
//
//  Created by Andranik on 4/14/25.
//

#include <iostream>
#include <vector>
#include <string>

class Customer {
private:
    std::string username;
    std::string password;
    double balance;

public:
    Customer(std::string u, std::string p);
    bool checkPassword(std::string input);
    void deposit(double amount);
    bool withdraw(double amount);
    double getBalance();
    std::string getUsername();
};

Customer::Customer(std::string u, std::string p) {
    username = u;
    password = p;
    balance = 0.0;
}

bool Customer::checkPassword(std::string input) {
    return input == password;
}

void Customer::deposit(double amount) {
    balance += amount;
}

bool Customer::withdraw(double amount) {
    if (amount > balance) return false;
    balance -= amount;
    return true;
}

double Customer::getBalance() {
    return balance;
}

std::string Customer::getUsername() {
    return username;
}



int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

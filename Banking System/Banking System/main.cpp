//
//  main.cpp
//  Banking System
//
//  Created by Andranik on 4/14/25.
//

#include <iostream>

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


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

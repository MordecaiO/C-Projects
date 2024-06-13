#include <iostream>

void viewBalance(double current_balance)
{
    std::cout << "Your current balance is: \n"
              << "$" << current_balance << '\n';
}

double deposit(double current_balance)
{
    double deposit_amount;
    std::cout << "How much would you like to deposit? \n";
    std::cin >> deposit_amount;
    double newBalance = current_balance + deposit_amount;
    return newBalance;
}

double withdraw(double current_balance)
{
    double withdraw_amount;
    std::cout << "How much would you like to withdraw? \n";
    std::cin >> withdraw_amount;
    double newBalance = current_balance - withdraw_amount;
    return newBalance;
}

int main()
{
    int option;
    double balance;
    do
    {
        std::cout << "*********************" << '\n';
        std::cout << "Welcome to Evil Corp Bank" << '\n';
        std::cout << "Choose an option below" << '\n'
                  << "1. View Balance" << '\n'
                  << "2. Deposit" << '\n'
                  << "3. Withdraw" << '\n'
                  << "4. Exit" << '\n';
        std::cin >> option;

        switch (option)
        {
        case 1:
            viewBalance(balance);
            break;
        case 2:
            balance = deposit(balance);
            break;
        case 3:
            balance = withdraw(balance);
            break;
        }

    } while (option != 4);
    return 0;
}
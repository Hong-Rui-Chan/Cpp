#include <iostream>

using std::cout;
using std::cin;
using std::endl;

double checkBalance()
{
    double balance = 500.50;
    cout << "\n" << "Your balance is $" << balance << endl;

    return balance;
}

double deposit(double balance)
{
    double depo_amt;

    cout << "How much would you like to deposit?" << endl;
    cin >> depo_amt;

    balance += depo_amt;
    cout << "Your new balance after deposit is " << balance << endl;

    return balance;
}

double withdraw(double balance)
{
    double with_amt;

    cout << "How much would you like to withdraw?" << endl;
    cin >> with_amt;

    balance -= with_amt;
    cout << "Your new balance after withdrawal is " << balance << endl;

    return balance;
}

int main()
{
    int acc_no;
    std::string response;

    cout << "\n" << "************ Welcome to C++ Banking App! ************" << endl;
    cout << "Please enter your account number to begin: " << endl;
    cin >> acc_no;
    cout << "Welcome back, user " << acc_no << endl;
    
    cout << "What would you like to do? (check balance (cb)/ deposit (d)/ withdraw (w)/ quit (q))?" << endl;
    cin >> response;

    while (response != "cb" || response != "d" || response != "w" || response != "q")
    {
        if (response == "cb") 
        {
            checkBalance();
            break;
        } 
        else if (response == "d") 
        {
            deposit(checkBalance());
            break;
        } 
        else if (response == "w") 
        {
            withdraw(checkBalance());
            break;
        }
        else if (response == "q")
        {
            cout << "Goodbye!";
            break;
        }
        else 
        {
            cout << "That is not a valid option, please try again." << endl;
            cin >> response;
        }
    }
    return 0;
}



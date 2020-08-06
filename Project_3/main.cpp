#include <iostream>

using namespace std;

class ATM
{
   int balance;
   public:
       ATM()
       {
           balance = 100;
       }

       void withdrawCash()
       {
           int amount;
           cout<< "Enter amount: ";
           cin>>amount;

           if(amount > balance)
           {
               cout<< "Insufficient balance your balance is "<<balance;
           }
           else
           {
               cout<<"Successfully withdrawed "<<balance;
               balance -= amount; // b = b - amount
           }

       }

       void dipositCash()
       {
           int amount;
           cout<< "Enter amount: ";
           cin>>amount;
           cout<<"Previous balance: "<<balance;
           balance+= amount;
           cout<<"\nCurrent balance: "<<balance;
       }

       void displayBalance()
       {
           cout<<"Balance: "<<balance;
       }

};

int main()
{
    ATM user1;

    int n;

abc:    cout<<"\n\n1. Withdraw\n2.Diposit\n3.Display\n4. quit";

    cout<<"\nEnter your choice: ";
    cin>>n;

    switch(n)
    {
    case 1:
        user1.withdrawCash();
        goto   abc;
        break;

    case 2:
        user1.dipositCash();
        goto   abc;
        break;

    case 3:
        user1.displayBalance();
        goto   abc;
        break;
    case 4:
        return 0;

    default:
        cout<<"INVALID OPTION";
        break;


    }

    return 0;
}

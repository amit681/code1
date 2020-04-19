//parameterised constructor and object and classes
//program which perform some ATM operations
#include<bits/stdc++.h>
using namespace std;
class ATM
{
	long int acc_no;
	string password;
	long int phone_no;
	long int amount;
	int pin;
	int balance;
	public:
	
		void pin_generation();
		void withdraw_cash(int pin);
		int show_balance(int balance);
		void show_details(long int acc_no,long int phone_no,int balance);
		ATM(int bal)
		{
			balance=bal;
			pin_generation();
			withdraw_cash(pin);
			cout<<show_balance(balance)<<endl;
			show_details(acc_no,phone_no,balance);
		}
};
void ATM::pin_generation()
{
	cout<<"Enter your account number\n";
	cin>>acc_no;
	cout<<"Enter your reistered phone number\n";
	cin>>phone_no;
	cout<<"set your four digit pin\n";
	cin>>pin;
	cout<<"pin generated successfully\n";
}
void ATM::withdraw_cash(int pin)
{
	int pin1;
	cout<<"enter your pin for withdrawing a cash\n";
	cin>>pin1;
	if(pin==pin1)
	{
	cout<<"enter the amount for withdraw\n";
	cin>>amount;
	balance=balance-amount;
	if(balance>0)
	cout<<"cash withdrawn successfully\n";
	else
	cout<<"not enough balance\n";
    }
    else
    cout<<"pin is wrong\n";
    
	
}
int ATM::show_balance(int balance)
{
	cout<<"balance amount is\n";
	return balance;
}
void ATM::show_details(long int acc_no,long int phone_no,int balance)
{
	cout<<"your details are\n";
	cout<<" your account number is:: "<<acc_no<<endl;
	cout<<" your phone number is:: "<<phone_no<<endl;
	cout<<" your balance is:: "<<balance<<endl;	
}
int main()
{
	cout<<"you are a new user\n";
ATM a(1000);// 1000 is a initial balance for new user
cout<<"you are a new user\n";
ATM b(2000);// 2000 is a initial balance for new user
	return 0;
}

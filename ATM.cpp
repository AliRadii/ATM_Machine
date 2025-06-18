#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
// ********** begin of variables*************
double balance = 1000;
double deposit;
double withdraw;
int password = 1234;
int operation;
int option;
// ********** end of variables*************

void display()
{

	cout << "enter operation you want to prefom \n";
	cout << "1:show balance\n";
	cout << "2:depsoit\n";
	cout << "3:withdraw\n";
	cout << "4:exit\n";
	cin >> operation;

}

void preform()
{
	cout << "enter password please!\n";
	cin >> password;
	if (password == 1234)
	{
		do
		{
			display();
			switch (operation)
			{
			case 1:

			{
				cout << "your balance is " << balance << endl;
			}

			break;
			case 2:
			{
				cout << "Your balance before deposite is " << balance << endl;
				cout << "enter how much money do you want to deposite \n";
				cin >> deposit;
				balance += deposit;
				cout << "Your balance after deposite is " << balance << endl;
			}
			break;
			case 3:
			{
				cout << "Your balance before wihdarw is " << balance << endl;
				cout << "enter how much money do you want to withdraw \n";
				cin >> withdraw;
				if (withdraw <= balance)
				{
					balance -= withdraw;
					cout << "Your balance after withdraw is " << balance << endl;
				}
				else
					cout << "error ! \n";
			}
			break;
			case 4:
			{
				cout << "Exiting... \n";
			}
			break;

			}




		} while (operation < 4 && operation != 0);

	}
	else
	{
		cout << "incorrect password\n";
		cout << "if you want to try again click 1 if not click 0 \n";
		cin >> option;
		if (option == 1)
		{
			cout << "enter password \n";
			cin >> password;
		}
		else
			cout << "Exiting... \n";

	}
}


int main()
{
	//display();
	preform();
	return 0;

}

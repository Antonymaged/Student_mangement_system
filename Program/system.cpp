#include <iostream>
#include <fstream>

using namespace std;

void usr_register()
{
	ofstream file_of_register;
	file_of_register.open("register.txt");
	string name,age,number;
	cout << "please enter your name: ";
	cin >> name;
	file_of_register << name <<endl;
	cout << "please enter your age: ";
	cin >> age;
	file_of_register << age  <<endl;
	cout << "please enter your number: ";
	cin >> number;
	file_of_register << number<<endl;
}

void login()
{
cout << "Hi" << endl;
}

int main()
{
	string cho;
        ch1:
	cout << "Please chose between (L/l) = login , (R/r) = register\n";
	cin >> cho;
	if(cho == "L" || cho == "l")
	{
		login();
	}
	else if(cho == "R" || cho == "r")
	{
		usr_register();
	}
	else
	{
		cout << "Wrong choice try again" << endl;
		goto ch1;
	}
	return 0;
}

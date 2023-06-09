#include <iostream>
using namespace std;

int main()
{
	string cho;
        ch1:
	cout << "Chose between (L/l) = login , (R/r) = register";
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

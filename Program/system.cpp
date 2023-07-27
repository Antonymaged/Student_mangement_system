#include <iostream>
#include <fstream>

using namespace std;

void chose_cources()
{
}
void usr_register()
{
	unsigned int numos;
	string name,age,number,password;
	ofstream file_of_register;
	file_of_register.open("register.txt", ios_base::app);
	cout << "Enter number of students you want to add: ";
	cin >> numos;
	cout << endl;
	for (int i = 0; i < numos; i++)
	{
		cout << "please enter your name: ";
        	cin >> name;
        	file_of_register << name << "\t";
        	cout << "please enter your age: ";
        	cin >> age;
        	file_of_register << age  << "\t";
        	cout << "please enter your number: ";
        	cin >> number;
        	file_of_register << number<< "\t";
		cout << "please enter a strong password: ";
		cin >> password;
		file_of_register << password<< "\t\n";
	}
	file_of_register.close();
}

bool login()
{
    int ch;
    ifstream file;
    string n, pass, line;
    bool found = false;
    file.open("register.txt");
    if (!file)
    {
        cerr << "Unable to open file. Please register first." << endl;
        return false;
    }

    cout << "Please enter your username: ";
    cin >> n;
    cout << "Please enter your password: ";
    cin >> pass;

    while (getline(file, line))
    {
        if (line.find(n) != string::npos && line.find(pass) != string::npos)
        {
            found = true;
            break;
        }
    }

    file.close();

    if (found)
    {
        cout << "\t\t\t\t\t\tLogin successful." << endl;
         ch:
         cout << "1) chose cources."<<endl
         << "2) gpa calc." << endl
         << "3) edit profile"<<endl
         << "4) show cources"<<endl
         << "5) Log out"<<endl;
        return true;
    }
    else
    {
        cout << "\t\t\t\t\t\tIncorrect username or password." << endl;
        return false;
    }
}

int main()
{
	string cho1,cho2;
        ch1:
	cout << "Please chose between (L/l) = login OR (R/r) = register\n";

	cin >> cho1;
	if(cho1 == "L" || cho1 == "l")
	{
		login();
	}
	else if(cho1 == "R" || cho1 == "r")
	{
		usr_register();
	}
	else
	{
		cout << "Wrong choice try again" << endl;
		goto ch1;
	}
  	ch2:
	cout << "Do you want to do any another process(Y/N): ";
	cin >> cho2;
	if (cho2 == "Y" || cho2 == "y")
	{
		goto ch1;
	}
	else if (cho2 == "N" || cho2 == "n")
	{
		cout << "Thanx for using my program :)" <<endl;
	}
	else
	{
		cout <<"Can't understand your choice try again"<<endl;
		goto ch2;
	}
	return 0;
}

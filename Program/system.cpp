#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void chose_cources(string name)
{
	ofstream cource;
	int year, numoc, course;
	char term;
	cource.open("./data_base/"+name+".txt");
	year:
	cout <<"which year are you in: ";
	cin >> year;
	switch (year)
	{
		case 1:
			term:
			cout <<"which term are you in: ";
			cin >> term;
			switch (term)
			{
				case 'f':
					numoc11:
					cout <<"how meny courses do you want to study";
					cin >> numoc;
					if (numoc < 1 || numoc > 6)
					{
						cout <<"Wrong number of cources try again\n";
						goto numoc11;
					}
					else
					{
						cout << "chose between\n";
						cout << "1. BS 111 English Language I\n";
						cout <<	"2. BS 141 Physics for Scientists and Engineer\n";
						cout <<	"3. BS 151 Linear Algebra I\n";
						cout <<	"4. BS 153 Mathematical Analysis I\n";
						cout <<	"5. CS 111 Introduction to Computer Science\n";
						cout <<	"6. CS 112 Introduction to Programming-2022\n";
						for (int i = 0; i < numoc ; i++)
						{
							chose:
							cin >> course;
							switch (course)
							{
								case 1:
								cource << "BS 111 English Language I.\n";
								break;
								case 2:
								cource << "BS 141 Physics for Scientists and Engineer.\n";
								break;
								case 3:
								cource << "BS 151 Linear Algebra I.\n";
								break;
								case 4:
								cource << "BS 153 Mathematical Analysis I.\n";
								break;
								case 5:
								cource << "CS 111 Introduction to Computer Science.\n";
								break;
								case 6:
								cource << "CS 112 Introduction to Programming-2022.\n";
								break;
								default:
								cout << "year 1 first tearm have only 6 cources try again\n";
								goto chose;
								break;
							}
						}
					}
				break;
				case 's':
					numoc12:
                                        cout <<"how meny courses do you want to study: ";
                                        cin >> numoc;
                                        if (numoc < 1 || numoc > 6)
                                        {
                                                cout <<"Wrong number of cources";
                                                goto numoc12;
                                        }
                                        else
                                        {
                                                cout << "chose between\n";
                                                cout << "1. BS 111 Engish Language II\n";
                                                cout << "2. BS 141 Applied electronics\n";
                                                cout << "3. BS 151 Linear Algebra II\n";
                                                cout << "4. BS 153 Mathematical Analysis II\n";
                                                cout << "5. CS 111 Introduction to Computer Skills\n";
                                                cout << "6. CS 112 Structured programing\n";
                                                for (int i = 0; i < numoc ; i++)
                                                {
                                                        chose1:
                                                        cin >> course;
                                                        switch (course)
                                                        {
                                                                case 1:
                                                                cource << "BS 111 English Language II.\n";
                                                                break;
                                                                case 2:
                                                                cource << "BS 141 Applied electronics.\n";
                                                                break;
                                                                case 3:
                                                                cource << "BS 151 Linear Algebra II.\n";
                                                                break;
                                                                case 4:
                                                                cource << "BS 153 Mathematical Analysis II.\n";
								break;
								case 5:
								cource << "CS 111 Introduction to Computer Skills.\n";
								break;
								case 6:
								cource << "CS 112 Structured programing\n";
								break;
								default:
								cout << "First year second tearm have only 6 subjects try agin\n";
								goto chose1;
								break;
							}
						}
					}
				break;
				default:
				cout << "there is two terms in the year try again\n";
				goto term;
				break;
			}
		break;
		case 2:
			term1:
			cout << "which term are you in: ";
			cin >> term;
			switch(term)
			{
				case 'f':
					numoc21:
					cout << "how many courses do you want to study: ";
					cin >> numoc;
					if (numoc > 6 || numoc < 1)
					{
						cout << "worng number of courses try again\n";
						goto numoc21;
					}
					else
					{
						cout << "chose between\n";
						cout << "1. physics\n";
						cout << "2. introduction to information system\n";
						cout << "3. introduction to computing\n";
						cout << "4. ESP I\n";
						cout << "5. creativity & enovation\n";
						cout << "6. fundementals of busnis\n";
						for (int i = 0; i < numoc; i++)
						{
							cource1:
							cin >> course;
							switch(course)
							{
								case 1:
								cource << "Physics\n";
								break;
								case 2:
								cource << "introduction to information system\n";
								break;
								case 3:
								cource << "introduction to computing\n";
								break;
								case 4:
								cource << "ESP I\n";
								break;
								case 5:
								cource << "creativity & enovation\n";
								break;
								case 6:
								cource << "fundementals of busnis\n";
								break;
								default:
								cout << "Second year first tearm have only 6 subjects trya again\n";
								goto cource1;
								break;
							}
						}
					}
				break;
				case 's':
				numoc22:
                                        cout << "how many courses do you want to study: ";
                                        cin >> numoc;
                                        if (numoc > 6 || numoc < 1)
                                        {
                                                cout << "worng number of courses try again\n";
                                                goto numoc22;
                                        }
                                        else
                                        {
                                                cout << "chose between\n";
                                                cout << "1. physics\n";
                                                cout << "2. introduction to information system\n";
                                                cout << "3. introduction to computing\n";
                                                cout << "4. ESP I\n";
                                                cout << "5. creativity & enovation\n";
                                                cout << "6. fundementals of busnis\n";
                                                for (int i = 0; i < numoc; i++)
                                                {
                                                        cource2:
                                                        cin >> course;
                                                        switch(course)
                                                        {
                                                                case 1:
                                                                cource << "Physics\n";
                                                                break;
                                                                case 2:
                                                                cource << "introduction to information system\n";
                                                                break;
                                                                case 3:
                                                                cource << "introduction to computing\n";
                                                                break;
                                                                case 4:
                                                                cource << "ESP I\n";
                                                                break;
                                                                case 5:
                                                                cource << "creativity & enovation\n";
                                                                break;
                                                                case 6:
                                                                cource << "fundementals of busnis\n";
                                                                break;
                                                                default:
                                                                cout << "Second year first tearm have only 6 subjects trya again\n";
                                                                goto cource2;
                                                                break;
							}
						}
					}
				break;
				default:
				cout << "second year have only two tearms try again\n";
				goto term1;
				break;
			}
		break;
		default:
		cout << "sorry our program have only 2 years to chose between wait for the next update.\n";
		goto year;
		break;
	}
}

void gpa_calc(string name)
{
    float gpa, gp, dgree, tgp = 0, tch = 0, count = 0, hour;
    string grade,n;
    ifstream stu_file;
    stu_file.open("./data_base/" + name + ".txt");
    if (!stu_file.is_open())
    {
        cout << "Unable to open file." << endl;
        return;
    }
    while (getline(stu_file, n))
    {
        count++;
    }
    stu_file.close();

    for (int i = 0; i < count; i++)
    {
    wrongg:
        cout << "Please enter your grade: ";
        cin >> grade;
        if (grade == "A+" || grade == "a+" || grade == "A" || grade == "a")
        {
            dgree = 4.0;
        }
        else if (grade == "A-" || grade == "a-")
        {
            dgree = 3.7;
        }
        else if (grade == "B+" || grade == "b+")
        {
            dgree = 3.3;
        }
        else if (grade == "B" || grade == "b")
        {
            dgree = 3.0;
        }
        else if (grade == "B-" || grade == "b-")
        {
            dgree = 2.7;
        }
        else if (grade == "C+" || grade == "c+")
        {
            dgree = 2.3;
        }
        else if (grade == "C" || grade == "c")
        {
            dgree = 2.0;
        }
        else if (grade == "C-" || grade == "c-")
        {
            dgree = 1.7;
        }
        else if (grade == "D+" || grade == "d+")
        {
            dgree = 1.3;
        }
        else if (grade == "D" || grade == "d")
        {
            dgree = 1.0;
        }
        else if (grade == "D-" || grade == "d-")
        {
            dgree = 0.7;
        }
        else if (grade == "F" || grade == "f")
        {
            dgree = 0.0;
        }
        else
        {
            cout << "Wrong choice. Try again." << endl;
            goto wrongg;
        }
    time:
        cout << "Please enter the number of hours: ";
        cin >> hour;
        if (hour >= 3 && hour <= 10)
        {
            gp = hour * dgree;
            tgp += gp;
            tch += hour;
        }
        else
        {
            cout << "Invalid number of study hours." << endl;
            goto time;
        }
    }
    gpa = tgp / tch;
    cout << "Your total hours: " << tch << endl;
    cout << "Your total grade points: " << tgp << endl;
    cout << "Your GPA: " << gpa << endl;
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
	 cout << "chose in numbers here: ";
	cin >> ch;
	switch(ch)
	{
		case 1:
			chose_cources(n);
		break;
		case 2:
			gpa_calc(n);
		break;
		case 4:
		break;
		default:
		cout << "Wrong choice chose again"<<endl;
		goto ch;
		break;
	}
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
	cout << "Please chose between\n(L/l) = login\n(R/r) = register\n(E/e) = exit\n";
	cout << "chose here :";
	cin >> cho1;
	if(cho1 == "L" || cho1 == "l")
	{
		login();
	}
	else if(cho1 == "R" || cho1 == "r")
	{
		usr_register();
	}
	else if(cho1 == "E" || cho1 == "e")
	{
		goto thx;
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
		thx:
		cout << "Thanx for using my program :)" <<endl;
	}
	else
	{
		cout <<"Can't understand your choice try again"<<endl;
		goto ch2;
	}
	return 0;
}


#include <conio.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Employee
{
	int id;
	string Fname;
	string Lname;
	float Pay;
	float hours;

};

int main()
{
	char again;
	vector <Employee> emps;

	while (true)
	{
		Employee temp;


		cout << "Please enter the Emplayees First name: ";
		cin >> temp.Fname;
		cout << "Please enter the Emplayees last name: ";
		cin >> last;
		cout << "Please enter the Emplayees last name: ";
		cin >> last;



		cout << "Do you wanna add employees? ";
		cin >> again;

		while (again == 'n' || again == 'N')
		{
			break;
		}
	}

	//

	_getch();

	return 0;
}

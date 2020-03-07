
#include <iostream>
#include <string>
using namespace std;


void task7()
{
	struct Student
	{
		char Sname[50];
		int Group;
		int Physics;
		int Inform;
	};

	const int size = 5;
	Student students[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Surname - ";
		cin >> students[i].Sname;
		cout << "Group - ";
		cin >> students[i].Group;
		cout << "Phisics Grade - ";
		cin >> students[i].Physics;
		cout << "Inform Grade - ";
		cin >> students[i].Inform;
		cout << "\n";
		cout << " ---------------------------------------------";
		cout << "\n\n";
	}


	double AvrGrade = 0;
	for (int i = 0; i < size; i++)
	{
		AvrGrade += students[i].Physics;
	}
	cout << "AvrGrade : " << AvrGrade / size << endl;


	cout << "\n";

	cout << " -------------------------------------------- ----------------------------------------------\n";
	cout << " -------------------------------------------- ----------------------------------------------\n";
	cout << " -------------------------------------------- ----------------------------------------------\n";
	cout << " -------------------------------------------- ----------------------------------------------\n";
	cout << "\n\n";
	cout << "\t\tStudents who have 5 in Inform: ";
	cout << "\n\n";

	for (int i = 0; i < size; i++)
	{
		if (students[i].Inform == 5)
		{
			cout << "Surname - " << students[i].Sname << "\n";
			cout << "Group - " << students[i].Group << "\n";
			cout << "Phisics Grade - " << students[i].Physics << "\n";
			cout << "Inform Grade - " << students[i].Inform << "\n";
			cout << "\n";
			cout << " ---------------------------------------------";
			cout << "\n\n";
		}
	}





}



int main()
{
	task7();
	
	system("pause");
}
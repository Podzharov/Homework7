	// Сергей Поджаров.
	// Урок 7.

#include <iostream>
#include "mylib.h"
#include <fstream>
		// Задание 2.
#define numberСheck(x, y) ( (x) >= 0 && (x) < (y) ? "true" : "false")
		// Задание 3.
#define SIZEARRAY 5

using namespace std;

		// Задание 4.
#pragma pack(push, 1)
struct Employee
{
	long id; 
	unsigned short age; 
	double salary;
};
#pragma pack(pop)

int main()
{
		// Задание 2.
	{
		cout << "Enter number " << endl;
		int x;
		cin >> x;
		cout << numberСheck(x, 100) << endl;
		cout << "=============================" << endl;
	}
		// Задание 3.
	{
		int arr[SIZEARRAY];
		Mylib::initialArrayTask3(arr, SIZEARRAY);
		Mylib::sortingArray(arr, SIZEARRAY);
		Mylib::printArrayTask3(arr, SIZEARRAY);
		cout << "=============================" << endl;
	}

		// Задание 4.
	{
		Employee* pEmployee = new Employee;
		pEmployee->id = 1503732;
		pEmployee->age = 32;
		pEmployee->salary = 150'000;

		cout << pEmployee->id << endl << pEmployee->age << endl << pEmployee->salary << endl;

		ofstream fout("Employee.txt");

		fout << "ID " << pEmployee->id << endl << "Age " << pEmployee->age <<
		endl << "Salary " << pEmployee->salary << endl;

		cout << "Size struct = " << sizeof(Employee) << endl;

		delete pEmployee;
		cout << "=============================" << endl;
	}

		// Задание 5.
	{
		const int SIZE = 6;
		float arr[SIZE]{ 1.2, -3.8, 15.7, 25.3, 5.8, -7.9 };
		Mylib::initialArrayTask5(arr, SIZE);
		Mylib::printArrayTask5(arr, SIZE);
		Mylib::countingArray(arr, SIZE);
	}
	
	return 0;
}



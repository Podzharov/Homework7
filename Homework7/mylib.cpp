
#include <iostream>
#include <fstream>
	// Задание 3.
#define SwapINT(a, b) (swap(ArrayTask3[j], ArrayTask3[j + 1]))
using namespace std;

namespace Mylib
{
	// Задание 2.
	void countingArray(float array[], int size)
	{
		int NumberOfPositives = 0;
		int NumberOfNegatives = 0;
		for (size_t i = 0; i < size; i++)
		{
			if (array[i] > 0)
			{
				NumberOfPositives++;
			}
			else if (array[i] < 0)
			{
				NumberOfNegatives++;
			}
		}
		cout << "Number of positives = " << NumberOfPositives << endl;
		cout << "Number of negatives = " << NumberOfNegatives << endl;

	}
	
	// Задание 3.
	void initialArrayTask3(int array[], int size)
	{
		int element = 1;
		for (size_t i = 0; i < size; i++)
		{
			cout << "Enter " << element << " element massive" << endl;
			element++;
			cin >> array[i];
		}
	}
	
	void sortingArray(int ArrayTask3[], int size)
	{
			
			for (size_t i = 0; i < size; i++)
			{
				for (size_t j = 0; j < size -1 -i; j++)
				{
					if (ArrayTask3[j] > ArrayTask3[j + 1])
					{
						SwapINT();
					}
				}
			}
	}
	
	void printArrayTask3(int array[], int size)
	{
		for (size_t i = 0; i < size; i++)
		{
			cout << array[i] << " ";
		}
		cout << endl;
	}
		
	// Задание 5.
	void initialArrayTask5(float array[], int size)
	{
		for (size_t i = 0; i < size; i++)
			array[i];
	}

	void printArrayTask5(float array[], int size)
	{
		for (size_t i = 0; i < size; i++)
		{
			cout << array[i] << " ";
		}
		cout << endl;
	}
	
}
	


#include <iostream>
using namespace std;
void removDuplicates(int*, int, int&);
int main()
{
	const int SIZE = 30;
	int array[SIZE], newSize = 0, size;
	cout << "Enter the how man numbers you wwant to enter :";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cin >> *(array + i);
	}
	removDuplicates(array, size, newSize);
	cout << "After removing duplicate elements the new array elements are as !!" << endl << "{";
	for (int i = 0; i < newSize; i++)
	{
		cout << *(array + i) << " ";
	}
	cout << "}" << endl;
	return 0;
}
void removDuplicates(int* arr, int size, int& newSize)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (*(arr + i) == *(arr + j))
			{
				for (int k = j; k < size; k++)
				{
					*(arr + k) = *(arr + k + 1);
				}
				size--;
				j--;
			}

		}
	}
	newSize = size;
}
/*
 

#include <iostream>
using namespace std;
void removDuplicates(int*, int, int&);
int main()
{
	const int SIZE = 30;
	int array[SIZE], newSize = 0, size;
	cout << "Enter the how man numbers you wwant to enter :";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cin >> *(array + i);
	}
	removDuplicates(array, size, newSize);
	cout << "After removing duplicate elements the new array elements are as !!" << endl << "{";
	for (int i = 0; i < newSize; i++)
	{
		cout << *(array + i) << " ";
	}
	cout << "}" << endl;
	return 0;
}
void removDuplicates(int* arr, int size, int& newSize)
{
	int d = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (*(arr + i) == *(arr + j))
			{
				for (int k = j; k < size; k++)
				{
					*(arr + k) = *(arr + k + 1);
				}
				d++;
				//	j--;
			}

		}
	}
	size = size - d;
	newSize = size;
}

*/

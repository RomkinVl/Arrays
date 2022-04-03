#include <iostream>
using namespace std;

//#define TASK_8
//#define TASK_9

void main()
{
	setlocale(LC_ALL, "");

#ifdef TASK_8
	//Constant
	const int SIZE = 10;

	//Variables
	int n, buffer;

	//Arrays
	int arr[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };

	//Programm
	cout << "Вывод массива: " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl << endl;

	cout << "На какое число элементов необходимо сдвинуть массив: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		buffer = arr[0];
		for (int j = 0; j < SIZE - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[9] = buffer;
	}
	cout << endl;

	cout << "Результат выполнения: " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif // TASK_8

#ifdef TASK_9
	//Constant
	const int SIZE = 10;

	//Variables
	int count;

	//Arrays
	int arr[SIZE];

	//Programm
	cout << "Заполните массив любыми целыми числами: " << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << "Элемент " << i << " - "; cin >> arr[i];
	}
	cout << endl << endl;

	for (int i = 0; i < SIZE; i++) {

		count = 0;

		for (int j = i; j < SIZE; j++) {

			if (arr[i] == arr[j]) count++;
		}

		if (count > 1) {

			cout << "Количество повторений значения " << arr[i] << " - " << count;
			cout << endl;
		}

		count = 0;

	}
#endif // TASK_9
		
}
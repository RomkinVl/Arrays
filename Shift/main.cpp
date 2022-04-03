#include <iostream>
using namespace std;

//#define TASK_8
#define TASK_9

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
	const int SIZE_C = 10;
	const int SIZE_L = 2;

	//Variables
	int count, buffer;

	//Arrays
	int arr[SIZE_L][SIZE_C];

	//Programm
	cout << "Заполните массив любыми целыми числами: " << endl;
	for (int i = 0; i < SIZE_C; i++) {
		cout << "Элемент " << i << " - "; cin >> arr[0][i];
	}
	cout << endl << endl;

	for (int i = 0; i < SIZE_C; i++) {

		count = 0;

		for (int j = 0; j < SIZE_C; j++) {

			if (arr[0][i] == arr[0][j]) count++;			
		}

		arr[1][i] = count;

		count = 0;

	}

	for (int i = 0; i < SIZE_C; i++) {

		buffer = arr[0][i];

		for (int j = i + 1; j < SIZE_C; j++) {

			if (arr[0][j] == buffer) {
				arr[0][j] = 0;
				arr[1][j] = 0;
			}
		}
	}

	for (int i = 0; i < SIZE_C; i++) {

		if (arr[0][i] != 0) cout << "Количество повторений значения " << arr[0][i] << " - " << arr[1][i] << endl;
		
	}


	/*for (int i = 0; i < SIZE_C; i++) {
		cout << arr[0][i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < SIZE_C; i++) {
		cout << arr[1][i] << "\t";
	}*/
#endif // TASK_9
		
}
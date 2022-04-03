#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	//Constant
	const int SIZE = 5;

	//Variables
	int summ = 0;
	int min, max;
	double average;

	//Arrays
	int arr[SIZE];
	
	//Programm
	cout << "Заполнение массива." << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Введите " << i << "-й элемент: "; cin >> arr[i];
	}
	cout << endl << endl;

	cout << "Вывод элементов массива в прямом порядке." << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl << endl;

	cout << "Вывод элементов массива в обратном порядке." << endl;
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl << endl;

	cout << "Сумма элементов массива: ";
	for (int i = 0; i < SIZE; i++)
	{
		summ += arr[i];
	}
	cout << summ;
	cout << endl << endl;

	cout << "Среднее арифметическое элеметнов массива: ";
	average = (double)summ / SIZE;
	cout << average;
	cout << endl << endl;

	cout << "Минимальное и максимальное значения элементов массива: " << endl;
	min = arr[0];
	max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] > max) max = arr[i];
		if (arr[i] < min) min = arr[i];
	}

	cout << "Минимальное значение: " << min << endl;
	cout << "Максимальное значение: " << max << endl;
}
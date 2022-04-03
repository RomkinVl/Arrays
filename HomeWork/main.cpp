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
	cout << "���������� �������." << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << "������� " << i << "-� �������: "; cin >> arr[i];
	}
	cout << endl << endl;

	cout << "����� ��������� ������� � ������ �������." << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl << endl;

	cout << "����� ��������� ������� � �������� �������." << endl;
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl << endl;

	cout << "����� ��������� �������: ";
	for (int i = 0; i < SIZE; i++)
	{
		summ += arr[i];
	}
	cout << summ;
	cout << endl << endl;

	cout << "������� �������������� ��������� �������: ";
	average = (double)summ / SIZE;
	cout << average;
	cout << endl << endl;

	cout << "����������� � ������������ �������� ��������� �������: " << endl;
	min = arr[0];
	max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] > max) max = arr[i];
		if (arr[i] < min) min = arr[i];
	}

	cout << "����������� ��������: " << min << endl;
	cout << "������������ ��������: " << max << endl;
}
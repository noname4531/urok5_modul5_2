#include<iostream>
#include<locale.h>
#include <time.h>
using namespace std;
void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	cout << "Ведите номер задание :" << endl;
	int x;
	cin >> x;
	switch (x)
	{
	case 1:
	{
		/*1.	Написать программу, которая в матрице чисел A(N, M) находит все элементы,
		превышающие по абсолютной величине заданное число B.
		Подсчитать число таких элементов и записать их в массив C.
		*/
		int a[8][5];
		int b[] = { 0 };
		int n;
		int l = 0;
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				a[i][j] = 1 + rand() % 100;
				cout << a[i][j] << " \t";
			}
			cout << endl;
		}
		cout << "Введите число:" << endl;
		cin >> n;
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (a[i][j]>n)
				{
					cout << a[i][j] << " ";

				}
			}
		}

	}break;
	case 2:
	{
		/*2.	Дана целочисленная матрица размера 8х5. Определить:
		a.сумму всех элементов второго столбца массива;
		b.сумму всех элементов 3 - й строки массива
		*/
		int a[8][5];
		int sum1 = 0;
		int sum2 = 0;
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				a[i][j] = 1 + rand() % 100;
				cout << a[i][j] << " \t";
			}
			cout << endl;
		}
		for (int i = 0; i < 8; i++)
		{
			sum1 += a[i][1];
		}
		cout << "суммa всех элементов второго столбца массива=" << sum1 << endl;
		for (int j = 0; j < 5; j++)
		{
			sum2 += a[2][j];
		}
		cout << "суммa всех элементов 3 - й строки массива=" << sum2 << endl;
	}break;
	case 3:
	{
		/*3.	Дана целочисленная прямоугольная матрица размера M•N.
		Сформировать одномерный массив, состоящий из элементов, лежащих в интервале[1, 10].
		Найти произведение елементов полученного одномерного */
		int a[8][5];
		int b[] = { 0 };
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				a[i][j] = 1 + rand() % 20;
				cout << a[i][j] << " \t";
			}
			cout << endl;
		}
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if ((a[i][j] > 0 && a[i][j] < 10))
				{
					cout << a[i][j] << " ";
				}
			}
		}


	}break;
	case 4:
	{
		//4.	Дана целочисленная квадратная матрица.Указать столбец(назвать его номер), 
		//где минимальное количество элементов, кратных сумме индексов
		int a[5][5];
		int sum = 0;
		int count = 0, x;
		int 	min = 5;
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				a[i][j] = 1 + rand() % 20;
				cout << a[i][j] << " \t";
			}
			cout << endl;
		}
		for (int j = 0; j < 5; j++)
		{
			cout << j << " ";
			for (int i = 0; i < 5; i++)
			{
				if (i || j)
				{
					if (a[i][j] % (i + j) == 0)
					{
						count++;
					}
				}
			}
			if (count < min && count > 0)
			{
				min = count;
				x = j;
			}
		}
		cout << endl;
		cout << min << endl;


	}break;
	case 5:
	{
		//5.	Дана целочисленная квадратная матрица.Найти сумму элементов матрицы, лежащих выше главной диагонали
		int a[5][5];
		int sum = 0;
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				a[i][j] = 1 + rand() % 20;
				cout << a[i][j] << " \t";
			}
			cout << endl;
		}
		cout << "==============================" << endl;
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (i< j)
				{
					sum += a[i][j];
				}

			}
		}
		cout << "суммa элементов матрицы, лежащих выше главной диагонали=" << sum << endl;

	}break;

	}
}
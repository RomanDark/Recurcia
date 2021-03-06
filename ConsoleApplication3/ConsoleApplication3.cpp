// ConsoleApplication3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>

using namespace std;


#pragma region 1.

int rec(int n) {
	//n = 5;

	if (n == 1) return 1;
	return	n * rec(n - 1);

	rec(n);
}
#pragma endregion

#pragma region 46.

int Pow(int x, int y) {

	if (y == 0) return 1;
	return x * Pow(x, y - 1);

}

#pragma endregion

#pragma region 47.

int mn(int x, int y) {

	if (y == 1) return x;
	return x + mn(x, y - 1);

}

#pragma endregion

#pragma region 48.

void N(int n) {
	if (n == 0) return;
	cout << "*";
	N(n - 1);
}

#pragma endregion

#pragma region 50.

int Sum(int a, int b) {

	if (a == b) return a;
	return a + Sum(a + 1, b);

}

#pragma endregion

#pragma region SumArray

int	arrSum(int a[], int size) {

	if (size == 0) return a[size];
	return a[size] + arrSum(a, size - 1);
}

#pragma endregion

#pragma region SumArray2

int SumArray2(int a[], int left, int right) {
	int middle = (left + right) / 2;
	if (left == right) return a[left];
	return (SumArray2(a, left, middle) + SumArray2(a, middle + 1, right));
}

#pragma endregion

#pragma region maxArray

int maxA(int a[], int size, int max) {

	if (size == 0) return max;

	if (maxA(a, size - 1, max) < a[size]) max = a[size];

	return maxA(a, size - 1, max);

}

#pragma endregion

//#pragma region maxArray2
//
//int MaxArray2(int a[], int left, int right) {
//
//	int middle = (left + right) / 2;
//	if (left == right) return a[left];
//
//
//}
//
//#pragma endregion

#pragma region 51.

int ArrayZ(int a[], int size,int  max) {
	
	int sum = 0;

	for (int i = 0; i < 20; i++)
	{
		sum = 0;

		for (int j = i; j < i+2; j++)
		{
			sum += a[j];
		}
		cout << sum << endl;

		if (sum > max) max = i;
	}

	return max;
}

#pragma endregion


int main()
{
	int max = INT_MIN;

	srand(time(NULL));

	int arrZ[20];

	for (int i = 0; i < 20; i++)
	{
		arrZ[i] = 1 + rand() % 10;
		
	}
	for (int i = 0; i < 20; i++)
	{
		cout <<i<< " = " << arrZ[i] << " ";
	}
	cout << endl;

	cout << "51 = " << ArrayZ(arrZ, 19, max) << endl;

	
	int ar[] = { 1,2,3,8,5,6,7 };

	//cout << "Max Array 2 = " << MaxArray2(ar, 0, 6), cout << endl;

	cout << "MaxArray = " << maxA(ar, 6, max) << endl;

	cout << "Sum array 2 = " << SumArray2(ar, 0, 6) << endl;;

	cout << "sum array = " << arrSum(ar, 6) << endl;

	cout << "50 = " << Sum(4, 7) << endl;

	cout << "48 = ";
	N(6);
	cout << endl;

	cout << "47 = " << mn(4, 5) << endl;

	cout << "46 = " << Pow(6, 4) << endl;

	int n = 5;
	cout << rec(n) << endl;


	system("pause");
	return 0;
}


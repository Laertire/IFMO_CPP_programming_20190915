//Дана последовательность натуральных чисел, завершающаяся числом 0.
// Определите, какое наибольшее число подряд идущих элементов этой последовательности равны друг другу.
// Если не нашлось ни одной пары, тройки и т.д. элементов, равных друг другу, то программа должна вывести число 1.
//Формат входных данных
//        Вводится последовательность натуральных чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//1
//7
//7
//9
//1
//0
//Sample Output:
//
//2

#include "t09_row.h"
#include <iostream>

using namespace std;

int t09_row() {
	int a = 0;
	int c = 0;
	int g = 0;
	int b = 0;
	int z = 0;
	int e = 1;
	z = 1;
	while (z != 0)
	{
		c = z;
		cin >> z;
		if (c == z)
		{
			if (g != z)
			{
				b = 1;
			}
			b++;
			g = z;
			if (e < b)
			{
				e = b;
			}
		}
	}
	if (z == 0)
	{
		cout << e;
		return 0;
	}
};

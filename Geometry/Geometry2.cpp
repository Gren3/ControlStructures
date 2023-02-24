//geometry
#include<iostream>
using namespace std;

void(main)
{
	setlocale(LC_ALL, "")
	cout << "введите высоты треугольника"; cin >> n;
	int fi = 1;
	for int(int = 1; i < n; i++)
	{
		fi *= i;
		int fj = 1;
		for (int j = 1; j < i; j++)
		{
			fj *= i;
			int fij = 1;
			for(ink k=1; k<i;k++)
			{
				fij *= k;

			}
			cout << fi / (fj * fij) << "\t";
		}
		cout << endl;
	}

}
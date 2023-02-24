#include <iostream>
#include<Windows.h>
using namespace std;
using std::cin;
using std::cout;
//#define Multiplication_table
//#define Pighaghor
void main()
{
#ifdef Multiplication_table
	for (int i = 1; i <= 10; i++)
	{
		cout << "Таблица умножения на" << i << ":\n";
		for (int j = 1; j <= 10; j++)
		{
			cout << "\t\t\t";
			if (i < 10) cout << " ";
			cout << i << "*";
			if (j < 10)cout << " ";
			cout << j << "=";
			if (i * j < 100)cout << " ";


		}
#endif

#ifdef Pighaghor
		for(int i=1; i<10;i++)
		{
			for (int j = 1; j <= 10; j++)
			{
				cout.width(5);
				cout << right;
				cout<< i * j;
}
			cout << endl;
		}
#endif


}




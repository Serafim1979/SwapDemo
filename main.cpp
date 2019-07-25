#include<iostream>
///////////////////////////////////////////////////////////
using std::cout;
using std::cin;
using std::endl;
///////////////////////////////////////////////////////////
void swapr(int & a, int & b);
void swapp(int * p, int * q);
void swapv(int a, int b);
///////////////////////////////////////////////////////////
int main()
{
	int wallet1 = 300;
	int wallet2 = 350;
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;

	cout << "Using references to swap contents:\n";
	swapr(wallet1, wallet2);
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;

	cout << "Using ponters to swap contents again:\n";
	swapp(&wallet1, &wallet2);
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;

	cout << "Trying to use passing by value:\n";
	swapv(wallet1, wallet2);
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;

	system("pause");
	return 0;
}
////////////////////////////////////////////////////////////
void swapr(int & a, int & b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
////////////////////////////////////////////////////////////
void swapp(int * p, int * q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}
////////////////////////////////////////////////////////////
void swapv(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
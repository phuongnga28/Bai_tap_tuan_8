#include <iostream>
using namespace std;
void f(int xval)
{
	int x;
	x = xval;
	cout << &x << endl;
}
void g(int yval)
{
	int y;
	cout << &y << endl;
}
int main()
{
	f(7);
	g(11);
	return 0;
}
	//Hai bien deu có cùng dia chi, do là bien dia phuong dau tiên cua hàm và hàm deu duoc goi tu main

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
	//Hai bien deu c� c�ng dia chi, do l� bien dia phuong dau ti�n cua h�m v� h�m deu duoc goi tu main

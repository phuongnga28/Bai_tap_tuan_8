#include <iostream>
using namespace std;
int main()
{
	double a[5] = { 1,2,3,4 };
	for (double* cp = a; (*cp) != '\0'; cp += 2) {
		cout << (void*)cp << " : " << (*cp) << endl;
	}
	return 0;
	//Kích thuoc kieu int là 4
	//Kích thuoc kieu double là 8
	//Ket qua tuong tu, khác biet là do bien cp dã bo qua mot so bien thông qua tang 2 thay vì tang 1
}

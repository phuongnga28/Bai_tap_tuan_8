#include <iostream>
using namespace std;
int main()
{
	double a[5] = { 1,2,3,4 };
	for (double* cp = a; (*cp) != '\0'; cp += 2) {
		cout << (void*)cp << " : " << (*cp) << endl;
	}
	return 0;
	//K�ch thuoc kieu int l� 4
	//K�ch thuoc kieu double l� 8
	//Ket qua tuong tu, kh�c biet l� do bien cp d� bo qua mot so bien th�ng qua tang 2 thay v� tang 1
}

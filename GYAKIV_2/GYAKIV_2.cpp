//Makro definíciók
#include<iostream>
using namespace std;
#define PI 3.14145// a néhány soros függvény helyett használjunk makrót
#define osszead(X, Y) (X) + (Y)
#define szoroz(X, Y) (X) * (Y) // Mi történik, ha elhagyjuk a zárójelet X*Y =>25
#define szoroz2(X, Y) (X) * Y
#define oszt(X, Y) X / Y
int main()
{
	int i = 3, k = 8;
	cout << osszead(i, k) << endl;
	cout << szoroz(i + 3, k - 2) << endl;
	cout << osszead(PI, k) << endl;
	cout << szoroz2(i + 3, k - 2) << endl;
	cout << oszt(i, k) << endl;
	cout << oszt(3.0, 8.0) << endl;
	system("pause");
	return 0;
}
//Makro defin�ci�k
#include<iostream>
using namespace std;
#define PI 3.14145// a n�h�ny soros f�ggv�ny helyett haszn�ljunk makr�t
#define osszead(X, Y) (X) + (Y)
#define szoroz(X, Y) (X) * (Y) // Mi t�rt�nik, ha elhagyjuk a z�r�jelet X*Y =>25
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
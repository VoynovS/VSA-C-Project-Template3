//Персональный шаблон проекта С++
#include <iostream> // Главная библиотека

using namespace std; //Подключение пространства имен

#define PI 3.14159
#define PI1 10
#define PI2 "My life"

#define forever for (int i = 0; ; i++)
#define begin {
#define end }

#define repeat5 for (int i = 0; i < 5; i++)

//Macros
#define mult(a,b) (a*b)
#define compare(a,b) (a>b ? a:b)

#define loop(n, m) for (int i = n; i < m; i++)

#define crtArr(t,s) t s[5]




int main() {

	setlocale(LC_ALL, "Russian");

	crtArr(int, myArr);
	myArr[1] = 0;



	/*int A, B;
	cout << "Enter 2 number: ";
	cin >> A >> B;
	loop(A, B)
		cout << i << endl;*/

	/*int x, y;
	cout << "Enter 2 number: ";
	cin >> x >> y;
	cout << x << " * " << y << " = " << mult(x, y) << endl;

	cout << "Bigger number: " << compare(x, y) << endl;*/

	/*cout << "PI = " << PI << endl;
	cout << "PI1 = " << PI1 << endl;
	cout << "PI2 = " << PI2 << endl;*/

	/*forever{
		cout << i << " ";
		if (i >= 100)
			break;
	}

	forever begin
		cout << i << " ";
		if (i >= 100)
			break;
	end*/

	/*cout << "PI = " << PI << endl;
	#undef PI
	# define PI 3
	cout << "PI = " << PI << endl;

#undef forever
#define while (true)

	repeat5 cout << "Hi!\n"; */

	return 0;
}
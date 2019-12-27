#include<iostream>
#include<iomanip>

#include "Header.h"
//main.cpp

int main()
{
	setlocale(LC_ALL, "");
	int n, m,x;
	cout << "Введите степень полинома A и степень полинома B:" << '\n';
	cin >> n >> m;
	
	(n>50)||(m>50) ? throw std::exception("Error") : cout << "\n Not error\n ";


		Polynom A(n), B(m), D, K, Y;
	cout << "Введите коэфициенты полинома A:" << '\n';
	cin >> A;
	cout << "Введите коэфициенты полинома B:" << '\n';
	cin >> B;
	cout <<'\n';
	cout << setw(10) << "Многочлен А:" << setw(5) << A << '\n';
	cout << setw(10) << "Многочлен B:" << setw(5) << B << '\n';
	cout << setw(10) << "Многочлен D=A+B:" << setw(5) << (D = A + B) << '\n';
	cout << setw(10) << "Многочлен K=A-B:" << setw(5) << (K = A - B) << '\n';
	cout << setw(10) << "Производная от A:" << setw(5) << A.Derivative() << '\n';
	cout << setw(10) << "Интеграл от A:" << setw(5) << "C" << A.Integral() << '\n';
	cout << setw(10) << "Многочлен Y=A*B:" << setw(5) << (Y = A * B) << '\n';
	cout << setw(10) << "Введите х , чтобы рассчитать многочлен A(x)" << '\n';
	cout<<" x = "; cin >> x;
	cout << setw(10) << "Многочлен A(x) = " << setw(5)<< A.TakeValue(x)<<endl;
	
	
	system("pause");
	return 0;
}

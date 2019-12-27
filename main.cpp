#include<iostream>
#include<iomanip>

#include "Header.h"
//main.cpp

int main()
{
	setlocale(LC_ALL, "");
	int n, m,x;
	cout << "������� ������� �������� A � ������� �������� B:" << '\n';
	cin >> n >> m;
	
	(n>50)||(m>50) ? throw std::exception("Error") : cout << "\n Not error\n ";


		Polynom A(n), B(m), D, K, Y;
	cout << "������� ����������� �������� A:" << '\n';
	cin >> A;
	cout << "������� ����������� �������� B:" << '\n';
	cin >> B;
	cout <<'\n';
	cout << setw(10) << "��������� �:" << setw(5) << A << '\n';
	cout << setw(10) << "��������� B:" << setw(5) << B << '\n';
	cout << setw(10) << "��������� D=A+B:" << setw(5) << (D = A + B) << '\n';
	cout << setw(10) << "��������� K=A-B:" << setw(5) << (K = A - B) << '\n';
	cout << setw(10) << "����������� �� A:" << setw(5) << A.Derivative() << '\n';
	cout << setw(10) << "�������� �� A:" << setw(5) << "C" << A.Integral() << '\n';
	cout << setw(10) << "��������� Y=A*B:" << setw(5) << (Y = A * B) << '\n';
	cout << setw(10) << "������� � , ����� ���������� ��������� A(x)" << '\n';
	cout<<" x = "; cin >> x;
	cout << setw(10) << "��������� A(x) = " << setw(5)<< A.TakeValue(x)<<endl;
	
	
	system("pause");
	return 0;
}
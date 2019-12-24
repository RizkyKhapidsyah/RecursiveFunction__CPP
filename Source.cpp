#include <iostream>
#include <conio.h>

using namespace std;

//Pangkat Iterasi
int PangkatIterasi(int a, int b)
{
	int hasil = a;
	for (int i = 1; i < b; i++)
	{
		hasil = hasil * a;
	}
	return hasil;
}

//Pangkat Rekursif
int PangkaRekursif(int a, int b)
{
	if (b <= 1) 
	{
		cout << "Akhir Dari Rekursif!" << endl;
		return a;
	}
	else
	{
		cout << "Rekursif!" << endl;
		return a * PangkaRekursif(a, (b - 1));
	}
}
int main()
{
	int a, b;
	cout << "Angka : "; cin >> a;
	cout << "Pangkat : "; cin >> b;
	cout << endl;
	cout << "Hasil Iterasi  : " << PangkatIterasi(a, b) << endl << endl;
	cout << "Hasil Rekursif : " << PangkaRekursif(a, b) << endl;

	_getch();
	return 0;
}
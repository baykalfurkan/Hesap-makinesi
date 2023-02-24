#include<iostream>
#include <cmath>
#include<iomanip>
using namespace std;

int main() {
	int gdeger, durum;
	cout << "1-Toplama" << endl;
	cout << "2-Cikarma" << endl;
	cout << "3-Carpma" << endl;
	cout << "4-Bolme" << endl;
	cout << "5-Karekok bulma" << endl;
	cout << "6-Faktoriyel hesaplama" << endl;
	cout << "7-Aritmetik ortalama bulma" << endl;
	cout << "8-Girilen sayiya kadar toplam bulma" << endl;

	do {
		cout << endl << "Yapilacak islem: ";
		cin >> gdeger;

		if (gdeger < 1 or gdeger>8) {
			cout << "Hatali deger.Tekrar giriniz!" << endl;
			durum = 0;
		}
		else {
			cout << "Lutfen sayi/sayilari giriniz;" << endl;
			durum = 1;
		}
	} while (durum == 0);
	float sayi1, sayi2;
	switch (gdeger) {
	case 1:
		cout << "1.Sayiyi giriniz: ";
		cin >> sayi1;
		cout << "2.Sayiyi giriniz: ";
		cin >> sayi2;
		cout << "Sonuc=" << setw(4) << right << sayi1 + sayi2;
		break;
	case 2:
		cout << "1.Sayiyi giriniz: ";
		cin >> sayi1;
		cout << "2.Sayiyi giriniz: ";
		cin >> sayi2;
		cout << "Sonuc=" << setw(4) << right << sayi1 - sayi2;
		break;
	case 3:
		cout << "1.Sayiyi giriniz: ";
		cin >> sayi1;
		cout << "2.Sayiyi giriniz: ";
		cin >> sayi2;
		cout << "Sonuc=" <<setw(10) << right << sayi1 * sayi2;
		break;
	case 4:
		cout << "1.Sayiyi giriniz: ";
		cin >> sayi1;
		cout << "2.Sayiyi giriniz: ";
		cin >> sayi2;
		cout << "Sonuc=" << sayi1 / sayi2;
		break;
	case 5:
		cout << "Sayiyi giriniz: ";
		cin >> sayi1;
		sayi2 = sqrt(sayi1);
		cout << "Sonuc=" << setw(4) << right << sayi2;
		break;
	case 6:
	{cout << "Sayiyi giriniz: ";
	cin >> sayi1;
	int fak, sonuc = 1;
	for (fak = 1; fak <= sayi1; fak++) {
		sonuc = sonuc * fak;
	}
	cout << "Sonuc=" << sonuc; }
	break;
	case 7:
	{float ort1, ort2, toplam = 0;
	cout << "Kac tane sayinin ortalamasini bulacaksiniz?";
	cin >> ort1;
	for (ort2 = 1; ort2 <= ort1; ort2++) {
		cout << ort2 << ".Sayiyi giriniz: ";
		cin >> sayi1;
		toplam = toplam + sayi1;
	}
	cout << "Sonuc=" << setw(4) << right << toplam / ort1; }
		break;
	case 8:
		int tb,toplam=0;
		cout << "Sayiyi giriniz:";
		cin >> sayi1;
		for (tb = 1; tb <= sayi1; tb++) {
			toplam = toplam + tb;
		}
		cout << "Sonuc=" << toplam;
		break;
	}
	return 0;
}

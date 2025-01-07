#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

struct Otomobil
{
	string marka;
	string model;
	int yil;
	char yakit;
	double km;
	double fiyat;
};

int main()
{
	setlocale(LC_ALL, "Turkish");
	
	Otomobil binek;
	cout << "Binek araca ait bilgileri giriniz: " << endl;
    cout << "Markas�: \t";
    cin >> binek.marka;
    cout << "Modeli: \t";
    cin >> binek.model;
    cout << "Y�l�: \t";
    cin >> binek.yil;
    cout << "Yak�t tipi(�r: B,D,G,H): \t";
    cin >> binek.yakit;
    cout << "KM'si: \t";
    cin >> binek.km;
    cout << "Fiyat�: \t";
    cin >> binek.fiyat;
    cout << endl;
    
	Otomobil suv;
	cout << "SUV'a ait bilgileri giriniz: " << endl;
	cout << "Markas�: \t";
	cin >> suv.marka;
	cout << "Modeli: \t";
	cin >> suv.model;
	cout << "Y�l�: \t";
	cin >> suv.yil;
	cout << "Yak�t tipi(�r: B,D,G,H): \t";
	cin >> suv.yakit;
	cout << "KM'si: \t";
	cin >> suv.km;
	cout << "Fiyat�: \t";
	cin >> suv.fiyat;
	cout << endl;
	
	Otomobil ticari;
	cout << "Ticari araca ait bilgileri giriniz: " << endl;
	cout << "Markas�: \t";
	cin >> ticari.marka;
	cout << "Modeli: \t";
	cin >> ticari.model;
	cout << "Y�l�: \t";
	cin >> ticari.yil;
	cout << "Yak�t tipi(�r: B,D,G,H): \t";
	cin >> ticari.yakit;
	cout << "KM'si: \t";
	cin >> ticari.km;
	cout << "Fiyat�: \t";
	cin >> ticari.fiyat;
	cout << endl;
	cout << endl;
	
	cout << "\t ARA� B�LG�LER�" << endl;
	cout << endl;

    cout << "Binek Ara�: " << endl;
    cout << "Markas�: " << binek.marka << endl;
    cout << "Modeli: " << binek.model << endl;
    cout << "Y�l�: " << binek.yil << endl;
    cout << "Yak�t tipi: " << binek.yakit << endl;
    cout << "KM'si: " << binek.km << endl;
    cout << "Fiyat�: " << binek.fiyat << endl;
    cout << endl;

    cout << "SUV: " << endl;
    cout << "Markas�: " << suv.marka << endl;
    cout << "Modeli: " << suv.model << endl;
    cout << "Y�l�: " << suv.yil << endl;
    cout << "Yak�t tipi: " << suv.yakit << endl;
    cout << "KM'si: " << suv.km << endl;
    cout << "Fiyat�: " << suv.fiyat << endl;
	cout << endl;

    cout << "Ticari Ara�: " << endl;
    cout << "Markas�: " << ticari.marka << endl;
    cout << "Modeli: " << ticari.model << endl;
    cout << "Y�l�: " << ticari.yil << endl;
    cout << "Yak�t tipi: " << ticari.yakit << endl;
    cout << "KM'si: " << ticari.km << endl;
    cout << "Fiyat�: " << ticari.fiyat << endl;
    cout << endl;

	system("pause");
	return 0;
}

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
    cout << "Markasý: \t";
    cin >> binek.marka;
    cout << "Modeli: \t";
    cin >> binek.model;
    cout << "Yýlý: \t";
    cin >> binek.yil;
    cout << "Yakýt tipi(ör: B,D,G,H): \t";
    cin >> binek.yakit;
    cout << "KM'si: \t";
    cin >> binek.km;
    cout << "Fiyatý: \t";
    cin >> binek.fiyat;
    cout << endl;
    
	Otomobil suv;
	cout << "SUV'a ait bilgileri giriniz: " << endl;
	cout << "Markasý: \t";
	cin >> suv.marka;
	cout << "Modeli: \t";
	cin >> suv.model;
	cout << "Yýlý: \t";
	cin >> suv.yil;
	cout << "Yakýt tipi(ör: B,D,G,H): \t";
	cin >> suv.yakit;
	cout << "KM'si: \t";
	cin >> suv.km;
	cout << "Fiyatý: \t";
	cin >> suv.fiyat;
	cout << endl;
	
	Otomobil ticari;
	cout << "Ticari araca ait bilgileri giriniz: " << endl;
	cout << "Markasý: \t";
	cin >> ticari.marka;
	cout << "Modeli: \t";
	cin >> ticari.model;
	cout << "Yýlý: \t";
	cin >> ticari.yil;
	cout << "Yakýt tipi(ör: B,D,G,H): \t";
	cin >> ticari.yakit;
	cout << "KM'si: \t";
	cin >> ticari.km;
	cout << "Fiyatý: \t";
	cin >> ticari.fiyat;
	cout << endl;
	cout << endl;
	
	cout << "\t ARAÇ BÝLGÝLERÝ" << endl;
	cout << endl;

    cout << "Binek Araç: " << endl;
    cout << "Markasý: " << binek.marka << endl;
    cout << "Modeli: " << binek.model << endl;
    cout << "Yýlý: " << binek.yil << endl;
    cout << "Yakýt tipi: " << binek.yakit << endl;
    cout << "KM'si: " << binek.km << endl;
    cout << "Fiyatý: " << binek.fiyat << endl;
    cout << endl;

    cout << "SUV: " << endl;
    cout << "Markasý: " << suv.marka << endl;
    cout << "Modeli: " << suv.model << endl;
    cout << "Yýlý: " << suv.yil << endl;
    cout << "Yakýt tipi: " << suv.yakit << endl;
    cout << "KM'si: " << suv.km << endl;
    cout << "Fiyatý: " << suv.fiyat << endl;
	cout << endl;

    cout << "Ticari Araç: " << endl;
    cout << "Markasý: " << ticari.marka << endl;
    cout << "Modeli: " << ticari.model << endl;
    cout << "Yýlý: " << ticari.yil << endl;
    cout << "Yakýt tipi: " << ticari.yakit << endl;
    cout << "KM'si: " << ticari.km << endl;
    cout << "Fiyatý: " << ticari.fiyat << endl;
    cout << endl;

	system("pause");
	return 0;
}

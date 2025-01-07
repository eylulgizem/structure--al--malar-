#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

struct Kumas 
{
    string iplikTipi;
    float dm2Agirlik;
    string dokumaTipi;
    string renk;
    int miktar;
};

struct Iskelet 
{
    string malzeme;
    string birlestirme;
    string tarz;
    string boyut;
    int miktar;
};

struct Mobilya 
{
    Kumas kaplama;
    Iskelet malzeme;
    int fiyat;
    int adet;
};

int main() 
{
	setlocale(LC_ALL, "Turkish");
	
    Mobilya mobilyalar[10]; 
    int toplamFiyat=0;

    for(int i=0; i<10; i++) 
	{
		cout << endl;
        cout << "Mobilya " << i+1 << " için veri giriþi yapýnýz:" << endl;

        cout << "Kaplama> Ýplik tipi: " << endl;
        cin >> mobilyalar[i].kaplama.iplikTipi;
        cout << "Kaplama> Dm2 aðýrlýk: " << endl;
        cin >> mobilyalar[i].kaplama.dm2Agirlik;
        cout << "Kaplama> Dokuma tipi: " << endl;
        cin >> mobilyalar[i].kaplama.dokumaTipi;
        cout << "Kaplama> Renk: " << endl;
        cin >> mobilyalar[i].kaplama.renk;
        cout << "Kaplama> Miktar: " << endl;
        cin >> mobilyalar[i].kaplama.miktar;
        
        cout << "Malzeme> Malzeme tipi: " << endl;
        cin >> mobilyalar[i].malzeme.malzeme;
        cout << "Malzeme> Birleþtirme: " << endl;
        cin >> mobilyalar[i].malzeme.birlestirme;
        cout << "Malzeme> Tarz: " << endl;
        cin >> mobilyalar[i].malzeme.tarz;
        cout << "Malzeme> Boyut: " << endl;
        cin >> mobilyalar[i].malzeme.boyut;
        cout << "Malzeme> Miktar: " << endl;
        cin >> mobilyalar[i].malzeme.miktar;
        cout << endl;
        
        cout << "Fiyat: " << endl;
        cin >> mobilyalar[i].fiyat;
        cout << "Adet: " << endl;
        cin >> mobilyalar[i].adet;
        cout << endl;

        toplamFiyat += mobilyalar[i].fiyat * mobilyalar[i].adet;
    }

    cout << "Girilen mobilya bilgileri:" << endl;
    
    for(int i=0; i<10; i++) 
	{
        cout << "Mobilya " << i+1 << ":" << endl;
        cout << "Kaplama> Ýplik tipi: \t"; 
		cout << mobilyalar[i].kaplama.iplikTipi << endl;
        cout << "Kaplama> Dm2 aðýrlýk: \t"; 
		cout << mobilyalar[i].kaplama.dm2Agirlik << endl;
        cout << "Kaplama> Dokuma tipi: \t";
		cout << mobilyalar[i].kaplama.dokumaTipi << endl;
        cout << "Kaplama> Renk: \t";
		cout << mobilyalar[i].kaplama.renk << endl;
        cout << "Kaplama> Miktar: \t";
		cout << mobilyalar[i].kaplama.miktar << endl;

        cout << "Malzeme> Malzeme tipi: \t";
		cout << mobilyalar[i].malzeme.malzeme << endl;
        cout << "Malzeme> Birleþtirme: \t"; 
		cout << mobilyalar[i].malzeme.birlestirme << endl;
        cout << "Malzeme> Tarz: \t";
		cout << mobilyalar[i].malzeme.tarz << endl;
        cout << "Malzeme> Boyut: \t";
		cout << mobilyalar[i].malzeme.boyut << endl;
        cout << "Malzeme> Miktar: \t";
		cout << mobilyalar[i].malzeme.miktar << endl;

        cout << "  Fiyat: " << mobilyalar[i].fiyat << endl;
        cout << "  Adet: " << mobilyalar[i].adet << endl;
        cout << endl;
    }

    cout << "10 mobilyanýn toplam fiyatý: " << toplamFiyat << " TL" << endl;

	system("pause");
    return 0;
}


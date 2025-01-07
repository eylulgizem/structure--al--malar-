#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

struct Kisi 
{
    string ad_soyad;
    string adres;
    string telefon_no; 
};

struct Gonderi 
{
    int gonderi_no;
    double agirlik;
    double hacim;
    bool garanti; 
    double ucret;
};

struct Kurye 
{
    string ad_soyad;
    string telefon_no; 
};

struct Surec 
{
    Kisi gonderen;
    Kisi alici;
    Gonderi gonderi;
    Kurye kurye;
    string alinan_adres;
    string teslim_edilen_adres;
};

int main() 
{
	setlocale(LC_ALL, "Turkish");
    Surec gonderiler[5] = {
        {
            {"Zeynep Evcil", "Adres 1", "05555555555"},
            {"Rumeysa Öztürk", "Adres 6", "05444444444"},
            {1, 3.2, 1.5, true, 100.0},
            {"Eylül Elidar", "05333333333"},
            "Adres 1", "Adres 6"
        },

        {
            {"Aybüke Kalkan", "Adres 2", "05222222222"},
            {"Ekin Yýldýz", "Adres 7", "05111111111"},
            {2, 1.8, 0.7, false, 55.0},
            {"Kübra Çelebi", "0500000000"},
            "Adres 2", "Adres 7"
        },
        
        {
            {"Mustafa Altýparmak", "Adres 3", "05666666666"},
            {"Burhan Arýkan", "Adres 8", "05777777777"},
            {3, 3.5, 2.2, true, 70.0},
            {"Ali Kirez", "05888888888"},
            "Adres 3", "Adres 8"
        },
        
        {
            {"Ýpek Mete", "Adres 4", "05999999999"},
            {"Merve Öztürk", "Adres 9", "05858585858"},
            {4, 3.0, 4.5, false, 98.0},
            {"Demirhan Demir", "05353535353"},
            "Adres 4", "Adres 9"
        },
        
        {
            {"Damla Özmen", "Adres 5", "05534343434"},
            {"Zelal Taþdelen", "Adres 10", "05541414141"},
            {5, 4.5, 3.2, true, 125.0},
            {"Barkýn Yýlmaz", "05561616161"},
            "Adres 5", "Adres 10"
        }
    };

    for(int i=0; i<5; i++) 
	{
        cout << "Gönderi No: " << gonderiler[i].gonderi.gonderi_no << endl;
        cout << "Gönderen: " << gonderiler[i].gonderen.ad_soyad << endl;
		cout << "Telefon(Gönderen): " << gonderiler[i].gonderen.telefon_no << endl;
        cout << "Alýcý: " << gonderiler[i].alici.ad_soyad << endl;
		cout << "Telefon(Alýcý): " << gonderiler[i].alici.telefon_no << endl;
        cout << "Aðýrlýk: " << gonderiler[i].gonderi.agirlik << " kg" << endl;
		cout << "Hacim: " << gonderiler[i].gonderi.hacim << " m^3" << endl;
        cout << "Garanti: " << (gonderiler[i].gonderi.garanti ? "Evet" : "Hayýr") << endl;
        cout << "Ücret: " << gonderiler[i].gonderi.ucret << " TL" << endl;
        cout << "Kurye: " << gonderiler[i].kurye.ad_soyad << endl; 
		cout << "Telefon(Kurye): " << gonderiler[i].kurye.telefon_no << endl;
        cout << "Alýnan Adres: " << gonderiler[i].alinan_adres << endl;
        cout << "Teslim Edilen Adres: " << gonderiler[i].teslim_edilen_adres << endl;
        cout << endl;
        cout << endl;
        cout << endl;
    }

    return 0;
}


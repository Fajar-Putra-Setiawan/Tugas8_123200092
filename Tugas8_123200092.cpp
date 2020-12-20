#include <iostream>
#include <stdio.h>

using namespace std;

float Llingkaran (float jari){
    float luas, phi=3.14;

    luas = phi*jari*jari;

return (luas);

}

float Kelilinglingkaran(float jari){
    float keliling, phi=3.14;

    keliling = phi*2*jari;

 return (keliling);
}

float volumetabung(float jari, float tinggi){
    float volume, phi=3.14;

    volume= phi*jari*jari*tinggi;

return (volume);

}

int main()
{
    float jari, luas , keliling, tinggi, volume;
    int pilih;
    char yt;

    awal :
    cout << "Hitung Lingkaran=========="<<endl;
    cout << "1. Luas Lingkaran"<<endl;
    cout << "2. Keliling Lingkaran"<<endl;
    cout << "3. Volume Tabung"<<endl;
    cout << "Pilih : ";
    cin >> pilih;

    switch(pilih){
    case 1 :
        cout << "Masukan Jari jari lingkaran = ";
        cin >> jari;

        luas=Llingkaran(jari);

        cout << "Luas Lingkaran adalah " << luas << endl;
        cout << "Ulangi Program? (y/n)";
        cin >> yt;

        if(yt=='y' || yt=='Y'){
            cout << endl;
            {goto awal;}
        } else if(yt=='N' || yt=='n'){
            cout << endl;
            {goto selesai;}
        }

        break;

    case 2 :
        cout << "Masukan Jari Jari Lingkaran = ";
        cin >> jari;

        keliling = Kelilinglingkaran(jari);

        cout << "Keliling Lingkaran adalah " << keliling<<endl;

        cout << "Ulangi Program? (y/n)";
        cin >> yt;

        if(yt=='y' || yt=='Y'){
            cout << endl;
            {goto awal;}
        } else if(yt=='N' || yt=='n'){
            cout << endl;
            {goto selesai;}
        }

        break;

    case 3 :
        cout << "Masukan Jari Jari Tabung = ";
        cin >> jari;
        cout << "Masukan Tinggi Tabung = ";
        cin >> tinggi;

        volume = volumetabung(jari, tinggi);

        cout << "Volume Tabung adalah " << volume <<endl;
        cout << "Ulangi Program? (y/n)";
        cin >> yt;

        if(yt=='y' || yt=='Y'){
            cout << endl;
            {goto awal;}
        } else if(yt=='N' || yt=='n'){
            cout << endl;
            {goto selesai;}
        }

        break;

    default :
        cout << "Input Anda Salah :)";

    }

    selesai:
    cout << "Program Selesai Terimakasih :)";
    return 0;
}

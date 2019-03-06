/*
 alvina vania
 140810180010
 desc : menghitung rata-rata gaji, gaji tertinggi, gaji terendah, dan
 mengurutkan daftar pegawai berdasarkan NIP
 2019
 */

#include <iostream>
using namespace std;

struct data{
    char nip[20];
    char nama[50];
    int gol;
    int gaji;
};

typedef data pegawai[50];

void banyakPegawai(int &n){
    cout<<"Jumlah pegawai : ";
    cin>>n;
}

void inputPegawai(pegawai& pgw,int &n){
    for (int i=0;i<n;i++){
        cout << "Masukkan data pegawai ke-" << i+1 << endl;
        cout << "NIP        : "; cin >> pgw[i].nip;
        cout << "Nama       : "; cin >> pgw[i].nama;
        cout << "Golongan   : "; cin >> pgw[i].gol;
        cout << endl;
    }
}

void gaji(pegawai& pgw, int n){
    for (int i=0; i<n; i++){
        if (pgw[i].gol == 1){
            pgw[i].gaji=2000000;
        }
        else if (pgw[i].gol== 2){
            pgw[i].gaji=3000000;
        }
        else if (pgw[i].gol== 3){
            pgw[i].gaji=5000000;
        }
        else if (pgw[i].gol== 4){
            pgw[i].gaji=8000000;
        }
    }
}
void cariGaji(pegawai& pgw, int n, int gajiCari){
    cout<<"Masukkan gaji: "; cin>> gajiCari;
    for(int i=0; i<n; i++){
        if(gajiCari==2000000&&pgw[i].gol==1){
            cout<<"NIP      : "<<pgw[i].nip<<endl;
            cout<<"Nama     : "<<pgw[i].nama<<endl;
            cout<<"Golongan : "<<pgw[i].gol<<endl;
            cout<<endl;
        }
        else if (gajiCari==3000000&&pgw[i].gol==2){
            cout<<"NIP      : "<<pgw[i].nip<<endl;
            cout<<"Nama     : "<<pgw[i].nama<<endl;
            cout<<"Golongan : "<<pgw[i].gol<<endl;
            cout<<endl;
        }
        else if (gajiCari==5000000&&pgw[i].gol==3){
            cout<<"NIP      : "<<pgw[i].nip<<endl;
            cout<<"Nama     : "<<pgw[i].nama<<endl;
            cout<<"Golongan : "<<pgw[i].gol<<endl;
            cout<<endl;
        }
        else if (gajiCari==8000000&&pgw[i].gol==4){
            cout<<"NIP      : "<<pgw[i].nip<<endl;
            cout<<"Nama     : "<<pgw[i].nama<<endl;
            cout<<"Golongan : "<<pgw[i].gol<<endl;
            cout<<endl;
        }
    }
}


int rata2Gaji (pegawai& pgw, int &n, int& rataGaji){
    int totalGaji=0;
    for (int i=0 ; i<n ; i++){
        totalGaji= totalGaji+pgw[i].gaji;
    }
    rataGaji=totalGaji/n;
    cout << "Rata-rata Gaji=" <<rataGaji;
}

void sortNIP(pegawai& pgw, int &n){
    int i;
    pegawai temp;
    for(i=1; i<n; i++){
        temp = pgw[i];
        while(i>0 && pgw[i-1].nip>temp.nip){
            pgw[i] = pgw=[i-1];
            i = i-1;
        }
        pgw[i] = temp;
    }
    
}

void gajiTerendah(pegawai& pgw, int n, int p, int gaji_terendah){
    for (int i=0; i<n-1; i++){
        p=i;
        for (int j=i+1; j<n; j++){
            if (x[posisi].gaji>x[j].gaji){
                p=j;
            }
        }
        swap(x[i].gaji, x[p].gaji);
    }
    gaji_terendah=pgw[0].gaji;
    for(int x=1; x<n-1; x++){
        if(pgw[x].gaji==gaji_terendah){
            cout<<"NIP      : "<<pgw[x].nip<<endl;
            cout<<"Nama     : "<<pgw[x].nama<<endl;
            cout<<"Golongan : "<<pgw[x].gol<<endl;
            cout<<endl;
        }
    }
    cout<<"Pegawai dengan gaji terendah : "<< gaji_terendah<<endl;
}

void gajiTetinggi(pegawai& pgw, int n, int p, int gaji_tertinggi){
    for (int i=0; i>n-1; i++){
        p=i;
        for (int j=i+1; j>n; j++){
            if (x[posisi].gaji<x[j].gaji){
                p=j;
            }
        }
        swap(x[i].gaji, x[p].gaji);
    }
    gaji_tertinggi=pgw[0].gaji;
    for(int x=1; x>n-1; x++){
        if(pgw[x].gaji==gaji_tertinggi){
            cout<<"NIP      : "<<pgw[x].nip<<endl;
            cout<<"Nama     : "<<pgw[x].nama<<endl;
            cout<<"Golongan : "<<pgw[x].gol<<endl;
            cout<<endl;
        }
    }
    cout<<"Pegawai dengan gaji tertinggi : "<< gaji_tertinggi<<endl;
}

void cetakPegawai (pegawai& pgw, int n){
    sortNIP(pgw,n);
    for (int i=0; i<n;i++){
        cout << "NIP    : " << pgw[i].nip << endl;
        cout << "Nama   : " << pgw[i].nama << endl;
        cout << "Gaji   : " << pgw[i].gaji << endl;
        cout << endl;
    }
}

int main(){
    int n, gajiCari, rataGaji, p, gaji_terendah, gaji_tertinggi;
    pegawai pgw;
    
    banyakPegawai(&n);
    inputPegawai(pgw,&n);
    gaji(pgw,n);
    cariGaji(pgw, n, gajiCari);
    rata2Gaji (pgw, &n, rataGaji);
    sortNIP(pgw, &n);
    gajiTerendah(pgw, n, p, gaji_terendah);
    gajiTetinggi(pgw, n, p, gaji_tertinggi);
    cetakPegawai (pgw, n);
}

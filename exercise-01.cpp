/*
 alvina vania kirana
 140810180010
 data orang
 2019
 */

struct Orang{
    int umur;
    char nama[30];
    char goldar[1];
    char jk[1];
    };

#include <iostream>
#include <string.h>

using namespace std;
int main() {
        Orang org;
        cout << "Nama: "; cin >> org.nama;
        cout << "Umur: "; cin >> org.umur;
        cout << "goldar: "; cin >> org.goldar;
        cout << "Jk: "; cin >> org.jk;
    
        cout << org.umur << endl;
        cout << org.nama << endl;
        cout << org.goldar << endl;
        cout << org.jk << endl;
    
    return 0;
}

/*
 nama: alvina vania
 npm: 140810180010
 deskripsi: mengurutkan angka dari yang terkecil kebesar
 tahun 2019
 */

void swap (int& x, int& y){
      int temp = x;
        x = y;
        y = temp;
}

void moveZeroToFront(int a[], int n) {
      for (int i=n-1; i > 0; i--){
            for (int j=0; j < i; j++) {
                  if (a[j] > a[j+1] )
}
      }

swap (a[j], a[j+1]);
}



void input (int (&arr)[100], int& n){
    cout << "Masukkan angka :" <<endl;
    cin >>;
}

void output(int arr[], int n){
    cout << n;
}


#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n;
    input (arr,n);
    moveZeroToFront (arr,n);
    output (arr,n);

    return 0;
}

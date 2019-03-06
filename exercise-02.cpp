/*
 alvina vania
 140810180010
 data theater
 2019
 */

#include <iostream>
using namespace std;

struct theater{
    int room;
    char seat[3];
    char movieTitle [30];
};
void input(theater& object){
    cout << "Room   :"; cin >> object.room;
    cout << "Seat   :"; cin >> object.seat;
    cout << "Title  :"; cin >> object.movieTitle;
}

void output(theater& object){
    cout << object.room<<endl;
    cout << object.seat<<endl;
    cout << object.movieTitle<<endl;
}

int main() {
    theater a;
    input (a);
    output (a);
    return 0;
}

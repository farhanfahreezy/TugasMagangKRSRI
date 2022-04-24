#include "objek.h"
#include<iostream>
using namespace std;

void TambahKorban(char** peta, string nama, int x, int y){
    // Tuliskan implementasi untuk mengubah data korban baru dan mengubah simbol pada peta
    char* namaDepan = (char*)nama[0];
    peta[x,y]=namaDepan;
}

void TambahLilin(char** peta, int x, int y){
    // Tuliskan implementasi untuk mengubah data lilin baru dan mengubah simbol pada peta
    char* l = (char*)'L';
    peta[x,y]=l;
}
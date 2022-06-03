#include "interface.h"
#include "peta.h"
#include "objek.h"
#include <iostream>
using namespace std;

void TambahKorban(char** peta, string nama, int x, int y, korban* korban_baru){
    // Tuliskan implementasi untuk mengubah data korban baru dan mengubah simbol pada peta
    korban_baru->nama=nama;
    korban_baru->x=x;
    korban_baru->y=y;
    korban_baru->simbol=nama[0];
    peta[x][y]=korban_baru->simbol;
}

void TambahLilin(char** peta, int x, int y, lilin* lilin_baru){
    // Tuliskan implementasi untuk mengubah data lilin baru dan mengubah simbol pada peta
    lilin_baru->simbol='L';
    lilin_baru->x=x;
    lilin_baru->y=y;
    peta[x][y]=lilin_baru->simbol;
    status statusLampu;
    statusLampu = on;
}
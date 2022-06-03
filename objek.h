// Silahkan sesuaikan header
#ifndef __OBJEK_H
#define __OBJEK_H
#include <iostream>
using namespace std;

// Status dari lilin
typedef enum {on, off} status;

typedef struct {
    // Isi elemen yang dimiliki oleh tipe data korban
    // korban disimbolkan dengan huruf K pada peta
    string nama;
    int x,y;
    char simbol;
} korban;

typedef struct {
    // Isi elemen yang dimiliki oleh tipe data lilin
    // lilin disimbolkan dengan huruf L pada peta
    int x,y;
    char simbol;
    status status;
} lilin;

/**
 * @brief Prosedur untuk menambahkan korban pada peta
 * 
 * @param peta double pointer menuju matriks peta
 * @param nama nama dari korban
 * @param x koordinat korban (x)
 * @param y koordinat korban (y)
 * @param korban_baru pointer menuju data korban baru
 * @result korban baru telah ditambahkan dan simbol pada koordinat tersebut diisi dengan k
 */
void TambahKorban(char** peta, string nama, int x, int y, korban* korban_baru);

/**
 * @brief Prosedur untuk menambahkan lilin pada peta
 * 
 * @param peta double pointer menuju matriks peta
 * @param x koordinat korban (x)
 * @param y koordinat korban (y)
 * @param lilin_baru pointer menuju data lilin
 * @result lilin baru telah ditambahkan dan simbol pada koordinat tersebut diisi dengan l
 */
void TambahLilin(char** peta, int x, int y, lilin* lilin_baru);

#endif
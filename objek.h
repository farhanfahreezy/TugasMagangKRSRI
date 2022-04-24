// Silahkan sesuaikan header
#ifndef OBJEK_H
#define OBJEK_H
#include<iostream>
using namespace std;

// Status dari lilin
typedef enum {on, off} status;

typedef struct {
    // Isi elemen yang dimiliki oleh tipe data korban
    // korban disimbolkan dengan huruf K pada peta
} korban;

typedef struct {
    // Isi elemen yang dimiliki oleh tipe data lilin
    // lilin disimbolkan dengan huruf L pada peta
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
void TambahKorban(char** peta, string nama, int x, int y);

/**
 * @brief Prosedur untuk menambahkan lilin pada peta
 * 
 * @param peta double pointer menuju matriks peta
 * @param x koordinat korban (x)
 * @param y koordinat korban (y)
 * @param lilin_baru pointer menuju data lilin
 * @result lilin baru telah ditambahkan dan simbol pada koordinat tersebut diisi dengan l
 */
void TambahLilin(char** peta, int x, int y);

#endif
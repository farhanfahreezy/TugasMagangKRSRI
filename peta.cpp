#include "peta.h"
#include<iostream>
using namespace std;

// Petunjuk: Elemen pada double pointer dapat diakses seperti array biasa.
// Misalkan ingin mengakses elemen baris i kolom j, maka cukup buat matrix[i][j]

char** BuatPeta(int n_peta){
    char** peta;
    peta[n_peta][n_peta];
    for (int i=0;i<n_peta;i++){
        for (int j=0;j<n_peta;j++){
            if (i==0){
                peta[i][j]='X';
            }
            else if (i==(n_peta-1)){
                peta[i][j]='X';
            }
            else if (j==0){
                peta[i][j]='X';
            }
            else if (j==(n_peta-1)){
                peta[i][j]='X';
            }
            else {
                peta[i][j]='-'; 
            }   
        }
    }

    return peta;
}

void PrintPeta(char** peta, int n_peta){
    // Tuliskan implementasi untuk menampilkan peta apabila dilihat dari sisi depan
    cout << "Tampilan Peta Dilihat dari sisi Depan" << endl;
    for (int i = 0;i<n_peta;i++){
        for (int j = 0;j<n_peta;j++) {
            cout << peta[i][j] <<" ";
        }
        cout << "\n";
    }
}

void PrintViewKanan(char** peta, int n_peta){
    // Tuliskan implementasi untuk menampilkan peta apabila dilihat dari sisi kanan
    cout << "Tampilan Peta Dilihat dari sisi Kanan" << endl;
    for (int j = 0;j<n_peta;j++){
        for (int i = (n_peta-1);i>=0;i--) {
            cout << peta[i][j]<< " ";
        }
        cout << "\n";
    }
}

void PrintViewKiri(char** peta, int n_peta){
    // Tuliskan implementasi untuk menampilkan peta apabila dilihat dari sisi kiri
    cout << "Tampilan Peta Dilihat dari sisi Kiri" << endl;
    for (int j = (n_peta-1);j>=0;j--){
        for (int i = 0;i<n_peta;i++) {
            cout << peta[i][j]<< " ";
        }
        cout << "\n";
    }
}
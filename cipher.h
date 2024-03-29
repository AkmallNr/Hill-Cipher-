#ifndef CIPHER_H
#define CIPHER_H

typedef struct{
	char pesan[500];
	char kunci[4];
	char karakter[80]= " GHIJSXabcdLKMNOPQRef&^%$#ghijklmnopqTUVWr456stuvwxy!<>,.zABCDEFYZ1237890_-*@?/";
	int kuncitonum[4];
	int pesantonum[500];
	int peslen;
	int isipesan;
}utama;

typedef struct{
	int enkripsi[500];
	char pesanEncrypt[500];
}Enkripsi;

typedef struct{
	int dekripsi[500];
	char pesanDecrypt[500];
}Dekripsi;

void cetak_pesan_encrypt(Enkripsi *En, utama *var);
void cetak_pesan_decrypt(Dekripsi *De, utama *var);
void pesan_encrypt(Enkripsi *En, utama *var);
void pesan_decrypt(Dekripsi *De, utama *var);
void matriks_pesan(utama *var);
void matriks_kunci(utama *var);
void cetak_matriks_pesan(utama *var);
void cetak_matriks_kunci(utama *var);
void tampilan(utama *var );




#endif 

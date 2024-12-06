#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

#define histori 10


int riwayat_bilangan1[histori];
int riwayat_bilangan2[histori];
int riwayat_fpb[histori];
int riwayat_kpk[histori];



int cari_fpb (int a, int b) {
  a = (a < 0 ) ? -a : a ;
  b = (b < 0) ? -b : b ;

  printf("proses mencari FPB: \n");
  printf("----------------------\n");

  printf("bilangan awal a= %i dan bilangan awal b= %i\n\n", a, b);

  int iterasi= 1;

  while (b != 0) {
    int titip = b ;
    printf("iterasi %i: a=%i dan b=%i\n", iterasi, a, b);
    printf("b= a %% b\n");
    printf("b= %i %% %i= %i\n",a, b, a % b);
    printf("a= b (dari sebelumnya)= %i\n\n", b);

    b= a % b;
    a = titip;
    iterasi++;
    getch();
  }



  printf("FPB telah ditemukan %i\n\n", a);
  return a;
}

int cari_kpk (int a, int b, int fpb) {

  printf("proses mencari KPK: \n");
  printf("--------------------\n");
  printf("KPK= a * b / fpb a dan b\n");
  printf("KPK= %i * %i / %i\n", a, b, fpb);
  printf("KPK= %i\n\n", (a*b)/fpb);
  return (a * b) / fpb;
}


void tampil_riwayat (int jumlah_perhitungan) {
  int i;
  if (jumlah_perhitungan == 0) {
    printf("anda belum melakukan perhitungan\n");
    getch();
    return;
  }

  clrscr();
  printf("\nRiwayat perhitungan:\n");
  printf("------------------------\n\n");

  for (i = 0; i < jumlah_perhitungan; i++) {
    printf("perhitungan yang ke-%i:\n", i+1);
    printf("FPB dan KPK dari %i dan %i adalah:\n", riwayat_bilangan1[i], riwayat_bilangan2[i]);
    printf("FPB:%i\n", riwayat_fpb[i] );
    printf("KPK:%i\n\n",riwayat_kpk[i] );
    getch();
  }


}



int main () {
  char lanjut ;
  int bilangan[2];
  int jumlah_hitung= 0 ;

  do {
    clrscr();
    printf("ini untuk mencari nilai FPB dan KPK dari dua bilangan\n");
    printf("*****************************************************\n");

    for (int i = 0; i < 2; i++) {
      do {
	printf("masukkan bilangan ke-%i: ", i + 1);
	scanf("%i", &bilangan[i]);
	if (bilangan[i] == 0) {
	  printf("masukkan nilai selain 0\n\n");
	}
      } while (bilangan [i] == 0);
    }


    int fpb_hasil = cari_fpb (bilangan[0], bilangan [1]);
    int kpk_hasil = cari_kpk (bilangan[0], bilangan [1], fpb_hasil);


    if (jumlah_hitung < histori) {
      riwayat_bilangan1[jumlah_hitung] = bilangan [0];
      riwayat_bilangan2[jumlah_hitung] = bilangan [1];
      riwayat_fpb[jumlah_hitung] = fpb_hasil;
      riwayat_kpk[jumlah_hitung] = kpk_hasil;
      jumlah_hitung++;
    }



    printf("hasil perhitungannya: \n");
    printf("FPB dari %i dan %i adalah:%i\n", bilangan[0], bilangan[1], fpb_hasil);
    printf("KPK dari %i dan %i adalah:%i\n", bilangan[0], bilangan[1], kpk_hasil);


    printf("apakah ingin melanjutkan perhitungan lagi? (y/n): ");
    scanf("%s", &lanjut);

    if (lanjut == 'n' || lanjut == 'n') {
      printf("\nMenampilkan riwayat perhitungan otomatis:\n");
      tampil_riwayat(jumlah_hitung);
    }
  } while (lanjut == 'y' || lanjut == 'y');




  printf("\n\n*****************************\n\n");
  printf("terimakasih sudah menggunakan program gacor king ");
  getch();
  return 0;
}
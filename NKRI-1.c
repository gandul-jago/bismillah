#include<stdio.h>

int main () 
{

int awal,i,N,K,pause,lanjut;
int stop=0;

printf("masukkan nilai awal hitung = ");
scanf("%i",&awal);

printf("masukkan mau sampe berap berhitung = ");
scanf("%i", &K);

printf("kapan dia akan berhenti hitung? = ");
scanf("%i", &pause);

printf("kapan dia akan lanjut? = ");
scanf("%i", &lanjut);

for (i = awal; i <= K; i++) {
    printf("%i\n", i);
    if (i == pause && stop==0) {
    stop=1;
    break;
  }
  } for (i = lanjut; i <= K; i++)
    printf("%i\n",i);
  
}
#include <stdio.h>
#include <math.h>

int main()
{
    char ulang;
    do
    {   
    printf("Masukkan pilihanmu \n1 untuk luas bangunan 2D\n");
    printf("2 untuk volume bangunan 3D\n");

    int pilihan;
     do {
        printf("tentukan bangunan pilihanmu = ");
        scanf("%i", &pilihan); 
        if (pilihan<1 || pilihan>2){
            printf("pilih yang bener, 1 atau 2\n");
    
        }
    } while(pilihan<1 || pilihan>2);

        if (pilihan == 1) {
            printf("Anda memilih bangunan 2D\n\n");
            printf("pilih jenis bangun ruang 2dimensi\n");
            printf("1 untunk persegi panjang\n");
            printf("2 untuk bujur sangkar\n");
            printf("3 untuk segitiga\n");
            printf("4 untuk trapesium\n\n");
            
            int pilihan2D;
            do{
                printf("pilih bangunan 2D kamu = ");
                scanf("%i",&pilihan2D);  
                if (pilihan2D<1 || pilihan2D>4) {
                    printf("pilih yang betol, admin lose streak nih \n");
                }  
            }while(pilihan2D<1 || pilihan2D>4);
                
                if (pilihan2D==1) {
                    printf("kamu memilih persegi panjang\n");

                    /*mau masuskin brp persegi yg dihitung*/
                    int banyak;
                    printf("berapa banyak persegi panjang yg mau dihitung? : ");
                    scanf("%i", &banyak);
                    printf("\n");

                    /*masukin ke array*/
                    float panjang[banyak], lebar[banyak], luas[banyak];

                    for (int i = 0; i < banyak; i++)
                    {
                        printf("kamu menghitung persegi panjang ke-%i\n", i+1);
                        printf("masukkan panjang dari persegi panjang ke-%i : ", i+1);
                        scanf("%f", &panjang [i]);

                        printf("masukkan lebar dari persegi panjang ke-%i : ", i+1);
                        scanf("%f", &lebar [i]);

                        luas[i] = panjang[i] * lebar[i];

                        printf("luas dari persegi panjang ke-%i kamu adalah : %.2f cm^2\n\n", i+1, luas[i]);
                    }
                }

                else if (pilihan2D==2) {
                    printf("kamu memilih bujur sangkar\n");
                    int banyak;
                    printf("ketika banyak bujur sangkar yang mau dihitung: ");
                    scanf("%i", &banyak);
                    printf("\n");

                    float sisi[banyak],luas[banyak];
                    for (int i = 0; i < banyak; i++)
                    {
                        printf("kamu menghitung bujur snagkar ke-%i\n", i+1);
                        printf("masukkan sisi dari bujur sangkar ke-%i: ", i+1);
                        scanf("%f", &sisi [i]);

                        luas[i] = sisi[i]*sisi[i];
                        printf("luas dari bujur sangkar kamu ke-%i adalah: %.2f cm^2\n\n", i+1, luas[i]);
                    }
                    
                }

                else if (pilihan2D==3) {
                    printf("kamu memilih segitiga\n");
                    int banyak;
                    printf("ketik berapa banyak segitiga yang mau dihitung : ");
                    scanf("%i", &banyak);
                    printf("\n");

                    float alas[banyak],tinggi[banyak], luas[banyak];
                    for (int i = 0; i < banyak; i++)
                    {
                        printf("kamu menghitung segitiga ke-%i\n", i+1);
                        printf("masukkan alas segitiga ke-%i: ", i+1);
                        scanf("%f", &alas[i]);

                        printf("masukkan tinggi segitiga ke-%i: ", i+1);
                        scanf("%f", &tinggi[i]);

                        luas[i]= 0.5*alas[i]*tinggi[i];
                        printf("luas segitigamu yang ke-%i adalah: %.2fcm^2\n\n", i+1, luas[i]);
                    } 
                }
                else {
                    printf("kamu memilih trapesium\n");
                    int banyak;
                    printf("berapa banyak trapesium yang ingin dihitung?: ");
                    scanf("%i", &banyak);
                    printf("\n");

                    float atas[banyak],bawah[banyak],tinggi[banyak],luas[banyak];
                    for (int i = 0; i < banyak; i++)
                    {
                        printf("kamu menghitung trapesium ke-%i\n", i+1);
                        printf("masukkan atas dari trapesium ke-%i: ", i+1);
                        scanf("%f", &atas[i]);
                        printf("masukkan bawah dari trapesium ke-%i: ", i+1);
                        scanf("%f", &bawah[i]);
                        printf("masukkan tinggi dari trapesium ke-%i: ", i+1);
                        scanf("%f", &tinggi[i]);

                        luas[i]= 0.5*(atas[i]+bawah[i])*tinggi[i];
                        printf("luas dari trapesiium kamu yang ke-%i adalh: %.2fcm^2\n\n", i+1, luas[i]);
                    }
                }
              
 
        }
        if (pilihan==2) {
            printf("anda memilih bangun ruang 3Dimensi\n");
            printf("pilih ruang bangun anda\n");
            printf("ketik 1 untuk limas segitiga\n");
            printf("ketik 2 untuk bola\n");
            printf("ketik 3 untuk tabung\n");

            int pilihan3D;

            do{
                printf("masukkan pilihanmu = ");
                scanf("%i", &pilihan3D);

                if (pilihan3D<1 || pilihan3D>3) {
                    printf("ketik yang betol, admin user reyna ni\n");
                }
                
            } while (pilihan3D<1 || pilihan3D>3);
                if (pilihan3D==1)
                {
                    printf("kamu memilih menghitung volume limas segitiga\n");
                    int banyak;
                    printf("berapa banyak limas segitiga yang mau dihitung?: ");
                    scanf("%i", &banyak);
                    printf("\n");

                    float panjang_alas[banyak], tinggi_alas[banyak], tinggi_limas[banyak], luas_alas[banyak], volume[banyak];

                    for (int i = 0; i < banyak; i++)
                    {
                        printf("menghitung prisma ke-%i\n", i+1);
                        printf("masukkan panjang alas segitiga: ");
                        scanf("%f", &panjang_alas[i]);
                        printf("masukkan tinggi alas segituga: ");
                        scanf("%f", &tinggi_alas[i]);
                        printf("masukan tinggi limas: ");
                        scanf("%f", &tinggi_limas[i]);

                        luas_alas[i]=0.5*panjang_alas[i]*tinggi_alas[i];

                        volume[i]= (1.0 / 3.0) * luas_alas[i] * tinggi_limas[i]; 
                        printf("volume dari limas segitiga yang ke-%i kamu adalah: %.2f\n\n", i+1, volume[i]);
                    }   
                }
                else if (pilihan3D==2)
                {
                    printf("kamu memilih menghitung volume bola\n");

                    int banyak;
                    printf("berapa banyak volume bola yang mau dihitung?:");
                    scanf("%i", &banyak);
                    printf("\n");

                    float r[banyak], volume[banyak];
                    for (int i = 0; i < banyak; i++)
                    {
                        printf("kamu menghitung volume bola ke-%i\n", i+1);
                        printf("masukkan jari-jari bola: ");
                        scanf("%f", &r[i]);

                        volume[i]=(4.0 / 3.0) * M_PI * pow(r[i], 3);
                        printf("volume dari bola yang ke-%i kamu adalah : %.2f\n\n", i+1, volume[i]);
                    }    
                }
                else 
                {
                    printf("kamu memilih menghitung volume tabung\n");

                    int banyak;
                    printf("berapa banyak tabung yang mau dihitung?: ");
                    scanf("%i", &banyak);
                    printf("\n");
                    float r[banyak], t[banyak], volume[banyak];

                    for (int i = 0; i < banyak; i++)
                    {
                        printf("kamu memilih menghitung volume tabung\n");
                  
                        float volume[banyak], r[banyak], tinggi[banyak];
                        for (int i = 0; i < banyak; i++)
                        {
                            printf("kamu menghitung tabung ke-%i\n", i+1);
                            printf("masukkan jari jari dari tabung ke-%i: ",i+1);
                            scanf("%f", &r[i]);
                            printf("masukkan tinggi dari tabung ke-%i", i+1);
                            scanf("%f", &tinggi[i]);

                            volume[i]=M_PI*pow(r[i],2)*tinggi[i];
                            printf("volume dari tabung anda yang ke-%i adalah:%.2f\n\n", i+1, volume[i]);
                        }
                    }
                    
                }      
        }
        printf("\napakah kamu ingin menghitung lagi? (Y/N): ");
        scanf(" %c", &ulang);
        printf("\n"); 
    } while (ulang == 'Y' || ulang == 'y');

    return 0;
} 
    
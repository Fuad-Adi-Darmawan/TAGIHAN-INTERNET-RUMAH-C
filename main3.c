#include<stdio.h>
#include<conio.h>
int main()
{
    printf("-----TAGIHAN INTERNET RUMAH-----");

    printf("\n");

    printf("Nama: Fuad");

    printf("\n");

    char name;
    float biaya_wifi, biaya_telepon, biaya_pulsa, total_biaya;
    printf("input biaya wifi : \n");
    scanf("%f", &biaya_wifi);
    printf("input biaya_telepon : \n");
    scanf("%f", &biaya_telepon);
    printf("input biaya_pulsa : \n");
    scanf("%f", &biaya_pulsa);

    total_biaya   = biaya_wifi+biaya_telepon+biaya_pulsa;

    printf("\ntotal biaya tagiham internet anda adalah : %f\n", total_biaya);

    return 0;

 
}
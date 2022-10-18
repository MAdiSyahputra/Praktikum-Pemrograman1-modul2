#include <stdio.h>
int main()
{
    float a,b,i,j,x,y,h;
    printf("Masukkan Nilai A : ");
    scanf("%f", &a);
    printf("Masukkan Nilai B :");
    scanf("%f",&b);
    printf("Masukkan nilai I :");
    scanf("%f",&i);
    printf("Masukkan nilai J :");
    scanf("%f",&j);
    printf("Masukkan nilai X :");
    scanf("%f",&x);
    printf("Masukkan Nilai Y :");
    scanf("%f",&y);
    h =(a-b)*(i/j)-(x+y);
    printf("Hasil dari a dikurang b dikali dengan i dibagi j dikurang dengan x ditambah y adalah : %.3f",h);
}
#include <stdio.h>
int main()
{
    char Nama[50],Nim[20],kelaspararel[20],ttl[20],alamat[20],hobby[20],nohp[20];
    printf("Nama                         : ");
    scanf("%[^\n]%*c", Nama);
    printf("Nim                          : ");
    scanf("%[^\n]%*c", Nim);
    printf("kelaspararel                 : ");
    scanf("%[^\n]%*c", kelaspararel);
    printf("ttl                          : ");
    scanf("%[^\n]%*c", ttl);
    printf("alamat                       : ");
    scanf("%[^\n]%*c", alamat);
    printf("hobby                        : ");
    scanf("%[^\n]%*c", hobby);
    printf("nohp                         : ");
    scanf("%[^\n]%*c", nohp);

    printf("\n Nama                 : %s\n", Nama);
    printf("Nim                     : %s\n", Nim);
    printf("kelaspararel            : %s\n", kelaspararel);
    printf("ttl                     : %s\n", ttl);
    printf("alamat                  : %s\n", alamat);
    printf("hobby                   : %s\n", hobby);
    printf("nohp                    : %s\n", nohp);
}
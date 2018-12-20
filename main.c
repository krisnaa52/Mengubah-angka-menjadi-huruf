#include <stdio.h>
#include <stdlib.h>

/* krisna agustian
stt pelita bangsa*/

int ubah(int a);
int main()
{
    int a;
    printf(" masukan nilah 1-10 = ");
    scanf("%d",&a);
    ubah(a);
}
int ubah(int a)
{

    if (a>10) {printf("masukan angka 1-10 !");}
    if (a==1){printf("A");}
    if (a==2){printf("B");}
    if (a==3){printf("C");}
    if (a==4){printf("D");}
    if (a==5){printf("E");}
    if (a==6){printf("F");}
    if (a==7){printf("G");}
    if (a==8){printf("H");}
    if (a==9){printf("I");}
    if (a==10){printf("J");}
    return (a);
}

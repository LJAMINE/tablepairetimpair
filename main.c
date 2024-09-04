#include <stdio.h>
#include <stdlib.h>

int main()
{
 int i , nombre;

 printf("entrer nombre ");
 scanf("%d",&nombre);

 for (int i=0;i<10;i++){
    printf("%d * %d =%d\n",nombre,i,nombre*i);
 }
     return 0;
}

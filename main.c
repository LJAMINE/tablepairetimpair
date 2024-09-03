#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tableau [5] ={1,3,11,4,5};
    int a=0 ;
    int b=0 ;
   int pair[5] ;
   int  impair[5] ;
 for (int i=0;i<5;i++){
         if(tableau[i]%2==0){
                pair[a]=tableau[i];
              printf("les nombres pair sont %d \n",pair[a]);
            a++;
        }else{
        impair[b]=tableau[i];
                    printf("les nombres impair   %d\n",impair[b]);
                    b++;


        }

}
     return 0;
}

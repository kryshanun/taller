#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{  int n,num1, i=2;
printf("ingrese un numero  para saber su serie\n");
        scanf("%d", &n);

        if(n==1){
              printf("-8");
        }else{
        while(n>i){
            if(n%2==1){
                num1=pow(-2,n-1)*3;
                printf("%d",num1);
             


          }else{
              num1=pow-(2,n-1)*5;
              printf("%d", num1);
          
          }
        }
    }
             return 0;
}

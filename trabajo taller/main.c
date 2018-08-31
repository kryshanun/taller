#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{  
	int num1;
	int i=2;
	int n;
	printf("ingrese un numero  para saber su serie\n\n");
        scanf("%d", &n);

        if(n==1)
		{
	              printf("-8");
	        }
	else
		{
            
        	while(i<=n)
			{    
                        
		        if(n%2==1)
				{
                                    num1 = pow(-2,(n-1))*3;
                                    printf("\n%d\n",num1);
                                    n--;
                                   
				}
			    if(n%2==0)
				{
              				num1 = pow(-2, n-1)*5;
              				printf("%d\n", num1);
              				n--;
                                        
          			}
        		}
                printf("-8\n");
    		}
	return 0;
	}


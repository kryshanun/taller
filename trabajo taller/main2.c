#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{  
	float num1;
	int i=2;
	float n;
	printf("ingrese un numero  para saber su serie\n");
        scanf("%2f", &n);

        if(n==1)
		{
	              printf("-8");
	        }
	else
		{
        	while(i<n)
			{
		            if(i%2==1)
				{
	                    	num1 = pow(-2 ,(n-1))*3;
            		    	printf("%2f",num1);
            		    	i++;
				}
			    if(i%2==0)
				{
              				num1 = pow(-2, n-1)*5;
              				printf("%2f", num1);
              				i++;
          			}
        		}
    		}
	return 0;
	}

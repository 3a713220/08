#include "stdio.h"
#include "stdlib.h"
int main()
{
	int k ,j ;
	printf("ijgoirgjirjg:"); 
	scanf("%d",&j);
	   for(int e=2;e<=j;e++)
{
	 k = 0;
    for(int r=1;r<=j;r++) 
        if(e%r==0)
            k++;
            if(k==2)
		        printf("%d\t",e);
}
    printf("\n");
    system("pause");
    return 0;
}

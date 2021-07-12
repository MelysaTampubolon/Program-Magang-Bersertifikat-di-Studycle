#include <stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
    int n, i;
    
    printf("Masukkan jumlah bilangan yang diinput: ");
    scanf("%d",&n);
	fflush(stdin);
   
   	int data[n], sum=0;
   	
    for(i=0; i<n; i++){
    	printf("Input data ke-%d: ",i+1);
		scanf("%d",&data[i]);
        sum=sum+data[i];         
	}
    
    return 0;
}

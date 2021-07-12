#include <stdio.h> 
  
int main()
{
	int array[1000], n, i, j, swap; 
	
		printf("Masukkan jumlah data: ");
		scanf("%d", &n); 
		
		printf("Input data\n"); 
			for(i = 0; i < n; i++)
			scanf("%d", &array[i]); 
			for(i = 0 ; i < n-1; i++)
			{
				for(j = 0 ; j < n-i-1; j++)
			{
			if(array[j] > array[j+1]) 
			{
				swap=array[j];
				array[j]=array[j+1];
				array[j+1]=swap;
			}
			}
			} 
			
		printf("\nUrutan data: "); 
		for(i = 0; i < n; i++)
		printf("%d ", array[i]);
		
		return 0;
}

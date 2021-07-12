#include<stdio.h>

int main () {
    int n,a,b,q1,q2,temp=0,hasil=1;
    float median;

    printf("Masukkan jumlah data: "); 
	scanf("%d",&n);
	fflush(stdin);

    int data[n],frekuensi[n], sum=0;
    float avg;
   
    for(a=0;a<n;a++){
                     printf("Input data ke-%d: ",a+1);
					 scanf("%d",&data[a]);
                     sum=sum+data[a];
                     }
                    
    printf("\n\n");
   
  
    avg=(float)sum/n;
    printf("Nilai rata-rata adalah: %.2f\n", avg);
    

    for(a=0;a<(n-1);a++){
                         for(b=a;b<n;b++){
                         if(data[b]<data[a]){
                                               temp=data[a];
                                               data[a]=data[b];
                                               data[b]=temp; };                   
                                               };
                                               }
    printf("\nData setelah diurutkan: ");
    for(a=0;a<n;a++){
                     printf("%d,",data[a]);}
    if(n%2==1){q2=(n/2);
                        median=data[q2];
                        printf("\nNilai tengah adalah: %.f",median);}
    else if(n%2==0){q1=(n/2)-1; q2=(n/2);
                    median=((float)data[q1]+(float)data[q2])/2;
                    printf("\nNilai tengah adalah: %.f",median);}
   
    
    for(a=0; a<n; a++){
        hasil=hasil*data[a];
    }
    printf("\n\nHasil perkalian semua data: %d\n", hasil); 
    
    system("pause");
    return 0;
}

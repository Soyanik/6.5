#define array_size 20
#include <stdio.h>
#include <stdlib.h>
int main(){
 int a[array_size];  
 int i=0;
 int k;

 for (i=0;i<array_size;i++){    
a[i]=rand()%20;     
printf("a[%d]=%d  ",i,a[i]);
}
 printf("\n");

 for (i=array_size-1;i>=0;i--){
     a[i]=a[i-1];
}
a[0]=0;
 for(i=0;i<array_size;i++){
     printf("a[%d]=%d  ",i,a[i]); 
}
	 return 0;
}

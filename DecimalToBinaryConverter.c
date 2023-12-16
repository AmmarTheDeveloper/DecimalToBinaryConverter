#include <stdio.h>
#include<stdlib.h>

int main() {
   
   int binary[100] , number , i , index = 0;

   printf("Enter number : ");
   scanf("%d",&number);
   
   for( i=0;number>=1;i++){

       binary[index] = number % 2;
       number = number / 2;
       index++;
       
   }

  //looping reverse because values are inserted from the left side
   for(i=index;i>=0;i--){
       printf("%d ",binary[i]);
   }
   
    return 0;
}

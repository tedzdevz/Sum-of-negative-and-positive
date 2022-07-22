#include <stdio.h>
//Array Sum of Positive and Negative Numbers
int main(){
	do{
		int pSum = 0, nSum = 0, i, total, average;
 	  
 	   
		printf("How many number(s)? : ");
    	scanf("%d", &total);
    	int array[total];
    
   		printf("Enter %d Numbers\n", total);
   		
    	for(i = 0; i < total;i++){
    		printf("%d:",(i+1));
      		scanf("%d", &array[i]);
    	}
    
    
    	for(i = 0 ; i < total;i++){
			if(array[i] < 0){
				nSum = nSum + array[i];
			}else{
				pSum = pSum + array[i];
			}
		
	    }

 		average = pSum + nSum;
		average = average / total;
		
		
		
		printf("\nNegative Numbers Sum: %d", nSum);
    	printf("\nPositive Numbers Sum: %d\n", pSum);
    	
    	printf("Average of all input numbers: %d\n", average);
    	
 	}while(3<4);
}

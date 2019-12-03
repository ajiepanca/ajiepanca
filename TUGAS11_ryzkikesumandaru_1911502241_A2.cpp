//nama:ryzki kesuma ndaru
//nim:1911502241


#include <stdio.h>
int main()
{
	int A[11]={12,17,10,5,15,25,11,7,25,16,19};
	int I,N,flag,C,jum;
	
	for(C=0; C<=2; C++){
		printf("inputkan bilangan integer ="); scanf("%i",&N);
	 for(I=0; I<11; I++){
	 	printf("%3i",A[I]);
	 }
	 flag=0;
	 I=0;
	 while(I<10){
	 	if(A[I]==N){
	 		flag++;
		 }
		 jum=flag;
		 I++;
	 }
	 printf("\n");
	 if(jum>0){
	 
	 printf("\nADA");
	 printf("\nTerdapat %i bilangan yang sama\n\n",flag);
	 }else{
	 	printf("\nTIDAK ADA\n");
	 	}
	}
	return 0;
}

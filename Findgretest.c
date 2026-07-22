#include<stdio.h>
   void gret(int a, int b,int c){
   	
   	if(a>b && b>c){
   		printf("GRETEST NUMBER :%d" ,a);
	   }
   	else if(b>a && b>c){
   		printf("GRETEST NUMBER :%d" ,b);
	   }
   	else if(c>b && c>a){
   		printf("GRETEST NUMBER : %d" ,c);
	   }
   }

  int main(){
  	int a;
  	printf("ENTER FRIST NUMBER \n:");
  	scanf("%d" ,&a);
  	
  	int b;
  	printf("ENTER SECOND NUMBER  \n:");
  	scanf("%d" ,&b);
  	
  	int c;
  	printf("ENTER THIRD NUMBER \n:");
  	scanf("%d" ,&c);
  	
  	
  	gret(a,b,c);
  	
  	
  }

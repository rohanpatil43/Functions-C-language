#include<stdio.h>
  void swap(int *x ,int *y ,int *z){
   int  temp = *x;
	  *x=*y;
      *y=*z;
      *z=temp;
      return;
}
    int main (){
    	int a;
    	printf("Enter a value a :");
    	scanf("%d" ,&a);
    	int b;
    	printf("Enter a value b :");
    	scanf("%d" ,&b);
    	int c;
    	printf("Enter a value c :");
    	scanf("%d" ,&c);
    swap(&a,&b,&c);
    printf("value of a :%d",a);
    printf("value of b :%d",b);
    printf("value of c :%d" ,c);
	}

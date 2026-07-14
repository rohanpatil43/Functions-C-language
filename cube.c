#include<stdio.h>
  void Cube(int a){
  	printf("\nCube is : %d" ,a*a*a);
  	printf("\nSize of int :%d" ,sizeof(int));
  	printf("\nSize of a :%d",sizeof(a));
  }
    int main(){
    	int num=45;
    	Cube(num);
	}

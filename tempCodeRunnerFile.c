#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
		 int arr[5];
		 
		 int *p =NULL;
		 p = (int *)malloc(5 * sizeof(int));      //Dynamic allocation using malloc
  		 
		 int *q=NULL;
		 q = (int *)malloc(5 * sizeof(int));      //Dynamic Allocation using calloc
		 
		 int *X =NULL;
		 X = new int[5];
		 
		 free(p);
		 free(q);
		 
		 delete [] X;
		 
		 return 0;
}
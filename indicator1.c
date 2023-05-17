#include<stdio.h>

int swap(int *n1,int *n2)
{
	int t;
	t=*n1;
	*n1=*n2;
	*n2=t;
	
	printf("A=%d \nB=%d",*n1,*n2);
	
}
main()
{
	int A=20,B=1;
	swap(&A,&B);
}


//BUBBLE SORT ALGORITHM
#include<stdio.h>
#define maxsize 100

void swap(int* a,int* b)
{ 
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void bubblesort(int a[],int n)
{
	int round,i , flag ;
	for( round=1;round<=n-1;round++) 
	{
		
		flag =0;
		for( i=0;i<=n-round-1;i++) 
		{
			if(a[i]>a[i+1])
			{
				swap(&a[i],&a[i+1]); 
				flag=1;
			}
		}
	 if(flag==0) // this will stop unnecessary looping 
	    break;
	 
	}
}
int main()
{
	int a[maxsize],n,i;
	printf("Enter the number of elements you want to input\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for( i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	bubblesort(a,n); // calling bubblesort function 
	printf("\nSorted arrray\n");
	//printing sorted array
	for( i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	 
}

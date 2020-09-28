//INSERTION SORT ALGORITHM
#include <bits/stdc++.h>  
using namespace std;
/* Function to sort an array using insertion sort*/
void insertSort(int A[],int n)
{
	int i,temp,j;
	for(i=1;i<n;i++)
	{
		temp=A[i];
//     this loop will not execute when we will have a sorted array
		for(j=i-1;j>=0 &&temp<A[j];j--)
		{
			A[j+1]=A[j];
		}
		A[j+1]=temp;
	}
}


int main()
{
	int i,n;
	int A[]={8 , 67, 34, 99, 100, 13, 77, 55 , 200 , 89 ,5 ,45 };
	n = sizeof(A) / sizeof(A[0]); 
	insertSort(A,n);
	for(i=0;i<n;i++)
	{
		cout<<A[i]<<" ";
	}
	
}
/*The no. of Comparisons and shifts in insertion sort in all practical scenario is 
a lot less than Selection and Bubble sort . So it is considered to be better than the Bubble
sort an Selection sort algorithm*/ 

/*Time complexity
 ~ Best Case= O(n)
~ Average Case = O(n^2)
~ Worst Case = O(n^2)*/


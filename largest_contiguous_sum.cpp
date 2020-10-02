#include<bits/stdc++.h>
using namespace std; 

int main() 
{ 
    int n;
    cout<<"Enter the number of elements :  ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements :  ";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int max_so_far = -99999, max_ending_here = 0; 

	for (int i=0;i<n;i++) 
	{ 
		max_ending_here = max_ending_here + arr[i]; 
		if (max_so_far < max_ending_here) 
			max_so_far = max_ending_here; 

		if (max_ending_here < 0) 
			max_ending_here = 0; 
	}

	cout<<"\nMaximum contiguous sum is " <<max_so_far; 
	return 0; 
} 

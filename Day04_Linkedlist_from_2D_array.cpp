// CPP program to construct a linked list from  2D matrix 
#include <bits/stdc++.h> 
using namespace std; 
 
struct Node 
{ 
	int data; 
	struct Node* right, *down; 
}; 

struct Node* linkedlist(int arr[][3], int i, int j, int m, int n) 
{ 
	if (i > n - 1 || j > m - 1)  //This is the condition when we go out of the bound
		return NULL; 

	struct Node* temp = new Node(); 
	temp->data = arr[i][j]; 
	temp->right = linkedlist(arr, i, j + 1, m, n); 
	temp->down = linkedlist(arr, i + 1, j, m, n); 
	return temp; 
} 

void print(struct Node* head) 
{ 
	// pointer to move right 
	struct Node* Rptr=head; 

	// pointer to move down 
	struct Node* Dptr = head; 

	while (Dptr!=NULL) 
    { 
		Rptr = Dptr; 

		while (Rptr!=NULL) 
        { 
			cout << Rptr->data << " "; 
			Rptr = Rptr->right; 
		} 
		cout << "\n"; 
		Dptr = Dptr->down; 
	} 
} 

int main() 
{ 
	int arr[][3] = { 
		{ 1, 2, 3 }, 
		{ 4, 5, 6 }, 
		{ 7, 8, 9 } 
	}; 

	int m = 3, n = 3; 
	struct Node* head = linkedlist(arr, 0, 0, m, n); 
	print(head); 
	return 0; 
} 


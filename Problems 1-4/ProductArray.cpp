#include <bits/stdc++.h>
using namespace std;
void TwoNumSum (int arr[],int n)
{
	int left[n],right[n];
	left[0] = right[n-1] = 1;
	for(int i = 1; i < n ; i++)
		left[i] = arr[i-1] * left[i-1];
	for(int i = n-2; i >= 0 ; i--)
		right[i] = arr[i+1] * right[i+1];
	for(int i = 0; i < n ; i++)
		arr[i] = left[i] * right[i];
	
}

int main()
{
	int arr [] = {1, 2, 3, 4, 5};
	int size = sizeof(arr)/ sizeof(arr[0]);
	TwoNumSum(arr,size);
	for(auto i : arr)
		cout << i << "  "; 
}

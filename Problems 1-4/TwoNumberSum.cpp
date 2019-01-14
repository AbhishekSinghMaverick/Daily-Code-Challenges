#include <bits/stdc++.h>
using namespace std;
bool TwoNumSum (int arr[],int size,int k)
{
	sort(arr,arr + size);
	int beg = 0,end = size - 1 ;
	while(beg < end)
	{
		if(arr[beg] + arr[end] == k)
		return true;
		else if (arr[beg] + arr[end] > k)
		end--;
		else 
		beg++;
	}
	return false;
}

int main()
{
	int arr [] = {1, 4, 45, 6, 10, -8};
	int k = 16;
	int size = sizeof(arr)/ sizeof(arr[0]);
	if(TwoNumSum(arr,size,k))
		cout << "\nArray has two elements with the given sum\n";
	else
		cout << "\nArray does not have two elements with the given sum\n";

}

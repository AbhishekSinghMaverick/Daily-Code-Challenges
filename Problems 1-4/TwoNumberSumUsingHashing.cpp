#include <bits/stdc++.h>
using namespace std;

bool TwoNumSum (int arr[],int size,int k)
{
	unordered_set <int> s;
	for(int i = 0; i < size;i++)
	{
		int temp = k - arr[i];
		if(temp >= 0 && s.find(temp) != s.end())
			return true;
		s.insert(arr[i]);
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

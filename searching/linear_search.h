#include <iostream>
using namespace std;


int search(int arr[], int n, int x){
	int i;
	for(i = 0; i<n; i++)
		if(arr[i] == x)
			return i;
	return -1;
}

int main(){
	int arr[] = {3,10,2,4,1}
	
	int x = 1;
	int n = sizeof(arr) / sizeof(arr[0]);
	
	int output = search(arr,n, x);
	
	(result == -1) ? cout << "not found" : cout << "found at" << output;
	
	return 0;
}
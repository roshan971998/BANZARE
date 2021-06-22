#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610};
	int n=16;
	int i=0;
	while(i<n){
	    if(arr[i]<55){
	        i=i+4;
	    }
	    else if(arr[i]==55) cout<<i;
	    else{
	        for(int j=i-4;j<i;j++){
	            if(arr[j]==55) cout<<j;
	        }
	    }
	    
	}
	if(i>=n)
	cout<<"-1";
	return 0;
}

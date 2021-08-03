#include<iostream>
#include<bits/stdc++.h>    // For using the absolute function
using namespace std ;
 

int main()
{
	int n;
	cin>>n;
	int a[n][n];
	for(int i =0 ;i<n;i++)
	for(int j =0 ;j<n ;j++){
	  cin>>a[i][j];
	  }
	int suml=0,sumr=0,i=0,j=0;
 while(i!=n)
 {
 	suml+=a[i][i];
 	i++;
 }	
 i=0,j=n-1;
 while(i!=n&&j>=0)
 {
 	sumr+=a[i][j];  //Assignment Operator for adding the result to var sum
 	i++;
 	j--;
 }
   cout<<abs(sumr-suml); // helps in finding the absolute difference
	return 0;  
}

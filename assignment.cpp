#include<iostream>
using namespace std;
int main()
{
	int n,i;
	
	cout<< " enter the values of array " << endl;
	cin>>n;
	
	int arr[n];
	
	cout<< " enter values in array " << endl;
	
	for(i=0; i<n;i++)
	{
		cin>> arr[i];
		
	}
	
	int max= INT_MIN;
	int second_max= INT_MAX;
	
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			second_max= max;
			max=arr[i];
			
		}
		if(arr[i]<max&&arr[i]>second_max)
		{
			second_max= arr[i];
		}
	}
	cout<< " second highest number in array is " << second_max << endl;
}
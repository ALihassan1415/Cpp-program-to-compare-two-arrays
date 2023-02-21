//Write a program to check wether two arrays are same or not...

#include<iostream>
using namespace  std;
int main()
{
	int arr1[5] , arr2[5];
	int count;
	cout<<"Enter the numbers in array 1 : "<<endl;
			for(int i=0;i<5;i++)
		{
				cout<<"Enter value "<<i+1<<" : ";
				cin>>arr1[i];
		}
	cout<<"Enter the numbers in array 2 : "<<endl;
			for(int i=0;i<5;i++)
		{
				cout<<"Enter value "<<i+1<<" : ";
				cin>>arr2[i];
		}
		bool flag;
			for(int i=0;i<5;i++)
		{
				if(arr1[i]!=arr2[i])
				flag++;	
		
		}
		if(flag!=0)
		cout<<"\nArrays are same !!!";
		else
		cout<<"\nArrays are different !!!";
}
#include<iostream>
using namespace std;
void binarysearch(int *a,int beg,int end,int ele);
int beg=0;
int end=10;
int main()
{
	int a[11],ele;
	cout<<"Enter the 11 elements in array in a sorted ascending way "<<endl;
	for(int i=0;i<11;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the element u want to search :";
	cin>>ele;
	binarysearch(a,beg,end,ele);
	
}
void binarysearch(int *a,int beg,int end,int ele)
{
	int mid;
	mid=(beg+end)/2;
	if(a[mid]==ele)
	{
		cout<<"Element is present in an array at "<<mid<<"th position";
		
	}
	else if(a[mid]<ele)
	{
		beg=mid+1;
		binarysearch(a,beg,end,ele);
	}
	else if(a[mid]>ele)
	{
		end=mid-1;
		binarysearch(a,beg,end,ele);
	}
}

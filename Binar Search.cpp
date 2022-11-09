//Binary Search in Array not working
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter no. of Elements :";
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++)
		cin>>A[i];
	
	int ix,num;
	cout<<"Enter no. to be Searched :";
	cin>>num;	
	int count=0,mid,low=0,high=n-1;
	
	while(low==high)
	{
		mid=(low+high)/2;
		if(num==A[mid])
		{
			cout<<A[mid]<<" is found at Position "<<mid<<endl;
			count++;	
		}
		else if(num>A[mid])
				low=mid+1;
		else
				high=mid-1;
	}
	
	cout<<num<<" is Stored "<<count<<" Times.";
	
	

/*	cout<<"Traversing Array :-\n";
	
	for(int i=0;i<n;i++)
		cout<<A[i]<<endl;  */
}

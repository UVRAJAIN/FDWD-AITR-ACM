//Linear Search in Array
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
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(A[i]==num)
		{
			cout<<A[i]<<" is found at Position "<<i<<endl;
			count++;	
		}
	}
	cout<<num<<" is Stored "<<count<<" Times.";
	
	

/*	cout<<"Traversing Array :-\n";
	
	for(int i=0;i<n;i++)
		cout<<A[i]<<endl;  */
}

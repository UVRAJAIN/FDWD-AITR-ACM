//Deliting an element from array
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
	cout<<"Enter no. to be Deleted :";
	cin>>num;	
	for(int i=0;i<n;i++)
	{
		if(A[i]==num)
			ix=i;
	}
	
	for(int i=ix;i<n;i++)
		A[i]=A[i+1];
	n--;

	cout<<"Traversing Array :-\n";
	
	for(int i=0;i<n;i++)
		cout<<A[i]<<endl;
}

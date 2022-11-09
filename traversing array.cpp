//insert an element at given index
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
		
	cout<<"Enter index at which no. be inserted :";
	int ix,num;cin>>ix;
	cout<<"Enter no. to be inserted :";
	cin>>num;
	n++;
	for(int i=n-2;i>=ix;i--)
		A[i+1]=A[i];
	A[ix]=num;

	cout<<"Traversing Array :-\n";
	
	for(int i=0;i<n;i++)
		cout<<A[i]<<endl;
}

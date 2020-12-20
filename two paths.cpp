#include <iostream>
using namespace std;
int i,j,c=0,p=0,sum=0;
void max(int a[][4],int k,int i=0,int j=0)
{
	if(i==0 && p==0)
	{	
		sum=sum+a[i][j];
		cout<<endl;
		sum=sum-a[i][j];
    }
		
	if(j>0 &&i>0)
	{
		cout<<i-1<<j-1<<" ";
		sum=sum+a[i-1][j-1];
		max(a,k,i-1,j-1);
		sum=sum-a[i-1][j-1];
	}		
	if(i>0)	
	{
		cout<<i-1<<j-1<<" ";
		sum=sum+a[i-1][j-1];	
		max(a,k,i-1,j);
		sum=sum-a[i-1][j-1];
	}
}
int main()
{
	int i,j,n,m,k,a[4][4];
	
	cin>>n>>m>>k;cout<<endl;
	/*for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			cin>>a[i][j];
		cout<<endl;	
	}
	*/
	max(a,k,n,m);
}

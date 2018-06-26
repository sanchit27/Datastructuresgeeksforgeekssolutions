#include<iostream>
using namespace std;
int main()
{
	int a[]={1,3,5,7};
	int m=sizeof (a)/sizeof a[0];
	int b[]={2,4,6,8};
	int n=sizeof (b)/sizeof b[0];
	int i=0;
	int j=0;
	int k=0;
	int d[100];
	
	
	while(i<m && j <n)
	{
		if(a[i]<b[j])
		{
		d[k]=a[i];
		i++;
		k++;}
		else
		{
		
		d[k]=b[j];
		j++;
		k++;}
		
	}
	while(i<m)
	{
	d[k]=a[i];
	i++;k++;}
	while(j<n)
	{
	
	d[k]=b[j];
	j++;
	k++;}
		cout<<"Merging :";
	for (int i=0; i < m+n; i++)

        cout << d[i] << " ";

	
}

#include<iostream>
#define max 20
using namespace std;
void display( int a[max],int n){
	cout<<"sort\n";
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	cout<<"\n";
}
void selection_sort(int a[max],int n)
{ 

int min,p=0;
for(int i=0;i<n;i++){
	min=a[i];
	p=i;
		for(int k=i+1;k<n;k++){
			if(min>a[k]){
				min=a[k];
				p=k;
			}
		}
		swap(a[i],a[p]);
		
	
}}

int main( )
{
	int a[max],n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	selection_sort(a, n);
	cout<<"-------------------------------------------\nselection sorting:\n\n";
	display(a,n);
}

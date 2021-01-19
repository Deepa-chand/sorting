#include<iostream>
using namespace std;

void mergesort(int [],int ,int);//divide and conqure
void merge(int [],int ,int ,int);//combine

void display(int a[],int size){
	for(int i=0;i<size;i++){
		cout<<a[i]<<"\t";
	}
}
//Dividing the list into two sublist, sorting them and merging them.
void mergesort(int a[],int start ,int end)//starting and ending index
{
	int middle;
	if(start<end){
		middle=(start+end)/2;
		mergesort(a,start,middle);
		mergesort(a,middle+1,end);
		merge(a,start,middle,end);
	}
}
void merge(int a[],int s,int m,int e){
	int i=s,index=s,p,j=m+1;//m+1 cause we have pass the middle not middle +1 as a perameter
	int temp[e+1];
	while(i<=m && j<=e){
		if(a[i]<a[j]){
			temp[index]=a[i];
			i++;
		}
		else{
			temp[index]=a[j];
			j++;
		}
		index++;
	}
	if(i>m){
		while(j<=e){
			temp[index]=a[j];
				j++;
					index++;
		}
	}
	else{
			while(i<=m){
			temp[index]=a[i];
				i++;
					index++;
		}
	}
	p=s;
	while(s<index){
		a[s]=temp[s];
		s++;
	}
	
	
}

int main(){
	int s;
	cin>>s;
	int a[s];
	for(int i=0;i<s;i++){
		cin>>a[i];
	}
	cout<<"berfore sorting\n";
	display(a,s);
	mergesort(a,0,s-1);
	cout<<"After sorting\n";
	display(a,s);
}

# sorting
insertion sorting: main function.................
for(int i=1;i<n;i++){
	if(a[i]<a[i-1]){
			swap(a[i-1],a[i]) ;
		        int j=i-1;
		while(j!=0)
		{
		 if(a[j-1]>a[j])
		{
				swap(a[j-1],a[j]) ;
				j--; 
			}
		else break
		
			}}}
		

vector<int> alternateSort(int arr[], int N)
	{
	    vector<int> vect;
	     sort(arr,arr+N);
	        int n=(N/2)-1;
	       
	        for(int i=0;i<=n;i++)
	        {
	            vect.push_back(arr[N-i-1]);
	            vect.push_back(arr[i]);
	        }
	        if(N%2)
	        vect.push_back(arr[N/2]);
	        return vect;
	    
	}
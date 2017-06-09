bool searchElement(int arr[], int n, int key)
{
	for(int i=0; i<n; ++i)
		if(arr[i]==key)
			return i;
	return -1;
}

bool insertElementEnd(int arr[], int n, int key)
{
	arr[n]=key;
	return n+1;
}

bool insertElement(int arr[], int n, int pos, int key)
{
	if(pos > n)
		return -1;
	for(int i=n+1; i>pos; i++)
	{
		arr[i] = arr[i-1];
	}
	arr[pos]=key;
	return n+1;
}

bool deleteElement(int arr[], int n, int key)
{
	int pos = searchElement(key);
	if(pos == -1)
		return -1;
	for(int i=pos, i<n-1; ++i)
	{
		arr[i] = arr[i+1];
	}
	return n-1;
	
}

bool checkPairWithSumX(int arr[],int n, int x)
{
	//sort
	for (int i = 0; i < n-1; i++)
	{
       for (int j = 0; j < n-i-1; j++) 
       {
	   		if (arr[j] > arr[j+1])
            {
				int temp = arr[j];
    			arr[j] = arr[j+1];
    			arr[j+1] = temp;
			}
		}
	}
	int left = 0, right = n-1;
	while(left < right)
	{
		if(arr[left]+arr[right]==x)
			return 1;
		else if(arr[left]+arr[right] < x)
			left++;
		else
			right--;
	}
	return 0;
}

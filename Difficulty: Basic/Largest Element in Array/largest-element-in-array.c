// User function template for C
int largest(int arr[], int n) {
    // Code Here
    int max,i;
    max=arr[0];
    for(i=1;i<n;i++)
    {
    if(arr[i]>max)
    max=arr[i];
    }
    return max;
}
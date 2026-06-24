void stableSelectionSort(int arr[], int n) {
  for(int i=0;i<n-1;i++){
    int minidx=i;
    for(int j=i;j<n;j++){
      if(arr[minidx]>arr[j]){
        minidx=j;
      }
      int minval=arr[minidx];
    }
    for(int j=minidx;j>i;j--){
      arr[j]=arr[j-1];
    }
    arr[i]=minval;
  }
}

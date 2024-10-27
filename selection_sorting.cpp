#include<iostream>
using namespace std;
void selection_sort(int a[],int size){
    int temp;
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"sorted elements are : ";
     for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }

}
int main(){
    int s;
    cout<<"enter size of array : ";
    cin>>s;
    int arr[s];
    cout<<"enter "<<s<<" elements of array : ";
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"unsorted array is : ";
     for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }
    selection_sort(arr,s);

}

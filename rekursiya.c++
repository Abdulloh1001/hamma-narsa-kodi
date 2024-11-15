#include<iostream>
using namespace std;
int partition(int arr[], int low, int high){
    int pivot=arr[high];
    int i=low-1;
for(int j=low; j<high; j++){
    if(arr[j]<=pivot){
        i++;
        swap(arr[i], arr[j]);
    }
}
swap(arr[i+1], arr[high]);
return i+1;
}
void quicksort(int arr[], int low, int high){
    if(low<high){
        int pi=partition(arr, low, high);
        quicksort(arr, low, pi-1);
        quicksort(arr, pi+1, high);
    }
}
int main(){
    int arr[]={10,7,8,9,1,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"dastlabki massiv:";
    for(int i=0; i<size; i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    quicksort(arr, 0, size-1);
    cout<<"tartiblangan massiv: ";
    for(int i=0; i<size; i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
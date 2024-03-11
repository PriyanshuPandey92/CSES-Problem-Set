#include <iostream>
#define int long long
using namespace std;

void IncreasingArray(int arr[], int size){
    int steps=0;
    for(int i=1; i<size; i++){
        if(arr[i-1]>arr[i]){
            int diff=arr[i-1]-arr[i];
            arr[i]=arr[i-1];
            steps+=diff;
        }
    }
    cout<<steps;
}

int32_t main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    IncreasingArray(arr,size);
    return 0;
}

#include <iostream>
using namespace std;
 
int missing (int arr[], int n){
    int sum=0;
    for(int i=0; i<n-1; i++){
        sum=sum+arr[i];
    }
 
    int total=0;
    int k=1;
    while(k<=n){
        total=total+k;
        k=k+1;
    }
    return (total-sum);
}
 
int main(){
    int n;
    cin>>n;;
    int arr[n-1];
    for(int i=0; i<n-1 ; i++){
        cin>>arr[i];    
    }
    cout<<missing(arr,n);
    return 0;
}

#include <iostream>
#include <string>
using namespace std;
 
int main(){
    long max=1;
    string str;
    cin>>str;
    long size = str.length();
    long i = 1;
    long currMax = 1;
    char curr = str[0];
    while(i<size){
        if(str[i]==curr){ 
            currMax++;   
        }
        else{
            if(max<currMax){
                max = currMax;
            } 
            currMax = 1;
        }
        curr = str[i];
        i++; 
    }
    if(max<currMax){
        max = currMax;
    }
    cout<<max;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(int n){
    int rev=0;
    int temp=n;
    while(n!=0){
        int r=n%10;
        rev=rev*10+r;
        n/=10;
    }
    return temp==rev ;
}

int main(){
    int n;
    cin>>n;
    if(is_palindrome(n)){
        cout<<"Yes it is palindrome!"<<endl;
    } else {
        cout<<"it is not palindrome!"<<endl;
    }
}
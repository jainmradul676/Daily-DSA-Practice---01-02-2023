#include <bits/stdc++.h>
using namespace std;

int cnt_digits1(int n){
    // Iterative solution
    int cnt=0;
    while(n!=0){
        cnt++;
        n/=10;
    }
    return cnt;
}

int cnt_digits2(int n){
    // Recursive solution
    if(n==0) return 0;

    return 1 + cnt_digits2(n/10);
}

int cnt_digits3(int n){
    // logarithmic solution
    return 1+ log10(n);
}

int main(){
    int n;
    cin>>n;
    int ans=cnt_digits3(n);
    cout<<ans<<endl;
}
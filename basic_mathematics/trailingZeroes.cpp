#include <bits/stdc++.h>
using namespace std;

int trailing_zeroes(int n){
    int res=0;
    for(int i=5;i<=n;i*=5){
        res+= n/i;
    }

    return res;
}

int main(){
    int n;
    cin>>n;
    cout<<trailing_zeroes(n)<<endl;
}
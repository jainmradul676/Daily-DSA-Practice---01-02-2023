#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    // Iterative solution
    int res = 1;

    for(int i=2;i<=n;i++){
        res*=i;
    }
    return res;
}

int factorial2(int n){
    // Recursive solution
    
    if(n==0) return 1;

    return n*factorial2(n-1);

}

int main(){
    int n;
    cin>>n;
    cout<<factorial2(n)<<endl;
}
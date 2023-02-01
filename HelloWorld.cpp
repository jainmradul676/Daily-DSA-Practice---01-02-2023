#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> v;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    map<int,int> mp;

    for(auto x:v){
        mp[x]++;
    }

    for(auto x:mp){
        cout<<x.first<<"->"<<x.second<<endl;;
    }
    
}
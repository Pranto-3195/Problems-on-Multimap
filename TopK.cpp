#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cout<<"Enter size : ";
    cin>>n;
    vector <int> nums(n);
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<"Enter k : ";
    cin>>k;
    map<int,int> freq;
    for(int x:nums) freq[x]++;
    multimap<int,int> mp;
    for(auto x:freq){
        int num=x.first;
        int c=x.second;
        mp.insert({c,num});
    }
    cout<<"Top "<<" Frequent Elements: ";
    auto it=mp.rbegin();
    for(int i=0;i<k;i++){
        cout<<it->second<<" ";
        it++;
    }
}
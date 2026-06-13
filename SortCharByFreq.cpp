#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
        string s;
        cin>>s;
        map<char,int>freq;
        for(char ch:s) freq[ch]++;
        multimap<int,char,greater<int>> m;
        for(auto x:freq){
            char character=x.first;
            int c=x.second;
            m.insert({c,character});
        }
            string out="";
            for(auto x:m){
                int c=x.first;
                char character=x.second;
                while(c>0){
                    out+=character;
                    c--;
                }
            }
            cout<<out;
        }

#include<bits/stdc++.h>
using namespace std;


void pattern(string text,string pat){

    int n=text.length();
    int m=pat.length();

    for(int i=0;i<=n-m;i++){
        int j;
        for(j=0;j<m;j++){
            if(pat[j]!=text[i+j]){
                break;
            }
        }

        if(j==m){
            cout<<i<<" ";
        }
    }
    

}

int main(){

    string text;

    string pat;
    cin>>text;
    cin>>pat;
    pattern(text,pat);

}
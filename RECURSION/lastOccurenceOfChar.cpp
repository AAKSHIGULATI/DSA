#include<iostream>
using namespace std;
//left to right iteratively recurive approach
void lastOccLTR(string&s,char x,int i,int&ans){
    if(i>=s.size()){
        return;

    }
    if(s[i]==x){
        ans=i;
    }
    lastOccLTR(s,x,i+1,ans);
}
// int main(){
//     string s;
//     cin>>s;
//     char x;
//     cin>>x;
//     int ans = -1;
//     lastOccLTR(s,x,0,ans);
//     cout<<ans<<endl;
// }

//right to left iteratively recursive approach

void lastOccRTL(string&s,int x,int i,int&ans){
    if(i<0){
        return;
    }
    if(s[i]==x){
        ans=i;
        return;
    }
    lastOccRTL(s,x,i-1,ans);
}
int main(){
    string s;
    cin>>s;
    char x;
    cin>>x;
    int ans = -1;
    lastOccRTL(s,x,s.size()-1,ans);
    cout<<ans<<endl;
}
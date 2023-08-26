#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 
#define int long long
#define soa(arr) accumulate(arr.begin(),arr.end(),0)
#define mod 1e7+7
#define vi vector<int>
void printsubsequences(string str, string output,int i){
    //base case
    if(i>=str.length()){
        cout<<output<<endl;
        return;
    }
    //exclude
    printsubsequences(str,output,i+1);
    //include
    output.push_back(str[i]);
    printsubsequences(str,output,i+1);
}
void printsubsequences(string str, string output,int i, vector<string>& v){
    //base case
    if(i>=str.length()){
        v.push_back(output);
        return;
    }
    //exclude
    printsubsequences(str,output,i+1,v);
    //include
    // output = output + str[i];
    printsubsequences(str,output+str[i],i+1,v);
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str = "abcd";
    string output = "";
    vector<string> v;
    int i = 0;
    printsubsequences(str,output,i,v);
    cout<<"printing all subsequences"<<endl;
    for(auto val: v){
        cout<<val<<" ";
    }
    cout<<endl<<" size of vector is :"<<v.size()<<endl;
     return 0 ;
}
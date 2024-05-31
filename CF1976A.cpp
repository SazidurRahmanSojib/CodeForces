#include<bits/stdc++.h>
using namespace std;


int main() {
   int test=1; 
   cin>>test;
   while(test--){
   int n;
   cin>>n;
   string s,h; 
   cin>>s;
   h=s;
   sort(s.begin(),s.end());
   if(s==h){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }
   



   //testcase ends
   }

return 0;
}
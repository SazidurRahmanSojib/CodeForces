#include<bits/stdc++.h>
using namespace std;


int main() {
   int test=1; 
   cin>>test;
   while(test--){
   int n;
   cin>>n; 
   long int A[n];
   for(int i=0;i<n;i++){
    cin>>A[i];
   }
   long int a,b=-1;
   sort(A,A+n);
   a=A[0];
   int k=1;
   b=a;
   while(k<n){
    if(A[k]%a==0||A[k]%b==0){
        k++;
    }else if(a==b){
        b=A[k];
        k++;
    }else{
        break;
    }
   }

   if(k>=n){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }

   



   //testcase ends
   }

return 0;
}
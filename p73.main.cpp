#include <iostream>

using namespace std;

int main() {
       
       
       int n,i,s;
       cout<<"please enter n:";
       cin>>n;
       
       s=0;
       for(i=1;i<=n;i++){
       	  
       	  if(n%i==0)
       	  s+=i;
	   }
	   cout<<s;
	
}
#include <iostream>

using namespace std;

int main() {
	
	  int n,m,i,g;
	  cout<<"please enter n:";
	  cin>>n;
	  cout<<"plese enter m:";
	  cin>>m;
	  
	  for(i=1;i<=n && i<=m;i++){
	  	    if(n%i==0 && m%i==0)
	  	    g=i;
	  }
	  if(n%m==0);
	  
	  cout<<"g"<<"\t"<<n<<"\t"<<"and"<<"\t"<<m<<"\t"<<"is"<<"\t"<<g;
	  
}
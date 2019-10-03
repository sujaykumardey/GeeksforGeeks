#include <iostream>
using namespace std;

void rec(int n)
{
    if(n<0 || n ==0)
    {
        cout<<n<<" ";
        return;
    }
    cout<<n<<" ";
    rec(n-5);
    cout<<n<<" ";
}

int main() {
	int n,t;
	cin>>t;
	
	while(t--)
	    {
	        cin>>n;
	        rec(n);
	       cout<<"\n";
	    }
	   
	return 0;
}

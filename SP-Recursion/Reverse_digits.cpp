#include <bits/stdc++.h>
using namespace std;
long long int num=0;
long long int ReverseNum(long long int  n)
{
    
    if(n == 0 )
    {
        return num;
    }
    else 
    {
       
         num=num*10+n%10;
         ReverseNum(n/10);
        
        
    }
    
}
int main()
{
long long int n,k;
int t;
cin>>t;
while(t--)
{
    
    cin>>n;
    k=ReverseNum(n);
    cout<<k<<endl;
    num=0;
}
	
	
return 0;
}

#include<bits/stdc++.h>
using namespace std;
void PrimeFactor(int n){
  for(int i =2; i*i<=n; i++)
  {
    if(n%i==0)
    {
        int cnt=0;
        while(n%i==0)
        {
            cnt++;
            n=n/i;
        }
        cout<<i<<"^"<<cnt<<endl;
    }
  }
  if(n>1)
        cout<<n<<"^"<<1<<endl;
        else cout<<endl;

}


int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        PrimeFactor(n);
    }

 return 0;
}

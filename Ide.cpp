#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bool flag=false;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            flag=true;
            ans = a[i];
        }
    }
    if(flag==true)
    {
        cout<<"Key present at index  "<<ans<<endl;
    }
    else
    {
        cout<<"Key not present"<<endl;
    }

    return 0;
}

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
    
    int s=0;
    int e=n-1;
    int ans =0;
    
    while(s<=e)
    {
        int mid = (s+e)/2;
        if(a[mid]==k)
        {
            cout<<"key present at index "<<mid;
            break;
        }
        else if(a[mid]<k)
        {
            s = mid+1;
        }
        else
        {
            e = mid-1;
        }
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);

    int n;
    cin>>n;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((a==1 and b==1 and c==0) or (a==1 and b==0 and c==1) or (a==0 and b==1 and c==1) or (a==1 and b==1 and c==1))
        cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}
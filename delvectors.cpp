#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={10,20,30,40};
    int value=20;
    auto it=find(v.begin(),v.end(),value);
    if(it!=v.end())
    {
        v.erase(it);
        for(auto i:v)
            cout<<i<<" ";
    }
    else
    {
        cout<<"Element not found";
    }
}

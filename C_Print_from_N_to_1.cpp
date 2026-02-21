#include<bits/stdc++.h>
using namespace std;
 
void N_one(int n){
    if(n==0){
        return;
    }

    cout<<n;
    if(n>1) cout<<" ";
    N_one(n-1);
}
int main()
{
    int n;
    cin>>n;

    N_one(n);
    return 0;
}
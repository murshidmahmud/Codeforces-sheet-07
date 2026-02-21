#include<bits/stdc++.h>
using namespace std;

void one_N(int n){
    if(n==0){
        return;
    }
    
    one_N(n-1);
    cout<<n <<endl;
}

int main()
{
    int n;
    cin>>n;

    one_N(n);
    return 0;
}
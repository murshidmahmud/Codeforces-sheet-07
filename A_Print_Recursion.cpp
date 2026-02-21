#include<bits/stdc++.h>
using namespace std;

int recursion(int n){
    if(n==0){
        return 0;
    }
    else{
        cout<<"I love Recursion" <<endl;

        return recursion(n-1);
    }
}

int main()
{
    int n;
    cin>>n;
    
    recursion(n);
    return 0;
}
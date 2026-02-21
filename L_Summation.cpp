#include<bits/stdc++.h>
using namespace std;

int summation(int n, vector<int>&a){
    if(n==0) return 0;

    return a[n-1] + summation(n-1,a);

}

int main()
{
    int n;
    cin>>n; 

    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    cout<<summation(n,a);
    return 0;
}
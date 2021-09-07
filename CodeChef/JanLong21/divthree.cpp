#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--){
        int n; //number of setters 
        int k; //exact number of problems
        int d; //number of days
        cin>>n>>k>>d;

        int a[n];
        int sum = 0;
        for (int i = 0; i < n; i++){
            cin>>a[i]; //number of problem by ith setter 
            sum += a[i];
        }

        if (sum < k){
            cout<<0<<endl;
        }
        else{
            int quotient = sum/k;
            if (quotient > d){
                cout<<d<<endl;
            }
            else{
                cout<<quotient<<endl;
            }
        }
    }
    return 0;
}
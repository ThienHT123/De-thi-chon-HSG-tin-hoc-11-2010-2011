#include<bits/stdc++.h>
using namespace std;
void Input(int Array[],int n){
    for(int i=0;i<n;++i){
        cin>>Array[i];
    }
}

void Output(int Array[],int n){
    for(int i=0;i<n;++i){
        cout<<Array[i]<<" ";
    }
}

void Solve(int Array[],int n){
    vector<int> Array_M;
    for(int i=0;i<n;++i){
        if(Array[i]>0){
            Array_M.push_back(Array[i]);
        }
    }
    for(int i=0;i<n;++i){
        if(Array[i]<0){
            Array_M.push_back(Array[i]);
        }
    }
    vector<int>::iterator it;
    for(it=Array_M.begin();it!=Array_M.end();++it){
        cout<<*it<<" ";
    }
}
int main(){
    ios_base::sync_with_stdio(false)
    cin.tie(0);
    int n;
    cin>>n;
    int Array[n];
    Input(Array,n);
    Output(Array,n);
    cout<<endl;
    Solve(Array,n);
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    system("color a");
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string str;
    getline(cin,str);
    vector<int>Pos;
    string Sub_str=' ' + str + ' ';
    for(int i=0;i<Sub_str.length();++i){
        if(Sub_str[i]>'a' || Sub_str[i]<'a'){
            Pos.push_back(i);
        }
    }
    int max=0;
    for(int i=0;i<Pos.size()-1;++i){
        int next=i+1;
        if(Pos[next]-Pos[i]>max){
            max=Pos[next]-Pos[i];
        }
    }
    cout<<max-1<<"\n";
    for(int i=0;i<Sub_str.length();++i){
        int next=i+1;
        if(Pos[next]-Pos[i]==max){
            while(Pos[i]<Pos[next]-1){
                cout<<Sub_str[Pos[i]+1];
                Pos[i]++;
            }
        }
    }
}

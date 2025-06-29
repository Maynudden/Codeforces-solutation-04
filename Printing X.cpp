#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){ 
            if(i == (N+1)/2 && j == (N+1)/2)
                cout << "X";
            else if(i==j)
                cout << "\\";
            else if(i+j == N+1) 
                cout << "/";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
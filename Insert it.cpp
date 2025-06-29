#include<bits/stdc++.h>
using namespace std;
int A[10000000];
int main(){
    int N,M;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    cin >> M;
    int B[M];
    for(int i=0;i<M;i++){
        cin >> B[i];
    }
    int X;
    cin >> X;
    for(int i=N-1;i>=X;i--){ 
        A[i+M]=A[i];
        
    }
    for(int i=0;i<M;i++){ 
        A[X+i]=B[i];
    }
    for(int i=0;i<N+M;i++){
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}
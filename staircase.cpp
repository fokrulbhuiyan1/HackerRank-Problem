#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        for(int j = n-2-i; j>= 0; j--){
            cout<<" ";}
        for(int k = 0; k <= i; k++){
            cout<<"#";

        }
        cout<< endl;

    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,temp;
    cin >> n;
    int a[n+1];
    for(int i = 0;i<n;i++) {
        cin >> a[i];
    }
    for(int i = 0;i<n;i++) {
        a[i] = a[i] * a[i];
    }
    for(int i = 0;i<n-1;i++) {
        for(int j = i+1;j<n;j++) {
            if(a[i]>a[j]) {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
        
    }
    for(int i = 0;i<n;i++) {
        cout << a[i] << " ";
    }
    return 0;
}
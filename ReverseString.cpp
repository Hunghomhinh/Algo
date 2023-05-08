#include<bits/stdc++.h>
using namespace std;
int main() {
  string s;
  getline(cin,s);
  
  int i = 0;
  int j = s.size() - 1;
  char temp;
  while(i <= j) {
    temp = s[j];
    s[j] = s[i];
    s[i] = temp;
    i++;
    j--;
  }
  
  cout << s;
  return 0;
}
#include <bits/stdc++.h>

using namespace std;

void search_dir( string , vector<string> & );

int main(){

  int i;
  vector<string> hoge;
  hoge.clear();

  search_dir("./", hoge);

  for(i=0; i<hoge.size(); i+=1){
    cout << hoge[i] << endl;
  }

  return 0;
}

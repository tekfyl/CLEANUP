#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t,i; cin >> t;
    for(i=0; i<t; i++){
    int n,m; cin >> n >> m;
    vector<int> v;
    int j;
    for(j=1; j< n+1; j++){
    v.push_back(j);
    }
    for(j=0; j<m; j++){
    int key; cin >> key; v.erase(find(v.begin(), v.end(), key));
    }

    for(j=0; j<v.size(); j = j+2){
    cout << v[j] << " ";
    }
    cout << endl;
    for(j=1; j<v.size(); j = j+2){
    cout << v[j] << " ";
    }
    cout << endl;
    }
return 0;
}

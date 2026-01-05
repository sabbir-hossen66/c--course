#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> a(3);
    for(int i=0;i<3;i++){
        cin >> a[i];
    }
    a.push_back(40);
    a.push_back(50);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    return 0;
    
}
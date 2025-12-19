#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int x;
    int y;
    cin >> x >> y;
   cout << min (x,y) <<endl;

   swap(x,y);
   cout<<x <<" " <<y;
    return 0;
}
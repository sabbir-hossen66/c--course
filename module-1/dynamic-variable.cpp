#include<bits/stdc++.h>
using namespace std;
int *p;
void fun(){
    int *x= new int; // dynamic memory allocation
    *x=10;
    p=x;
    cout << "fun " << *p << endl;
    return;
}
int main(){
    fun();
    // int *p=new int;
    // *p=35;
    cout << "main " << *p << endl;
    return 0;
}
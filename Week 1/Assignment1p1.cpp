#include<iostream>
using namespace std;

union Check{
    int x;
    char y;
};
int main(){
    Check c={'a'};
    cout<<c.x;
    return 0;
}
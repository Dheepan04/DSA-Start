#include <iostream>
using namespace std;

void display(int n){
    if(n>0)
    cout<<n<<endl;
    display(n-1);
}

int main(){
    //int n=10;
    display(10);
    return 0;
}
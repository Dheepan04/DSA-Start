#include<iostream>
using namespace std;
int pow(int m,int n){
    if(n==0){
        return 1;
    }
    else 
        return pow(m,n-1)*m;
    }
int main(){
    int m=2,n=3;
    cout<<"The value of "<<m<<" power "<<n<<" is :"<<pow(m,n);

    return 0;
}
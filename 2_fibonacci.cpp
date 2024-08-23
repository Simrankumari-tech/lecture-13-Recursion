#include<iostream>
using namespace std;
int fibo(int n){
    //base case
    if(n ==0 || n==1 ) return n;
    
    // recursive case
    // way-1 int chotiproblem1= fibo(n-1);
    // int chotiproblem2 = fibo(n-2);
    // int badiproblem= chotiproblem1 + chotiproblem2;
    // return badiproblem;
    return fibo(n-1) +fibo(n-2);  //way-2
}
int main(){
int n;
cin >> n;
cout << fibo(n) << endl;

    return 0;
}
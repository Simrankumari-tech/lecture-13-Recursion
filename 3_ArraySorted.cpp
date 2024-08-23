#include<iostream>
using namespace std;


// way-1
bool issorted1(int *a, int n){
    // base case
    if(n<= 1) return true;

    // recursive case
    if(a[0]<= a[1] and issorted1(a+1, n-1) == true) return true;
    return false;
}

// way-2
bool issorted2(int *a, int n){
    // base case
     if(n<= 1) return true;

    // recursive case
    if(a[n-1] >= a[n-2] and issorted2(a, n-1)) return true;
    return false; 
}

// way-3 with the help of iteration
bool issorted3(int *a, int n, int i){
    // base case
    if(i==n-1) return true;
    // recursive case
    if(a[i]<=a[i+1] and issorted3(a,n, i+1)) return true;
    return false;
}


int main(){
int a[] = {1,23,17,9};
int n= sizeof(a) / sizeof(int);
if(issorted3(a,n,0)){
    cout << "sorted\n";
}
else{
    cout << "not sorted\n" ;
}
    return 0;
}
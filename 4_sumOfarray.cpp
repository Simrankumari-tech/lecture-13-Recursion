#include<iostream>
using namespace std;
int arraysum(int *a, int n){
    // base case
    if(n== 0) return 0;
    // recursive case
    return a[0] + arraysum(a+1, n-1) ;

}
int main(){
int a[] = {1,23,17,9};
int n= sizeof(a) / sizeof(int);

cout << arraysum(a,n) << endl;

    return 0;
}
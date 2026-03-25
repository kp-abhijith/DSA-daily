#include<iostream>
using namespace std;
void print(int i,int n){
    if(i<=n){
    cout<<i<<endl;
}
print(i+1,n);
}
int main(){
    print(0,10);
return 0;
}
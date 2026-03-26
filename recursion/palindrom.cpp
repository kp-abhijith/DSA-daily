#include<iostream>
using namespace std;
bool    palin(int arr[],int n,int j){
    if(j<=n/2){
        return true ;
    }
    if(arr[j]!=arr[n-j-1]){
        return false;
    }
    palin(arr,n,j-1);

}
int main(){
    int arr[5]={1,1,2,1,1};
    int n=5;
    int j=4;

   if( palin(arr,n,j)){
    cout<<"its a palindrome ! ";
   }
   else{cout<<"its not  a palindrome ! ";}
   return 0;
}
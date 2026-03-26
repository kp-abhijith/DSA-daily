#include<iostream>
using namespace std;
void fn(int arr[],int i ,int j){
    if(i>=j){
        return;
    }
 swap(arr[i],arr[j]);
    fn(arr,i+1,j-1);

}
int main(){
    int arr[5]={1,2,3,4,5};
    int i=0;
    int j=4;
    fn(arr,i,j);
    for(int k=0;k<5;k++){
        cout<<arr[k]<<endl;

    }
     return 0;
}
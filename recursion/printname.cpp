#include<iostream>
using namespace std;
void display(int i){
    if(i>0){
    cout<<"APPU\n";
    
}
display(i-1);
    
}
int main(){
    display(3);
    return 0;
}
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int a[100];
int top=-1;
void push(int data){
    top++;
    a[top]=data;
}
void pop(){
    if(top==-1){
        cout<<"underflow"<<endl;
    }
    top--;
}
int  peak(){
    if(top==-1){
     cout<<"stack is empty";
    }
    return a[top];
}
bool isempty(){
    if(top==-1){
        return 1;
    }
    return 0;
}
int sizeofstack(){
    return top+1;
}
int main(){
    push(2);
    push(4);
    pop();
    push(7);
    cout<<isempty()<<endl;
    cout<<peak()<<endl;
    cout<<sizeofstack();
    return 0;
}
    

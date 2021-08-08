/*By Saksham Awasthi*/
// #include <bits/stdc++.h>
#include<iostream>
using namespace std;
       

#define n_size       100000
#define mod     1000000007
#define loop(i,a,b) for(int i=a;i<b+1;i++)


class Node{
         public:
         int data;
         Node* next;
         Node* previous;
         Node(int n)
         {
            data=n;
       }
};
class stack
{
    int *arr;
    int top;
  
public:
    stack()
    {
       arr = new int[n_size];
       top = -1;
    }

    void push(int x)
    {
        if(top==n_size-1)
        {
            cout<<"STACK_OVERFLOW"<<endl;
            return ;
        }

        top++;
        arr[top]=x;
    }
    void pop(){
        if(top==-1){
            cout<<"NO ELEMENTS_TO_POP"<<endl;
        }
        top--;
    }
    int Top(){
        if(top==-1) 
        {
        cout<<"NO_ElEMENT"<<endl;
        return -1;
        }
        return arr[top];
    }

    bool empty(){
        return top==-1;//// if this becomes true means the array is empty then this will throw true as the output
    }

};


int main(){
 
 stack st;
 st.push(1);
 st.push(2);
 st.push(3);
 st.push(4);
 st.push(5);
 st.push(6);


while(!st.empty()){
    cout<<st.Top()<<endl;
    st.pop();
}


 return 0;
}

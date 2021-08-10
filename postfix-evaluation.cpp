/*By Saksham Awasthi*/
#include <bits/stdc++.h>
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

int infix(string s){

    stack<int> st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            st.push(s[i]-'0');
        }
        else{
            int op1 = st.top();
            st.pop();
            int op2=st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
               st.push(op1+op2);
                break;
             case '-':
               st.push(op1-op2);
                break;
             case '/':
                 st.push(op1 / op2);
                 break;
             case '*':
                 st.push(op1 * op2);
                 break;

             default:
                 break;
            }
        }
    }
   int r=st.top();
   return r;
}


int main(){
 
 cout<<infix("46+2/5*7+");
return 0;
}

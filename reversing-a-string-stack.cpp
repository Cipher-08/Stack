/*By Saksham Awasthi*/
#include <bits/stdc++.h>
using namespace std;
       

#define n_size       100000
#define mod     1000000007
#define loop(i,a,b) for(int i=a;i<b;i++)


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

void reverseName(string n){
   stack<string>st;


   loop(i,0,n.length()){
    string word="";
    while(n[i]!=' '  &&  i<n.length()){
        word+=n[i];
        i++;
    }
    st.push(word);
   }

   while (!st.empty())
   {
       cout << st.top() << " ";
       st.pop();
   }
   cout << endl;
}

int main(){
string name="MY NAME IS SAKSHAM ";
reverseName(name);
 
return 0;
}

class Solution {
public:
    bool isValid(string s) {
      stack<char> st;
        if(s.length()==1||s.length()==0){
            return false;
        }
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='('){
            st.push(s[i]);
            }
            
            else if(s[i]=='{'){
            st.push(s[i]);
            }
            
            else if(s[i]=='[')
            {
            st.push(s[i]);  
            }
            
            
            else if(s[i]==')'&&!st.empty()){
                if(st.top()=='('){
                    count=0;
                } 
            
                else{
                    count=1;
                    break;
                }
                st.pop();
            }
             else if(s[i]=='}'&&!st.empty()){
                if(st.top()=='{'){
                    count=0;
                } 
                else{
                    count=1;
                    break;
                }
                st.pop();
            }
           else if(s[i]==']'&&!st.empty()){
                if(st.top()=='['){
                    count=0;
                } 
                else{
                    count=1;
                    break;
                }
                st.pop();
            }
            else{
                count=1;
              break;
            }
        }
        if(count==0 && st.empty())
            return true;
            
                else
                    return false;
                
              
    }
        
           
           
};

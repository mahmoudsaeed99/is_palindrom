#include <iostream>
#include <stack>
using namespace std;
bool is_palindrom(string s){
    stack<char>str;
    for(int i=0;i<s.size();i++){
        str.push(s[i]);
    }
    for(int i=0;i<s.size();i++){
        if(str.top()!=s[i]){
            return false;
        }
        str.pop();
    }
    return true;
}
int main()
{
    cout<<"get your string"<<endl;
    string x;
    cin>>x;
    cout<<is_palindrom(x)<<endl;

    return 0;
}

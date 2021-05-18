#include <iostream>
using namespace std;
// Reverse String
void revStr(string str)
{
    if(str.length()==0)
    {
        return;
    }
    string rest = str.substr(1);
    revStr(rest);
    cout<<str[0];
}
//
void replacePi(string s)
{
    if(s.length()==0)
    {
        return;
    }
    if(s[0]=='p' && s[1]=='i')//s[1] will be null in case of single char
    {
        cout<<"|3.14|";
        replacePi(s.substr(2));
    }
    else{
        cout<<s[0];
        replacePi(s.substr(1));
    }

}

int main() 
{
    //revStr("Hello");
    replacePi("pipipipxx");
    // string k ="hi";
    // cout<<k.length();
}  
#include<iostream>
#include<string>
using namespace std;
class String{
    string str1;
    public:
    String(string str)
    {
        str1=str;
    }
    friend string operator>(String str2, String str3);
};
string operator>(String str2, String str3){
    if (str2.str1>str3.str1)
    return "s1 smaller";
    else if(str2.str1<str3.str1)
    return "s2 smaller";
    else
    return "s1=s2";
}
int main()
{
    string a,b;
    cin>>a>>b;
    String s1(a);
    String s2(b);
    cout<<(s1>s2);
    return 0;
}
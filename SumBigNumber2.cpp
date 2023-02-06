#include <string>
#include <iostream>
 
using namespace std;
 
int stringToNum(char c)     
{
    return c - '0';
}
 
char numToString(int n)     
{
    return (char)(n + 48);
}
 
void doDai(string &a, string &b) 
{
    int l1 = a.length(), l2 = b.length();
    if (l1 >= l2)
    {
        b.insert(0, l1 - l2, '0');    
    }
    else
    {
        a.insert(0, l2 - l1, '0');    
    }
}
 
string sum(string a, string b)  
{
    string tong = " ";
    doDai(a, b);      
    int l = a.length();
     
    int temp = 0;
    for (int i = l - 1; i >= 0; i--)   
    {
        temp = stringToNum(a[i]) + stringToNum(b[i]) + temp;    
        tong.insert(0, 1, numToString(temp % 10));         
        temp = temp / 10;    
    }
    if (temp > 0)  
    {
        tong.insert(0, 1, numToString(temp));
    } 
    return tong;
}

 
int main(int argc, char **argv)
{
    string a, b, tong;
 
    cout<<"Nhap so: "<<endl;
    getline(cin, a);
    
    cout<<"Nhap so: "<<endl;
    getline(cin, b);
     
    tong = sum(a, b);
    cout<<"Tong cua 2 so: "<<tong;
     
     
    return 0; 
}

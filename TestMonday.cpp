#include<bits/stdc++.h>
#include <string>
#include <iostream>
using namespace std;
 

class MyBigNumber {
	public:
		string num(string str1, string str2) {
		    
		    if (str1.length() > str2.length()) {
		    	swap(str1, str2);
		    	}
		
		    string finalResult = "";
		 
		    int n1 = str1.length(), n2 = str2.length(), len = n2 - n1, temp = 0;
		 
		 
		    for (int i = n1 - 1; i >= 0; i--)
		    {
		        int sum = ((str1[i] - '0') + (str2[i + len] - '0') + temp);
		        str.push_back(sum % 10 + '0');
		        temp = sum / 10;
		    }
		 
		    for (int i = n2 - n1 - 1; i >= 0; i--)
		    {
		        int sum = ((str2[i] - '0') + temp);
		        str.push_back(sum % 10 + '0');
		        temp = sum / 10;
		    }
		 
		    if (temp) {
		    	str.push_back(temp + '0');
			}
		 
		    reverse(finalResult.begin(), finalResult.end());
		 
		    return finalResult;
		}
};



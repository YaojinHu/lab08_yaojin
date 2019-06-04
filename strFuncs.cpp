#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include "strFuncs.h"
using namespace std;


/* Precondition: Two valid strings s1 and s2, each containing a mix of alphabets, spaces and punctuations
 * Post condition: Return true if one string is an anagram of the other string. White spaces, punctuations and
 * the case for the letters (upper or lower) should not
 * affect your result. 
 */
bool isAnagram(string s1, string s2){
  string a="";
  string b="";


for(int i=0; i<s1.length();i++){
    if(isalpha(s1[i]))
    a+=tolower(s1[i]);
}
for(int i=0; i<s2.length();i++){
    if(isalpha(s2[i]))
    b+=tolower(s2[i]);
}

if(a==b)
return true;

if(a.length()!=b.length())
return false;

for(int k=0; k<a.length(); k++){
  if(a[k]!=b[k])
  return false;
}

return true;
}

/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You should provide a recursive solution*/
bool isPalindrome(const string s1){

for(int i=0; i<s1.length();i++){
    if(isalpha(s1[i]))
    s1+=tolower(s1[i]);
}



int i=0;
int j=s1.length()-1;

while(i<j){
tolower(s1[i]);
tolower(s1[j]);

if(s1[i]!=s1[j])
{
  return false;
}

i++;
j--;
}
 return true;
}



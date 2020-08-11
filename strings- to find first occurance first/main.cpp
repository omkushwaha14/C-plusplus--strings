#include <iostream>
using namespace std;

int anagram(const char a[]){
   int first[26]={0};
   int c=0;
   while(a[c] !='\0'){
       first[a[c]-'a']++;
       c++;
   }

   for(c=0;c<26;c++){
       if(first[a[c]-'a']>1){
           cout<<a[c];
           break;
       }
       else if(first[a[c]-'a']!=1){
           cout<<"not found";
       }
   }
}


int main()
{
char a[100];
cin>>a;
anagram(a);

}
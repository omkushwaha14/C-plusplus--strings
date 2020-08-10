#include <iostream>
using namespace std;

int anagram(  char a[], char b[]){
   int first[26]={0},second[26]={0};
   int c=0;
   while(a[c] !='\0'){
       first[a[c]-'a']++;
       c++;

   }

c=0;
    while(b[c] !='\0'){
        second[b[c]-'a']++;
        c++;

    }

    for( c=0;c<26;c++) {
        if (first[c] != second[c])
            return 0;
    }


    return 1;

}


int main()
{
char a[100];
char b[100];
cin>>a;
cin>>b;

int n=anagram(a,b);

 if(n==1){
     cout<<"is anagram";

 }
 else{
     cout<<"not anagram";
 }




}
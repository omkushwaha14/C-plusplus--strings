#include <iostream>
using namespace std;

int anagram(  char a[], char b){

    int c=0;
    while(a[c] !='\0'){
    if(b==a[c]){
        return 0;

    }
    c++;
    }

return 1;

}


int main()
{
    char a[100];
    char b;
    cin>>a;
    cin>>b;

  int n=anagram(a,b);
  if(n==0){
      cout<<"found";

  }else{
      cout<<"not found";
  }





}
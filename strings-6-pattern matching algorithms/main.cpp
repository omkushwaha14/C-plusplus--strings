#include <iostream>
using namespace std;

int rotation(string s1,string s2){

    if(s1.find(s2)!=string::npos){
        return 1;
    }else{
        return 2;
    }

}

int main() {

string s1;
string s2;

getline(cin,s1);
getline(cin,s2);
int n=rotation(s1,s2);

  if(n==1){
        cout<<"patter found";
    }
    if(n==2){
        cout<<"not found";
    }

}

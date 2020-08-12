#include <iostream>
using namespace std;

int rotation(string s1,string s2){

    if(s1.length()!=s2.length()){
        return 0;
    }
    string s3=s1+s1;
    if(s3.find(s2)!=string::npos){
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
if(n==0){
    cout<<"size error";
}
  if(n==1){
        cout<<"are rotation of each other";
    }
    if(n==2){
        cout<<"are not rotation";
    }

}

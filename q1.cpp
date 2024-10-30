#include <iostream>
using namespace std;
int main() {
    char ch;

   cout<<"Enter the character:";
   cin>>ch;
   
   if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
   	cout<<ch<<"ia an alphabet"<<endl;
   }else{
   	cout<<ch<<"not an alphabet"<<endl;
   }
    
    return 0;
}


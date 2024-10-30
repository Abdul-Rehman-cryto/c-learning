#include <iostream>
using namespace std;
int main(){
	char ch;
	cout<<"Enter a character:";
	cin>>ch;
	switch(ch){
		case 'a':
		cout<<ch<<" is an vowel";
		break;
		case 'e':
		cout<<ch<<" is an vowel";
		break;
		case 'i':
		cout<<ch<<" is an vowel";
		break;
		case 'o':
		cout<<ch<<" is an vowel";
		break;
		case 'u':
		cout<<ch<<" is an vowel";
		break;
		default:
		cout<<ch<<" is a constant";
	}
	return 0;
}

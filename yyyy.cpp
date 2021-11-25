#include <iostream>
using namespace std;

//deklarasi 
bool valid_triangle(int a,int b,int c){
	if( a+b>c || a+c>b || b+c>a)
	return true;
	else
	return false;
}

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(valid_triangle( a, b, c))
	{
	cout<<"false"<<endl;
	}else{
	cout<<"true";
	}
	
 return 0;

}


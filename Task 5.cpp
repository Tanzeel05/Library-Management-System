#include<iostream>
using namespace std;
	string title[5]={"Matilda","Harry Potter","Influential Persons","Business","Promised Land"};
	string author[5]={"Tanzeel","Saaim","Hamza","Huzaifa","Taha"};
	bool bookstatus[5]={0,0,0,0,0};
	int i=0;
	
	void Display(){
		int a;
		for(i=0;i<5;i++){
			cout<<i+1<<" "<<title[i]<<endl;
		}
	}
	void search(){
		int a;
		cout<<"Enter Number of Book you want to search: "<<endl;
		cin>>a;
		for(i=0;i<5;i++){
			if(i==a-1){
				cout<<"Book Found..."<<endl;
				cout<<"Title: "<<title[i]<<endl;
				cout<<"Author: "<<author[i]<<endl;
				break;
			}
			else{
				cout<<"Book Not Found!"<<endl;
			}
		}
	}
	void checkout(){
		int a;
		cout<<"Enter Number of book you want: "<<endl;
		cin>>a;
		for(i=0;i<5;i++){
			if(i==a-1){
				cout<<"Book Alloted..."<<endl;
				bookstatus[i]=1;
				break;
			}
			else{
				cout<<"Invalid Number..."<<endl;
			}
		}
	}
	void returnbook(){
		int a;
			cout<<"Enter Number of book you want to return: "<<endl;
		cin>>a;
		for(i=0;i<5;i++){
			if(i==a-1){
				cout<<"Book Returned..."<<endl;
				bookstatus[i]=0;
				break;
			}
			else{
				cout<<"Invalid Number..."<<endl;
			}
		}
	} 
	void fine(){
		int a;
		cout<<"How much late are you returning the book? "<<endl;
		cin>>a;
		if(a>0){
		
		int fine=a*100;
		cout<<"Fine: "<<fine<<endl;
	}
	else{
		cout<<"you are not fined..."<<endl;
	}
	}
	

int main(){

	Display();
	search();
	checkout();
	returnbook();
	fine();
	return 0;
}

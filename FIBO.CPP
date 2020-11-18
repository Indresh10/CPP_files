#include<iostream.h>
#include<conio.h>

void main(){
  clrscr();
  int fno=0,sno=1,tno=0;
  int sr,er;
  cout<<"Enter first no:";
  cin>>sr;
  cout<<"Enter last no:";
  cin>>er;
  cout<<"Fibo Series"<<endl;
  while (tno<=er){
  	fno=sno;
  	sno=tno;
  	if(tno>=sr){
  	  cout<<tno<<" ";
  	}
  	tno=fno+sno;
  }
  getch();
}
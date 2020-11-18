#include<iostream.h>
#include<conio.h>

void main(){
  clrscr();
  for(int i=0;i<=4;i++){
    for(int j=0;j<=4;j++){
      if (i==0||j==2){
	cout<<"I";
      }
      else{
	cout<<" ";
      }
    }
    cout<<endl;
  }
  getch();
}
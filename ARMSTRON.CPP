#include<iostream.h>
#include<conio.h>

  int Armstrong(int no){
    int ld,sum,x;
    x = no;
    sum = 0;
    while (no > 0){
    ld = no % 10;
    sum += (ld*ld*ld);
    no /= 10;
    }
    if (sum == x){
      return 1;
      }
    else {
      return 0;
      }
  }

void main(){
  clrscr();
  int x;
  cout<<"Enter last no:";
  cin>>x;
  cout<<"Armstrong Series:"<<endl;
  for(int i=1;i<=x;i++){
    if (Armstrong(i) == 1){
      cout<<i<<" ";
    }
  }
  getch();
}
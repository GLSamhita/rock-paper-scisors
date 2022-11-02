//#include<iostream.h>
//#include<conio.h>
//#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{//main
  //clrscr();
  randomize();
  int c,p,ctc=0,ctp=0,cha;
  cout<<"    ** ROCK PAPER SCISSORS **";
  cout<<"\n  !! you vs.the comp !!";
  cout<<"\n\nenter the no. of games";
  cin>>cha;
  cout<<"\n\n0-rock 1-paper 2-scissors";
  for(int q=1;q<=cha;q++)
  {//for
    c=8;ctc=0;ctp=0;
    cout<<"\nenter choice\n";
    cin>>p;
    c=random(3);
    switch(c)
    {//switch
      case 0://comp rock
        switch(p)
        {
        case 0:
          cout<<"\nyou-rock score:"<<ctp<<"\ncomp-rock score:"<<ctc;
          cout<<"\ndraw";
          break;
        case 1:
          ctp++;
          cout<<"\nyou-paper score:"<<ctp<<"\ncomp-rock score:"<<ctc;
          cout<<"\nyou win";
          break;
        case 2:
          ctc++;
          cout<<"\nyou-scissors score:"<<ctp<<"\ncomp-rock score:"<<ctc;
          cout<<"\ncomp wins";
          break;
        }
break;
case 1://comp paper
switch(p)
{
case 0:
ctc++;
cout<<"\nyou-rock score:"<<ctp<<"\ncomp-paper score:"<<ctc;
cout<<"\ncomp wins";
break;
case 1:
cout<<"\nyou-paper score:"<<ctp<<"\ncomp-paper score:"<<ctc;
cout<<"\ndraw";
break;
case 2:
ctp++;
cout<<"\nyou-scissors score:"<<ctp<<"\ncomp-paper score:"<<ctc;
cout<<"\nyou win";
break;
}
break;
case 2://comp scissors
switch(p)
{
case 0:
ctp++;
cout<<"\nyou-rock score:"<<ctp<<"\ncomp-scissors score:"<<ctc;
cout<<"\nyou win";
break;
case 1:
ctc++;
cout<<"\nyou-paper score:"<<ctp<<"\ncomp-scissors score:"<<ctc;
cout<<"\ncomp wins";
break;
case 2:
cout<<"\nyou-scissors score:"<<ctp<<"\ncomp-scissors score:"<<ctc;
cout<<"\ndraw";
break;
}
break;
}}
//getch();

return 0;
}

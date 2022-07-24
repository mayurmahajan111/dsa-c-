


CODE:
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{

//this while condition will always be true if exit( is not put.)
while(1)
{
  cout<<"HOW YOU DOIN????"<<endl;

  int num=1;
  switch(num)
  {
    case 1: cout<<"I'M FINE"<<endl;
    break;
  }
  exit(0);
}

}

ANSWER: BY PUTTING EXIT(0) , WE CAN EXIT OUT OF INFINITE LOOP.

2) WHY WE CAN'T USE CONTINUE STATEMENT IN CASE OF SWITCH CASE?

ANS: CONTINUE CAN'T BE USED IN CASE OF SWITCH CASE BECAUSE AS THE CASE CONSTANT MATCHES WITH THE USERS INPUT THE FLOW WILL COME DOWN AND TRY TO EXECUTE BUT BECAUSE OF CONTINUE IT WILL SKIP THAT PART AND ITERATION WILL GO ON AND ON. THAT'S WHY WE USE BREAK , TO STOP  AT THE POINT ONCE WE EXUCUTE OUR PART.

3)
CODE:

#include <iostream>
using namespace std;

int main()
{
  int amount;
  cout<<"Enter the amount"<<endl;
  cin>>amount;
  int Rs100 , Rs50 , Rs20 , Rs1;

  switch(1)
  {
      case 1: Rs100=amount/100;
              amount=amount%100;
              cout<<"No of 100 Rupee notes required are="<<Rs100<<endl;
              
         
      case 2: Rs50=amount/50;
              amount=amount%50;
              cout<<"No of 50 Rupee notes required are="<<Rs50<<endl;
              

      case 3: Rs20=amount/20;
              amount=amount%20;
              cout<<"No of 20 Rupee notes required are="<<Rs20<<endl;
               

      case 4: Rs1=amount/1;
              amount=amount%1;
              cout<<"No of 1 Rupee notes required are="<<Rs1<<endl; 
                  
           }
}

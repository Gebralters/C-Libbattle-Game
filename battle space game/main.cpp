#include "libbattle.h"

using namespace std;
using namespace Battlespace;
int main()
{


         //random number seeding
    srand(time(0));
    //range

    //variable daclaration
    int lower=0;
    int upper =1;

    int arrayrand[randnumbers];
     int positionnum=genrandom(0,19);
     int arraynum[randnumbers];
     fillarray(arrayrand);



  //fill arraynum with values in arrayrand
    arraynumber(arraynum,arrayrand);

    //do while condition
    bool blncontinue =true;

    //option variable declaration
    char chinput;


    do
    {

         system("cls");

    //changing the numbers according to the position of pointer
      transfer(arraynum,positionnum);

    //positioning pointer
      position(positionnum);

    //spacing
     space();

     //prompt user to enter input to move pointer
     cout<<"<<L:  left"<<"   "<<">>R: Right"<<endl;
     space();
     //prompt user to enter c to quit the game
     cout<<"C: Quit game"<<endl;

     //getting the option from user
     cin>>chinput;

     //switch cases

     switch(chinput)
     {
         //option l to move to the left
     case 'l':
     case 'L':
         {
           if(positionnum>0)
           {
              positionnum--;
           }
           else
            positionnum;
         }
         break;
         //option r to move to the right
     case 'r':
     case 'R':
         {
             if( positionnum<19)
             {
                positionnum++ ;
             }
             else
                positionnum;


         }
         break;

         //option c to quit the game
     case 'c':
     case 'C':
         {
            blncontinue=false;
         }
         break;
     default:
        {
            cout<<"Please try again"<<endl;
            pause();

        }


     }

    //message for winning the game
    evaluation(arraynum);


    //do while loop condition
    }while(blncontinue);


}

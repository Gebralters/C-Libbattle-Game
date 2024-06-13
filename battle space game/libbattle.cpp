#include "libbattle.h"

using namespace std;
namespace Battlespace
{
    void pause()
    {
        cin.ignore(100,'\n');
        cin.get();
    }
     void space()
     {
         cout<<endl;
     }
    int genrandom(int lower,int higher)
    {
        int random;
        int range=higher-lower+1;
        random= (rand()%range)+lower;
        return random;


    }

   void position(int posnum)
   {
    char arrchar[20];

    for (int i=0 ;i<20;i++)
    {
        arrchar[i]=' ';
    }

    arrchar[posnum]='^';
     for (int i=0 ;i<20;i++)
    {
        cout<<arrchar[i]<<" ";
    }
    cout<<endl;
   }
   void arraynumber(int arraynum[],int arrayrand[])
   {

        for(int i=0;i<20;i++)
     {
         arraynum[i]=arrayrand[i];
     }
   }

   void fillarray(int arrayrand[])
   {
       for(int i=0;i<20;i++)
       {
          arrayrand[i]=genrandom(0,1) ;
       }

   }
   void transfer(int arraynum[],int positionnum)
   {

        for(int i=0;i<20;i++)
       {
           if(positionnum==i)
           {
               if(arraynum[i]==1)
               {
                   arraynum[i]=0;

               }
               else

                   arraynum[i]=1;


           }

       }


        for(int i=0;i<20;i++)
           {
               cout<<arraynum[i]<<" ";
           }
           cout<<endl;
   }

   void evaluation(int arraynum[])
   {
       int sum=0;
       for(int i=0;i<20;i++)
       {
          sum=sum+arraynum[i];
       }
       if(sum==20)
       {
           cout << "Congratulations you have won the game"<<endl;
           pause();
           return;
       }
       if(sum==0)
       {
           cout << "Congratulations you have won the game"<<endl;
           pause();
           return;
       }



   }




}

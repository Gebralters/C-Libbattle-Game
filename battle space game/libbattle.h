#ifndef LIBBATTLE_H_INCLUDED
#define LIBBATTLE_H_INCLUDED


//libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;
namespace Battlespace
{

    const int randnumbers=20;

    void pause();
    int genrandom(int lower,int higher);
         void transfer(int arranum[],int positionnum);
     void fillarray(int arrayrand[]);
    void movepointer();
     void   position(int posnum);
     void space();
     void arraynumber(int arraynum[],int arrayrand[]);
     void displayarr(int arrayrand[]);
     void evaluation(int arraynum[]);


}


#endif // LIBBATTLE_H_INCLUDED

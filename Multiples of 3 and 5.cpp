/*Multiples of 3 and 5
Problem 1
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.*/
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i=1;
    int sum=0;
    
    while(i<1000)
    {
        if(i%3==0)
        {
            sum= sum+i;
        }
        if(i%5==0 && i%3!=0)
        {
            sum= sum+i; 
        }
        i++;
     }
     cout << "The sum of all multiples of 3 or 5 below 1000 is "<< sum << endl;
     system("PAUSE");
     return EXIT_SUCCESS;
}

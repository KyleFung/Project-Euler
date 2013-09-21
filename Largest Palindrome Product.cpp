/* Largest palindrome product
Problem 4
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers. */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a=1;
    int b=0;
    int c=0;
    int m=0;
    int n=10000;
    int pallylist[n];
    bool halt=true;
        while(halt)
        {
            int z=a*10001;
            int y=b*1010;
            int x=c*100;
            pallylist[m]= z+y+x;            
            c++;
            if(c>9)
            {
               c=0;
               b++;
            } 
            if(b>9)
            {
               b=0;
               a++;
            } 
            if(a>9)
            {
               halt= false;
            }
            m++;
        }
        
        halt=true;
        a=1;
        b=0;
        c=0;
        
        while(halt)
        {
            int z=a*100001;
            int y=b*10010;
            int x=c*1100;
            pallylist[m]= z+y+x;
            c++;
            if(c>9)
            {
               c=0;
               b++;
            } 
            if(b>9)
            {
               b=0;
               a++;
            } 
            if(a>9)
            {
               halt= false;
            }
            if(pallylist[m]>996699)
            {
               halt=false;
            }
            m++;
        }
        bool stop=true;
        int factor=999;
        
        
        while (stop)
        {
            int test= pallylist[m]%factor;
            double cotest= pallylist[m]/factor;
            if (test==0 && cotest >100 && cotest <999)
            {
                stop=false;
                cout << "The largest palindrome which is a product of 2 three digit numbers is: " << pallylist[m] << endl;
            }
            
        
            if (test!=0 || cotest <100 || cotest > 999)
            {
                factor--;
            }
            
            if (factor <99)
            {
                factor = 999;
                m--;
            }
        }
        
        int cotest= pallylist[m]/factor;
        
        cout << "Its factors are " << factor << " and " << cotest << endl << endl;
        
    system("PAUSE");
    return EXIT_SUCCESS;
}

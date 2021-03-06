/*Even Fibonacci numbers
Problem 2
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i=1;
    int j=2;
    int k=0;
    int count=2;
    
    while (j <= 4000000)
    {
          k=i+j;
          i=j;
          j=k;
          count++;
    }
    
    int series[count];
    series[1]=1;
    series[2]=2;
    int m=3;
    
    while(m<=count)
    {
          series [m] = series[m-2] + series[m-1];
          m++;
    }
    
    int n=1;
    
    while (n <= count)
    {
          int test= series[n]%2;
          if (test!=0)
          {
                series[n]=0;
          
          }
          n++;
    }
    
    int z=1;
    int sum=0;
    
    while (z <= count)
    {
          sum=sum+ series[z];
          z++;
    }   
    
    
    
    cout << "The sum of all even Fibonacci numbers under 4 million is " <<sum << endl;     
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

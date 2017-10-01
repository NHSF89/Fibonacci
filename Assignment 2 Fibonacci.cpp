
#include <iostream>
using namespace std;

int main()
{   
     int totalCount = 0;
     int fibValue;
     int i = 1;
     int j = 2;
     int k = 0;
     
     cout << "Please enter a max value for the fibonacci sequence: ";
     cin >> fibValue;
     
     while (j <= fibValue)
     {
           k = i+j;
           if (j % 2 ==0)
              totalCount += j;
           i = j;
           j = k;
     }
     
     cout << endl << "The sum of all even numbers within the fibonnaci sequence";
     cout << endl << " is " << totalCount << "." << endl;
     
     system("pause");
     
    return 0;
}

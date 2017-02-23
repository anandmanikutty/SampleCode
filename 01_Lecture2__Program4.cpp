#include <iostream>
using namespace std;

int main()
{
   
   // simple "interactive program" -- final version
   
   int seconds, minutes;
   
   cout << "What is the time taken (in minutes)?:" << endl;
   cin >> minutes;
   
   seconds = minutes * 60;
     
   cout << "Time taken is : " << seconds << " seconds." << endl;
   
   return 0;
}

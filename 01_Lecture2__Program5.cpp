#include <iostream>
using namespace std;

int main()
{
   
   // INTERACTIVE PROGRAM STRUCTURE -- pre-final version
   
   // 1. Declare all variables
   // 2. Ask for data.
   // 3. Take in the data ("cin").
   // 4. Do the calculations.
   // 5. Put out the data ("cout").
   
   // STEP 1
   int seconds, minutes;
   
   // STEP 2
   cout << "What is the time taken (in minutes)?:" << endl;
   
   
   cin >> minutes;
   
   seconds = minutes * 60;
   
   return 0;
}

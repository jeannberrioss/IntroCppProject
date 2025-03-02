#include <iostream>
#include <iomanip>
#include <cmath>
#include <sstream>
using namespace std;

int RandomCalculation() {
   int ox, oy, oz;
   string input;
   bool validInput = false;

   cout << "|| This is the #1 func() called from outside main ||" << endl;
   cout << "\n";

   while (!validInput) {
       cout << "Random calculation..What are your 3 numbers = ";
       getline(cin, input);
       stringstream ss(input);
       int count = 0;
       if (ss >> ox >> oy >> oz) {
           count++;
           string extra;
           if (!(ss >> extra)) {
               validInput = true;
           }
       }
       if (!validInput) {
           cout << "Invalid input. Please enter exactly 3 numbers." << endl;
       }
   }
   cout << "\n";

   return ox * oy * oz;
}

void _helloBro() {
   cout << "|| This is the #2 func() called from outside main ||" << endl;
   cout << "\n";
   cout << "Jean! pick 4 numbers below .. " << endl;
   cout << "\n";
}

int main() {
   /* Generic Variable Declarations */
   int num1, num2, num3, num4, multi, avg;
   double multiFloat, avgFloat;
   int n1, n2, n3; // utilized for RandomCalculation function outside of MAIN();
   int kjPOW = 2;
   int *ptrpow = &kjPOW;

   cout << "\n";

   int result = RandomCalculation();
   cout << "The result of the random calculation is " << result << endl;
   cout << "\n";

   _helloBro();

   cout << "These are your first numbers: ";
   cin >> num1 >> num2 >> num3 >> num4;

   cout << "\n";

   // Product of Integers
   multi = num1 * num2 * num3 * num4;
   // Average of Integers
   avg = (num1 + num2 + num3 + num4) / 4;

   // output of product and avg functions
   cout << "These are your multiples: " << multi << endl;
   cout << "These is your average: " << avg << endl;

   // Product of Integers w/ Double
   multiFloat = num1 * num2 * num3 * num4;
   // Average of Integers w/ Double
   avgFloat = (num1 + num2 + num3 + num4) / 4;

   // output of product and avg functions
   cout << fixed << setprecision(1);
   cout << "These are your multiples: " << multiFloat << endl;
   cout << "These is your average: " << avgFloat << endl;

   cout << fixed << setprecision(1) << endl;
   cout << "Here is pow function to the power of 3 = " << pow(kjPOW, 3) << endl;
   cout << "Here is pow function to the power of 3 using ptr var = " << pow(*ptrpow, 3) << endl;

   cout << "This is the direct address of kjPOW: " << &kjPOW << endl;
   cout << "This is the pointer address of kjPOW: " << ptrpow << endl;
   cout << "This is the address of the pointer var itself: " << &ptrpow << endl;
   cout << "This is the value held within the pointer variable: " << *ptrpow << endl;
   cout << "\n";

   cout << "This is my name in C++" << endl;
   cout << "\n";

   return 0;
}
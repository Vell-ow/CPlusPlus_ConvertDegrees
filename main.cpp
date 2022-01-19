// Programmer:    Andrew Coviello
// Module 10
// Project 2
// Problem Statement: Ask the user to enter a number and a character 
// representing either Fahrenheit or Celsius, then convert using a 
// mathematical formula and print the result.
// 1. Print an initial welcoming message to the screen
// 2. Prompt the user for an integer, representing degrees of some
// temperature, and a character that represents the format
// 3. Use the conversion char to determine which formula to use
// 4. Print the conversion to the screen

#include <iostream>
using namespace std;

void convert(double degrees, char type);

int main() {  
  // Print a message to the screen    
  cout << "Hello!" << endl;    
  cout << "I can convert temperatures for you" << endl;
  // Variables are declared dynamically no need to pre-define
  cout << "Enter a temperature in degrees:" << endl;
  int degrees;
  cin >> degrees;
  cout << "Is this in degrees Fahrenheit or degrees Celsius? Type 'F' for Fahrenheit, and 'C' for Celsius: " << endl;
  char type;
  cin >> type;
  convert(degrees, type);
  // why is it falling through?
}
  void convert(double degrees, char type)
  {
    // Here is the processing that is needed
    double celsiusPartOne = degrees - 32;
    double celsiusPartTwo = celsiusPartOne * 5;
    double celsiusPartThree = celsiusPartTwo / 9;  
    double degreesFahrenheit = ((9 / 5) * degrees)  + 32;
    
    if(type == 'F' || type == 'f')
    {
      // Output the results    
      cout << degrees << " degrees Fahrenheit = " << celsiusPartThree << " degrees Celsius" << endl;    
    }
    else if(type == 'C' || type == 'c')
    {
      // Output the results
      cout << degrees << " degrees Celsius = " << celsiusPartThree << " degrees Fahrenheit" << endl;        
    }
    else
    {
      cout << "Bogos Binted" << endl;
      exit(0);
    }
  }

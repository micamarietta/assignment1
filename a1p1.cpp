#include <iostream>
using namespace std;

int main(){
  float breakfastCerealOunces = 0.0;
  float breakfastCerealTons = 0.0;
  float numBoxes = 0.0;

  cout << "Enter the weight of a breakfast cereal in ounces." << endl;

  //get user input of a cereal in ounces
  cin >> breakfastCerealOunces;

  //calculate and print weight of the cereal in metric tons
  breakfastCerealTons = breakfastCerealOunces / 35273.92;
  cout << "The weight of the cereal in metric tons is " << breakfastCerealTons << " tons." << endl;

  //calculate number of boxes to yield one metric ton of cereal
  numBoxes = 35273.92 / breakfastCerealOunces;
  cout << "It would take " << numBoxes << " to yield one metric ton of cereal." << endl;

  return 0;
}

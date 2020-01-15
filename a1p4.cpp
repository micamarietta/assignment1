#include <iostream>
using namespace std;

int main(){
  float itemCost;
  float numYears;
  float inflationRate;
  float endCost;

  //gather values from user
  cout << "What is the cost of the item?" << endl;
  cin >> itemCost;

  cout << "How many years until the item is purchased?" << endl;
  cin >> numYears;

  cout << "What is the inflation rate? (Type as a percentage)" << endl;
  cin >> inflationRate;

  //convert inflationRate to a fraction
  inflationRate = inflationRate / 100;

  //calculate endCost based on inflation over a certain period
  for(int i = 0; i < numYears; i++){
    //for the first iteration, calculate simple interest
    if (i == 0){
      endCost = itemCost + (itemCost * inflationRate);
    }
    else {
      endCost = endCost + (endCost * inflationRate);
    }
  }

  //print out final cost
  cout << "The ending cost of the items is $" << endCost << endl;
  return 0;
}

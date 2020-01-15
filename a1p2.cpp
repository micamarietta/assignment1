#include <iostream>
using namespace std;

int main(){
  int numPeople;
  int maxCapacity;

  //take in number of people and room capacity from the user
  cout << "How many people will there be?" << endl;

  cin >> numPeople;

  cout << "What is the max room capacity?" << endl;

  cin >> maxCapacity;

  if(numPeople > maxCapacity){
    cout << "The meeting cannot be held due to fire regulations." << endl;
    cout << numPeople - maxCapacity << " people must be excluded in order to meet fire regulations." << endl;
  }
  else{
    cout << "The meeting can be held." << endl;
  }

  return 0;
}

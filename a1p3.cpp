#include <iostream>
using namespace std;

int main(){
  float payPerHour = 16.0;
  float hoursWorked = 0.0;
  float grossPay;
  float socialSecurityWithheld;
  float federalIncomeWithheld;
  float stateIncomeTaxWithheld;
  float medicalInsuranceWithheld = 10;
  float netPay;

  //get hoursWorked from the user
  cout << "How many hours did the employee work?" << endl;

  cin >> hoursWorked;

  //calculate and print grossPay
  grossPay = payPerHour * hoursWorked;
  cout << "The employee's gross pay is $" << grossPay << "." << endl;

  //calculate the amounts withheld from the  employee's paycheck and print the values
  socialSecurityWithheld = grossPay * 0.06;
  cout << "$" << socialSecurityWithheld << " is withheld for Social Security tax." << endl;

  federalIncomeWithheld = grossPay * 0.14;
  cout << "$" << federalIncomeWithheld << " is withheld for federal income tax." << endl;

  stateIncomeTaxWithheld = grossPay * 0.05;
  cout << "$" << stateIncomeTaxWithheld << " is withheld for state income tax." << endl;

  cout << "$" << medicalInsuranceWithheld << " is withheld for medical indsurance." << endl;

  //calculate netPay and print it out to the user
  netPay = grossPay - socialSecurityWithheld - federalIncomeWithheld - stateIncomeTaxWithheld - medicalInsuranceWithheld;
  cout << "The employee's net take-home pay is $" << netPay << "." << endl;

  return 0;
}

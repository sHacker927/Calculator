#include <iostream>
#include <string>
using namespace std;

int main(){
  string entry;
  cout << "\nadd,subtract,multiply,divide: ";
  cin >> entry;
  cout << "\nYou chose " << entry;

  if (entry != "add" && entry != "subtract" && entry != "multiply" && entry != "divide"){
    cout << "\n\nWait what? \"" << entry << "\" aint a choice.\n\n";
  }

  if (entry == "add"){
    double add1;
    cout << "\n\nFirst number: ";
    cin >> add1;
    double add2;
    cout << "\n\nSecond number: ";
    cin >> add2;
    cout <<"\n"<< add1 << " plus " << add2 << " equals " << add1 + add2 << "\n\n";
  }

  if (entry == "subtract"){
    double add1;
    cout << "\n\nFirst number: ";
    cin >> add1;
    double add2;
    cout << "\n\nSecond number: ";
    cin >> add2;
    cout <<"\n"<< add1 << " minus " << add2 << " equals " << add1 - add2 << "\n\n";
  }

  if (entry == "multiply"){
    double add1;
    cout << "\n\nFirst number: ";
    cin >> add1;
    double add2;
    cout << "\n\nSecond number: ";
    cin >> add2;
    cout <<"\n"<< add1 << " multipled by " << add2 << " equals " << add1 * add2 << "\n\n";
  }

  if (entry == "divide"){
    double add1;
    cout << "\n\nFirst number: ";
    cin >> add1;
    double add2;
    cout << "\n\nSecond number: ";
    cin >> add2;
    cout <<"\n"<< add1 << " divided by " << add2 << " equals " << add1 / add2 << "\n\n";
  }
}

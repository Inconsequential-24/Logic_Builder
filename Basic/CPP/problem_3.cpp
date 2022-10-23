#include <iostream>
using namespace std;

int main() {
  double num1, num2, product;
  cout << "Enter the First Number:"<<endl; 
  cin>> num1; //Takes First number from the user
  cout<<"Enter the Second Number:"<<endl;
  cin>> num2; //Takes Second Number From the User

  // stores two floating point numbers in num1 and num2 respectively
  //cin >> num1 >> num2;
 
  // performs multiplication and stores the result in product variable
  product = num1 * num2;  

  cout << "The Product of Both the Numbers: " << product<< endl;    
  cout<<"Thank You!";
    
  return 0;
}

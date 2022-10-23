// C++ Program to Calculate Area of Square

#include <iostream>
using namespace std;

int main(){
    int side, area;
    
    // Asking for input
    cout << "Enter the side of square: "<< endl;
    cin >> side;
    
    // Calculating area
    area = side * side;
    
    // Displaying output
    cout << "Area of the Square with Side Length " << side << " is: " << area<< endl;
    return 0;
}

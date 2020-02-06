/*

  display input for "radius of the cylibder"

**learn how to spell cylinder correctly**

  display input for "height of the cylinder"

  use two floating inputs to calculate volume

  display the results of the "volume of the cylinder"

  */

#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::setw;

int main()

{
    const float pi = 3.14;

    double  CylinderRadius,
            CylinderHeight,
            CylinderVolume;

    cout << "Enter the radius of the cylinder: ";
    cin >> CylinderRadius;
    cout << "\nEnter the height of the cylinder: ";
    cin >> CylinderHeight;

    CylinderVolume = (CylinderRadius * CylinderRadius) * pi * CylinderHeight;
    
    cout << "\nThe volume of your Cylinder is: ";
    cout << CylinderVolume << endl;

    return 0;

}
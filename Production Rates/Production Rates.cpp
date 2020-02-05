// Fixed, compiled, built and executed the file called PE 5_1.cpp

/* ************************************** *
 *            File: PE 5_1.cpp            *
 *      Have fun with these errors!       *
 * ************************************** */


#include <iostream>

using std::cout;
using std::endl;
using std::cin;

const float ProductionRate = 100.00F;
const float PreProductionRate = 60.00F;
const float ProducersRate = 40.00F;

float ProductionHours = 1.500F;
float PreProductionHours = 2.00F;
float ProducersHours = 3.00F;

int main()
{

    double  ProductionHours,
        PreProductionHours,
        ProducersHours,
        ProductionCost,
        PreProductionCost,
        ProducersCost,
        TotalCost;

    cout << "Enter Production Hours: ";
    cin >> ProductionHours;
    cout << "\n Enter Pre-Production Hours: ";
    cin >> PreProductionHours;
    cout << "\n Enter Producers Hours: ";
    cin >> ProducersHours;

    ProductionCost = ProductionHours * ProductionRate;

    PreProductionCost = PreProductionHours * PreProductionRate;

    ProducersCost = ProducersHours * ProducersRate;

    TotalCost = ProductionCost + PreProductionCost + ProducersCost;

    cout << "\n\n\n\n\n\t\t\t Car Dealership Bill \t\t\t\n\n";
    cout << "\n\n\t\t Production Cost:\t\t";
    cout << ProductionCost;

    cout << "\n\n\t\t Pre-Production Cost:\t\t";
    cout << PreProductionCost;

    cout << "\n\n\t\t Producers Cost:\t\t";
    cout << ProducersCost;

    cout << "\n\n\t\t Weekly Total Cost:\t\t";
    cout << TotalCost << "\n\n\n\n\n" << endl;

    return 0;

}
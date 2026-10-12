#include <stdio.h>
//#include<iostream>
//#include<iomanip>
//using namespace std;

int main (void){
    char vehicleType;
    int hours;
    double rate, charge;

    printf ("Enter vehicle type (C - Car, B - Bus, T - Truck): ");
    scanf ("%c", &vehicleType);

    printf("Enter hours parked: ");
    scanf("%d", &hours);

    if (vehicleType == 'C' ||  vehicleType == 'c') {
        rate = 25.00;
    }
    else if (vehicleType == 'B' || vehicleType == 'b') {
        rate = 50.00;
    }
    else if (vehicleType == 'T' || vehicleType == 't') {
        rate = 75.00;
    }
    else {
        printf ("Invalid vehicle type!");
        return 0;
    }

    charge = rate * hours;

    printf("\nParking Charge: P%.2f", charge );

    return 0;
}

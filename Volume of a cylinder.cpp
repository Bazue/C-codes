/*
A C++ program that prompts  the user to enter the radius and calculate the volume of a cylinder 
Author: Waiguru Ian Muchiri
Reg no.: BSCIT-05-0096/2024
Date: 23/01/2025
*/
#include <iostream>
#include <cmath> // For the value of P.I 

using namespace std;

// Function to calculate the volume of a cylinder
double Cylinder_Volume(double radius, double height) {
    return M_PI * radius * radius * height;
}

int main() {
    double radius, height;

    // Prompt user for input
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;

    // Calculate and display the volume
    double volume = Cylinder_Volume(radius, height);
    cout << "The volume of the cylinder is: " << volume << endl;

    return 0;
}
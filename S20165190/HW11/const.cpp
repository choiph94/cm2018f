/*
 * const.cpp
 *
 *  Created on: 2018. 11. 18.
 *      Author: han
 */

#include "hw11.h"

// Constants
const double q = 1.602192e-19; // Elementary charge, C
const double k_B = 1.380662e-23; // Boltzmann constant, J/K
const double pi = 3.141592; // PI
const double Gamma_011perC_1 = sqrt((double)1/2);

// Settings
const double H = 0.1; // (eV)
const double Length = 30e-9; // Length of system, m
const double T = 300; // Temperature, K
const double tau = 0.34e-12; // Second, s
const double velocity_ave = 10e5; // Average velocity, m/s


// Discretization
const int N = 301;
const int VN = 51;
const int interface1 = 100;
const int interface2 = 200;


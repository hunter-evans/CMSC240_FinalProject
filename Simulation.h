/*
* Simulation Class
*
* This class creates the Grid class representing the intersection, stores the
* vehicles in a vector, and loops through a set number of cycles passed .in
*
* Hunter Evans, Melissa Gu, Jimmy Odell
* CS240 Final Project, Spring 2018
*/

#ifndef __SIMULATION_H__
#define __SIMULATION_H__

#include "Grid.h"
#include "Vehicle.h"

#include <vector>

class Simulation {

    public:
    // Default Constructor
    Simulation();

    // Full Constructor
    Simulation(double r, double c, double v, int green, int yellow, int red, int numCycles);

    // Method that loops through numCycles times, running the simulation
    void run();

    // Called at the beginning of each cycle, adds vehicles to the intersection
    void addVehicles();

    // Called once each cycle, updates the positions of each vehicle
    void updateVehicles();

  private:
    // Main components
    Grid grid;
    std::vector<Vehicle> vehicles;

    // Probabilities
    double r;      // Probability vehicle turns right
    double s;      // Probability vehicle goes straight
    double c;      // Probability vehicle is a car
    double v;      // Probability vehicle is an SUV
    double t;      // Probability vehicle is a truck
    double p;      // Probability a new vehicle will arrive at a lane

    // Timing
    int numCycles; // Total number of cycles simulation will run
    int green;     // Number of cycles the lights remain green
    int yellow;    // Number of cycles the lights remain yellow
    int red;       // Number of cycles the lights remain red
};

#endif
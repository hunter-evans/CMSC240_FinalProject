#include "Simulation.h"

Simulation() { }

Simulation(double r, double c, double v, double p, int numCycles, int green, int yellow, int red) {
    // Initialize turning probabilities
    this->r = r;
    s = 1-r;

    // Initialize vehicle probabilities
    this->c = c;
    this->v = v;
    t = 1-c-v; 
    this->p = p;

    // Initialize timing variables
    this->numCycles = numCycles; 
    this->green = green;
    this->yellow = yellow;
    this->red = red;
}


void run() {
    grid = Grid::Grid(); // Instantiate the grid
    // Run the simulation numCycles times
    for (int i = 0; i < numCycles; i++) {
        addVehicles();    // At beginning of each cycle, add vehicles to intersection
        updateVehicles(); // Each cycle, the positions of vehicles must be updated
    }
}


void addVehicles() {

}


void updateVehicles() {

}

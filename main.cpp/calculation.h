#ifndef CALCULATION_H
#define CALCULATION_H

#include <vector>
#include "trip.h"
using namespace std;

int calculateTotalCost(const vector<Place>& selectedPlaces, int people);
double calculateCostPerPerson(int totalCost, int people);
double calculateCostPerDay(int totalCost, int days);
bool isWithinBudget(int totalCost, int budget);
int calculateRemainingBudget(int budget, int totalCost);

#endif
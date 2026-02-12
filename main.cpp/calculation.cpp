#include "calculation.h"

// รวมค่าใช้จ่ายทั้งหมด
int calculateTotalCost(const vector<Place>& selectedPlaces, int people) {
    int totalCost = 0;

    for (int i = 0; i < selectedPlaces.size(); i++) {
        totalCost += selectedPlaces[i].cost * people;
    }

    return totalCost;
}

// ค่าใช้จ่ายต่อคน
double calculateCostPerPerson(int totalCost, int people) {
    if (people == 0) return 0;
    return (double) totalCost / people;
}

// ค่าใช้จ่ายต่อวัน
double calculateCostPerDay(int totalCost, int days) {
    if (days == 0) return 0;
    return (double) totalCost / days;
}

// เช็คว่างบพอไหม
bool isWithinBudget(int totalCost, int budget) {
    return totalCost <= budget;
}

// งบคงเหลือ
int calculateRemainingBudget(int budget, int totalCost) {
    return budget - totalCost;
}
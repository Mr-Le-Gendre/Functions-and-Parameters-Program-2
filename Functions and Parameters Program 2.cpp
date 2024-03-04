// Functions and Parameters Program 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

using namespace std;

// Program Overview:
// This program calculates the inflation rates for two successive years and determines whether the inflation trend is increasing, decreasing, or stable.
// User input: The current price of an item, its price one year ago, and its price two years ago.
// Program process: It calculates the inflation rates for each successive year and determines the trend based on the calculated rates.
// Output: The inflation rates for two successive years and the trend.

// Get user input for the prices of the item
// Preconditions: None
// Postconditions: Parameters currentPrice, priceOneYearAgo, priceTwoYearsAgo are updated with user input.
void getInput(double& currentPrice, double& priceOneYearAgo, double& priceTwoYearsAgo);

// Calculate the inflation rates and determine the trend
// Preconditions: None
// Postconditions: Inflation rates and trend variables are updated.
void calculateInflationRates(double currentPrice, double priceOneYearAgo, double priceTwoYearsAgo, double& inflationRateYear1, double& inflationRateYear2, string& trend);

// Output the results
// Preconditions: Inflation rates and trend are calculated.
// Postconditions: Results are displayed to the user.
void outputResults(double inflationRateYear1, double inflationRateYear2, string trend);

int main() {
    double currentPrice, priceOneYearAgo, priceTwoYearsAgo;
    string trend;
    double inflationRateYear1, inflationRateYear2;

    // Get prices from the user
    getInput(currentPrice, priceOneYearAgo, priceTwoYearsAgo);

    // Calculate inflation rates and trend
    calculateInflationRates(currentPrice, priceOneYearAgo, priceTwoYearsAgo, inflationRateYear1, inflationRateYear2, trend);

    // Output the results
    outputResults(inflationRateYear1, inflationRateYear2, trend);

    return 0;
}

void getInput(double& currentPrice, double& priceOneYearAgo, double& priceTwoYearsAgo) {
    // Ask the user for prices
    cout << "Enter the current price of the item: ";
    cin >> currentPrice;
    cout << "Enter the price of the item one year ago: ";
    cin >> priceOneYearAgo;
    cout << "Enter the price of the item two years ago: ";
    cin >> priceTwoYearsAgo;
}

void calculateInflationRates(double currentPrice, double priceOneYearAgo, double priceTwoYearsAgo, double& inflationRateYear1, double& inflationRateYear2, string& trend) {
    // Calculate inflation rates
    inflationRateYear1 = (currentPrice - priceOneYearAgo) / priceOneYearAgo;
    inflationRateYear2 = (priceOneYearAgo - priceTwoYearsAgo) / priceTwoYearsAgo;

    // Determine the trend
    if (inflationRateYear1 > inflationRateYear2)
        trend = "The inflation is increasing";
    else if (inflationRateYear1 < inflationRateYear2)
        trend = "The inflation is decreasing";
    else
        trend = "The inflation is stable";
}

void outputResults(double inflationRateYear1, double inflationRateYear2, string trend) {
    // Output the inflation rates and trend
    cout << "Inflation rate for the first year: " << inflationRateYear1 << endl;
    cout << "Inflation rate for the second year: " << inflationRateYear2 << endl;
    cout << "Trend: " << trend << endl;
}

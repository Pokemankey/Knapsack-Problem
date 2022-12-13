// C++ program to solve fractional Knapsack Problem
 
#include <bits/stdc++.h>
#include <chrono>
using namespace std::chrono;
using namespace std;

 
// Structure for an item which stores weight and
// corresponding value of Item
struct Item {
    int value, weight;
 
    // Constructor
    Item(int value, int weight)
    {
        this->value = value;
        this->weight = weight;
    }
};
 
// Comparison function to sort Item
// according to val/weight ratio
bool cmp(struct Item a, struct Item b)
{
    double r1 = (double)a.value / (double)a.weight;
    double r2 = (double)b.value / (double)b.weight;
    return r1 > r2;
}
 
// Main greedy function to solve problem
double greedyKnapsack(int W, struct Item arr[], int N)
{
    // Sorting Item on basis of ratio
    sort(arr, arr + N, cmp);
 
    double finalvalue = 0.0;
 
    // Looping through all items
    for (int i = 0; i < N; i++) {
         
        // If adding Item won't overflow,
        // add it completely
        if (arr[i].weight <= W) {
            W -= arr[i].weight;
            finalvalue += arr[i].value;
        }
 
    }
 
    // Returning final value
    return finalvalue;
}
 
// Driver code
int main()
{
    auto start = chrono::high_resolution_clock::now();
    int W = 10000;
    Item arr[] = {};
 
    int N = sizeof(arr) / sizeof(arr[0]);
    cout<<N<<endl;

    // Function call
    cout << greedyKnapsack(W, arr, N) << endl;
    auto end = chrono::high_resolution_clock::now();
  
    // Calculating total time taken by the program.
    double time_taken = 
      chrono::duration_cast<chrono::nanoseconds>(end - start).count();
  
    time_taken *= 1e-9;
  
    cout << "Time taken by program is : " << fixed 
         << time_taken << setprecision(9);
    cout << " sec" << endl;
    return 0;
}
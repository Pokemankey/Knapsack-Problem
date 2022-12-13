#include <bits/stdc++.h>
#include <chrono>
#include <sys/time.h>
using namespace std;
 

int max(int a, int b) { return (a > b) ? a : b; }

int knapSack(int W, int wt[], int val[], int n)
{
    int i, w;
    vector<vector<int> > K(n + 1, vector<int>(W + 1));
 
    for (i = 0; i <= n; i++) {
        for (w = 0; w <= W; w++) {
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (wt[i - 1] <= w)
                K[i][w] = max(val[i - 1]
                                  + K[i - 1][w - wt[i - 1]],
                              K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }
    return K[n][W];
}
 
int main()
{   auto start = chrono::high_resolution_clock::now();
    int c;
    int wt[] = {};
    int val[] = {};
    int W = 25000;
    int n = sizeof(val) / sizeof(val[0]);
    cout<< n << endl;
    cout << knapSack(W, wt, val, n) << endl;
    auto end = chrono::high_resolution_clock::now();
  
    double time_taken = 
      chrono::duration_cast<chrono::nanoseconds>(end - start).count();
  
    time_taken *= 1e-9;
  
    cout << "Time taken by program is : " << fixed 
         << time_taken << setprecision(9);
    cout << " sec" << endl;
    return 0;
}
 
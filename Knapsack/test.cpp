#include <bits/stdc++.h>
using namespace std;

int main()
{
    srand((unsigned) time(NULL));
    int n = 2000;
    int sum = 0;
    cout << "{";
    // for(int i = 0; i<=n; i++){
    //     int weight = 1 + (rand() % 10);
    //     int value = 1 + (rand() % 100);
    //     sum += weight;
    //     cout << "{"<< weight << "," << value << "}";
    //     cout << ",";
    // }
    for(int i = 0; i<=n; i++){
        int weight = 1 + (rand() % 10);
        int value = 1 + (rand() % 100);
        sum += weight;
        cout << weight ;
        cout << ",";
    }
    cout << "}";
    cout << endl << endl;
    cout << "{";
    for(int i = 0; i<=n; i++){
        int weight = 1 + (rand() % 10);
        int value = 1 + (rand() % 100);
        cout << value;
        cout << ",";
    }
    cout << "}";
    cout << endl << sum;
    return 0;
}
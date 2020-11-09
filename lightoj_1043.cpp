#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        double r, ab, ac, bc;
        cin >> ab >> ac >> bc >> r;
        double sq = sqrt(r/ (r+1));
        printf("Case %d: %.7lf\n", i+1, ab * sq);
    }   
    return 0;
}
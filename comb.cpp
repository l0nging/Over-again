#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void comb(int N, int K)
{
    string bitmask(K, 1); // K leading 1's
    bitmask.resize(N, 0); // N-K trailing 0's

    // print integers and permute bitmask
    do {
        for (int i = 0; i < N; ++i) // [0..N-1] integers
        {
            if (bitmask[i]) cout << " " << i;
        }
        cout << endl;
    } while (prev_permutation(bitmask.begin(), bitmask.end()));
}

int main()
{
    comb(5, 3);
    
}

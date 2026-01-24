#include <bits/stdc++.h>
using namespace std;

int main() {
    // Pairs
    pair<int, int> p = {1, 2};
    cout << "Pair: (" << p.first << ", " << p.second << ")\n";

    pair<int, pair<int, int>> p_nested = {1, {2, 3}};
    cout << "Nested Pair: (" << p_nested.first << ", (" << p_nested.second.first << ", " << p_nested.second.second << "))\n";

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << "Array of Pairs:\n";
    for (auto &pr : arr) {
        cout << "(" << pr.first << ", " << pr.second << ")\n";
    }

    return 0;
}
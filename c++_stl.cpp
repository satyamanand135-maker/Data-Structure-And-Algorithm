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


        // Vectors
    vector<int> v = {1, 2, 3};
    v.push_back(4);
    v.emplace_back(5);//It is faster than push_back

    vector<pair<int, int>> vec_pairs;
    vec_pairs.push_back({1, 2});
    vec_pairs.emplace_back(3, 4);//It is faster than push_back and you don't need to use {}
    vector<int> v2(5, 10); // Vector of size 5, all initialized to 10 

    vector<int>::iterator i=v.begin();
    i++;
    cout << *(i) << "\n"; // Outputs 2

    vector<int>::iterator j=v.end(); // This will not point to the last element, but one past the last element

    return 0;
}
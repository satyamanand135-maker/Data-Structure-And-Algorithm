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

    for(auto it=v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }
    cout << "\n";

    v.erase(v.begin()+1); // Erase second element
    v.erase(v.begin()+2, v.begin()+4); // Erase from index 2 to 3

    v.insert(v.begin()+1,100); // Insert 100 at index 1 
    v.insert(v.begin()+2,3,100); // Insert three 100s starting at index 2
    v.clear(); // Clear the vector

    //Stacks
    stack<int> s;
    s.push(1);
    s.emplace(2); //It is faster than push
    cout << "Stack Top: " << s.top() << "\n"; // Outputs 2 as it is LIFO so the last in is the first out.
    s.pop();
    cout << "Stack Size: " << s.size() << "\n"; // Outputs 1 as the pop operation removed one element which was 2 as it is LIFO.

    stack<int>s2;
    s2.swap(s); // Swaps contents of stack s2 and s
    //Time Complexity: O(1)


    //Queues
    //Queue follows FIFO(First In First Out) principle
    queue<int> q;
    q.push(1); //{1}
    q.emplace(2); //It is faster than push {1,2}
    q.push(2); //{1,2,2}
    cout << "Queue Front: " << q.front() << "\n"; // Outputs 1
    cout << "Queue Back: " << q.back() << "\n"; // Outputs 2
    q.pop(); //Removes 1 from the queue {2,2}
    cout << "Queue Size: " << q.size() << "\n"; // Outputs 2
    q.back()+=5; //Adds 5 to the last element   
    queue<int>q2;
    q2.swap(q); // Swaps contents of queue q2 and q
    //Time Complexity: O(1)


        return 0;
}
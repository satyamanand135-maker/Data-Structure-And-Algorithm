#include <bits/stdc++.h>
using namespace std;

//Q1. printing name using recursion
char name(string s){
    static int count=0;
    if(count>=5){
        return '\0';   }
    cout << s << "\n";
    count++;
    return name(s);
}
// Q2. printing number using recursion
int num(int n, int count) {
    if(count>=n){
        return 0;
    } 
    cout << count << "\n";
    count++;
    return num(n, count);
}

//Q3. Sum of first n natural numbers using recursion
int sum(int n){
    int summation=0;
    if(n==0){
        return 0;
    }
    summation=n+sum(n-1);
    return summation;
}

// Q4. Factorial of a number using recursion
int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);

}

// Q5. Reverse an array using recursion
void rev(int i, int arr[], int n){
    if(i>=n/2){
        return;
    }
    swap(arr[i], arr[n-i-1]);
    rev(i+1, arr, n);
}

// Q6. Checking if the string is palindrome or not using recursion
bool palindrome(string s, int i, int j){
    if(i>=j){
        return true;
    }
    if(s[i]!=s[j]){
        return false;
    }
    return palindrome(s, i+1, j-1);
}

// Q7. Fibonacci series using recursion
int fib(int n){
    if(n==0){
        return 0;
    }

    if(n==1){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}

int main(){
    // recursion
    // when the function calls itself until the base condition gets hit 
    // stack-overflow : when there is infinite calling the stacks in which the functions return has been stored is being oveerflowed
    // We can easily mao the whole recursion process using stack data-structure

    // Answer to Q1
    string s;
    cout << "Enter your name: ";
    cin >> s;
    name(s);

    // Answer to Q2
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    cout << num(n, 0);

    // Answer to Q3
    int n1;
    cout << "Enter a Number: ";
    cin >> n1;
    cout << "Sum of first " << n1 << " natural numbers is: " << sum(n1) << "\n";

    // Answer to Q4
    int n2;
    cout<< "Enter a Number: ";
    cin >> n2;
    cout << "Factorial of " << n2 << " is: " << fact(n2) << "\n";

    // Answer to Q5
    int n3;
    cin >> n3;
    int arr[n3];
    for(int i=0; i<n3; i++) cin>>arr[i];
    rev(0, arr, n3);
    for(int i=0; i<n3; i++) cout << arr[i] << " ";

    // Answer to Q6
    string s1;
    cout << "Enter a String: ";
    cin >> s1;
    if(palindrome(s1, 0, s1.length()-1)){
        cout << "The String is Palindrome\n";
    } else {
        cout << "The String is not Palindrome\n";
    }







    return 0;
}
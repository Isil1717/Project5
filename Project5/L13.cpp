#include <iostream>

#include <vector>

using namespace std;

vector<int> generateDivisors(int n) {

    vector<int> divisors;

    for (int i = 1; i <= n; i++) {

        if (n % i == 0)

            divisors.push_back(i);

    }

    return divisors;

}

int main() {

    int n;

    cout << "Enter a number: ";

    cin >> n;

    vector<int> divisors = generateDivisors(n);

    cout << "Divisors: ";

    for (int d : divisors)

        cout << d << " ";

    cout << endl;

    return 0;

}


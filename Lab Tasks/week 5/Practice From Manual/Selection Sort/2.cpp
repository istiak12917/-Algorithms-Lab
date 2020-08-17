#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a[100000], min_idx, t;

    cout << "Enter Array Size:";
    cin >> n;

    cout << "Enter Elements of Array: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    cout << "Enter t: ";
    cin >> t;

    for (int i = 0; i < n; i++) {
        if (i == t) break;
        min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min_idx]) min_idx = j;
        }
        swap(a[i], a[min_idx]);
    }

    cout << "After " << t << " times Array";
    for (int i = 0; i < n; i++) cout << " " << a[i];
    cout << endl;

    return 0;
}

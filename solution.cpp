#include <bits/stdc++.h>
using namespace std;

const int MAXN = 3e5 + 100;
const int MAXM = 8;

int n, m;
int selected_i = 0, selected_j = 0;
int arrays[MAXN][MAXM];

// Check if it's possible to choose two arrays such that min_k=1^m bk is maximized
bool isPossible(int threshold) {
    vector<int> bitmask(1 << m, -1);
    
    for (int i = 0; i < n; i++) {
        int sum = 0;
        
        for (int j = 0; j < m; j++) {
            if (arrays[i][j] >= threshold) {
                sum += (1 << j);
            }
        }
        
        bitmask[sum] = i;
    }
    
    for (int i = 0; i < (1 << m); i++) {
        for (int j = i; j < (1 << m); j++) {
            if (bitmask[i] != -1 && bitmask[j] != -1 && (i | j) == ((1 << m) - 1)) {
                selected_i = bitmask[i];
                selected_j = bitmask[j];
                return true;
            }
        }
    }
    
    return false;
}

int main() {
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arrays[i][j];
        }
    }
    
    int left = 0, right = 1e9 + 10;
    
    while (right - left > 1) {
        int mid = (right + left) / 2;
        
        if (isPossible(mid)) {
            left = mid;
        } else {
            right = mid;
        }
    }
    
    cout << selected_i + 1 << " " << selected_j + 1;
    
    return 0;
}

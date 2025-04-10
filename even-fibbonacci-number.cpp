#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

long findF(long n) {
    long long a = 1, b = 1;
    long long sum = 0;
    while (b <= n) {
        if (b % 2 == 0) {
            sum += b;
        }
        long long temp = a + b;
        a = b;
        b = temp;
    }
    return sum;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        cout << findF(n) << endl;
    }
    
    
    
    
    return 0;
}

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

  long ans(long n){
        //n * (n - 1)/2
        long three = 0, first = 0, five = 0, second = 0, extra = 0, third = 0;
        if(n%3 == 0){
            three = n/3;
            first = 3*((three * (three - 1))/2);
        }else{
            three = n/3;
            first = 3*((three * (three + 1))/2);
        }

        if(n%5 == 0){
            five = n/5;
            second = 5*((five * (five - 1))/2);
        }else{
            five = n/5;
            second = 5*((five * (five + 1))/2);
        }

         if(n%15 == 0){
            extra = n/15;
            third = 15*((extra * (extra - 1))/2);
        }else{
            extra = n/15;
            third = 15*((extra * (extra + 1))/2);
        }
        
        

        return first + second - third;
    }

int main(){
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++){
        int l;
        cin >> l;
        cout << ans(l) << endl;
    }
    
    return 0;
}
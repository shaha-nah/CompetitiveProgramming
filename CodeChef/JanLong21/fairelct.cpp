#include<bits/stdc++.h>

using namespace std;

const int N = 1010;
const int M = 1010;

int main(){
    int t;
    cin >> t;

    int n, m;

    while (t--){
        cin >> n >> m;
        
        int  a[n], b[m];
        int sumA = 0;
        int sumB = 0;

        for (int i = 0; i < n; i++){
            cin >> a[i];
            sumA += a[i];
        }

        for (int i = 0; i < m; i++){
            cin >> b[i];
            sumB += b[i];
        }

        int ans = 0;
        while (sumA <= sumB){
            int minA = int(1e9);
            int locA = -1;

            int maxB = -1;
            int locB = -1;

            for (int i = 0; i < n; i++){
                if (a[i] < minA){
                    minA = a[i];
                    locA = i;
                }
            }

            for (int i = 0; i < m; i++){
                if (b[i] > maxB){
                    maxB = b[i];
                    locB = i;
                }
            }

            if (minA >= maxB){
                ans = -1;
                break;
            }
            else{
                // swap
                a[locA] = maxB;
                b[locB] = minA;

                ans++;

                //update min and max
                sumA -= minA;
                sumA += maxB;

                sumB -= maxB;
                sumB += minA;
            }
        }

        cout << ans << endl;
    }
    return 0;
}

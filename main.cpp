#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (a % b == 0)
        return b;
    if (b % a == 0)
        return a;

    if (a > b)
        return gcd(a % b, b);
    return gcd(a, b % a);
}

int main() {

    //?Домой на электричках 1-B

    //Клад 1-С

    /*int n, dir, len;
    double x = 0, y = 0;
    cin >> n;
    for(int i = 1; i <= n; i ++){
        cin >> dir >> len;
        x += sin(3.14 / 4 * (dir - 1)) * len;
        y += cos(3.14 / 4 * (dir - 1)) * len;
    }
    cout << x << " " << y;*/

    //Забавная игра 1-D

    /*int n, maxi = -1, k = 0, decimal;
    cin >> n;
    int m[n + 1];
    while(n > 0){
        m[k] = n % 2;
        n /= 2;
        k ++;
    }

    for(int i = 0; i < k; i ++){
        decimal = 0;
        for(int j = 0; j < k; j ++){
            decimal += (pow(2, k - 1 - j) * m[j]);
        }
        for(int j = k - 1; j >= 1; j --){
            swap(m[j], m[j - 1]);
        }

        if(decimal > maxi) maxi = decimal;
    }
    cout << maxi;*/


    //?Целые точки 1-E

/*    int n, sum = 0, m = 0;
    cin >> n;
    int x[n + 2], y[n + 2];
    for(int i = 1; i <= n; i ++)
        cin >> x[i] >> y[i];

    for(int i = 1; i < n; i ++)
        m += gcd(abs(x[i + 1] - x[i]), abs(y[i + 1] - y[i])) - 1;
    x[0] = x[n];
    x[n + 1] = x[1];
    y[n + 1] = y[1];
    y[0] = y[n];
    for(int i = 1; i <= n; i ++){
        sum += x[i] * (y[i + 1] - y[i - 1]);
    }

    cout << 0.5 * (abs(sum) - m) + 1;*/

    // Степень 1-F

    /*unsigned long long a;
    cin >> a;
    for(int i = 1; i <= a; i ++){
        if(i * i % a == 0) {cout << i; return 0;}
    }*/

    //?Игра с фишками 1-G

    //Подсчет баллов 2-A

    /*int n, k, m;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i ++){
        cin >> a[i];
    }

    cin >> k;
    cin >> m;
    int b[m + 1][n + 1], r, c[m + 1], sum, maxi = -1, l = 0;
    for (int i = 1; i <= m; i ++) {
        sum = 0;
        r = 0;
        for (int j = 1; j <= n; j++) {
            cin >> b[i][j];
            sum += b[i][j] * a[j];
            if (b[i][j] == 1) r ++;
        }
        if(r == n) sum += k;
        sum -= l;
        if (sum > maxi) {
            maxi = sum;
        }
        c[i] = maxi;
        l += 2;
    }

    for (int i = 1; i <= m; i ++)
        cout << c[i] << "\n";*/

    //? Великая сеча 2-B

    /*int n,m;
    cin>>n>>m;
    if(n%2==0&&m%2==0)
        cout<<2;
    else
        cout<<1;*/

    //?Водостоки 2-C

    //Коллекционирование этикеток 2-D

    int n, k = 0;
    cin >> n;
    int a[n + 1];
    for(int i = 1; i <= n; i ++)
        cin >> a[i];

    for(int i = 1; i <= n; i ++){
        for(int j = i + 1; j < n; j ++){

            while(a[i] != 0 && a[j] != 0){
                a[i] -= 1;
                a[j] -= 1;
                k ++;
            }

        }
    }

    cout << k;
    return 0;
}
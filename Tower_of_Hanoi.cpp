<<<<<<< Updated upstream
#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <set>
#include <ext/pb_ds/tree_policy.hpp>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <stack>
#include <deque>
#include <iterator>
#include <tuple>
#include <iomanip>
#include <valarray>
#include <limits>
#include <sstream>
#include <fstream>
#include <cassert>
#include <functional>
#include <numeric>
using namespace std;
#define fi first
#define se second
#define double long double
#define ll long long 
#define pb push_back
#define mp make_pair
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repb(i,a,b) for(int i=a;i>b;i--)
#define MOD  1000000007
#define pii pair<int,int>
#define pdd pair<double,double>

void towerofhanoi(int n , int from_rod, int aux_rod, int to_rod){
if(n==0){
    return ;
}
towerofhanoi(n-1 , from_rod, to_rod , aux_rod);
cout<< from_rod << " " << to_rod << endl;
towerofhanoi(n-1, aux_rod , from_rod , to_rod);

}
 signed main()
{
 int N;
 cin >> N;
 cout << (1<<N)-1 << endl;
 towerofhanoi(N,1,2,3);
=======
#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <set>
#include <ext/pb_ds/tree_policy.hpp>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <stack>
#include <deque>
#include <iterator>
#include <tuple>
#include <iomanip>
#include <valarray>
#include <limits>
#include <sstream>
#include <fstream>
#include <cassert>
#include <functional>
#include <numeric>
using namespace std;
#define fi first
#define se second
#define double long double
#define ll long long 
#define pb push_back
#define mp make_pair
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repb(i,a,b) for(int i=a;i>b;i--)
#define MOD  1000000007
#define pii pair<int,int>
#define pdd pair<double,double>

void towerofhanoi(int n , int from_rod, int aux_rod, int to_rod){
if(n==0){
    return ;
}
towerofhanoi(n-1 , from_rod, to_rod , aux_rod);
cout<< from_rod << " " << to_rod << endl;
towerofhanoi(n-1, aux_rod , from_rod , to_rod);

}
 signed main()
{
 int N;
 cin >> N;
 cout << (1<<N)-1 << endl;
 towerofhanoi(N,1,2,3);
>>>>>>> Stashed changes
}
#include <iostream>
#include <cmath>
using namespace std;

int N;

bool f(int x) {
  int keta = 0;
  while (x) {
    keta ++;
    x /= 10;
  }
  return keta % 2 == 1;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  cin >> N;
  int ans = 0;

  for (int i = 1; i <= N; i++) {
    if (f(i)) {
      ans ++;
    }
  }
  cout << ans;
}

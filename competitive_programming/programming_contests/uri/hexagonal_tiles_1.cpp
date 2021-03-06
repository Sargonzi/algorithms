// https://www.urionlinejudge.com.br/judge/en/problems/view/1393

#include <iostream>
#include <map>

using namespace std;

int main() {
	
	int n;
	map<int, int> m;

	m[1] = 1;
	m[2] = 2;
	m[3] = 3;
	m[4] = 5;
	m[5] = 8;
	m[6] = 13;
	m[7] = 21;
	m[8] = 34;
	m[9] = 55;
	m[10] = 89;
	m[11] = 144;
	m[12] = 233;
	m[13] = 377;
	m[14] = 610;
	m[15] = 987;
	m[16] = 1597;
	m[17] = 2584;
	m[18] = 4181;
	m[19] = 6765;
	m[20] = 10946;
	m[21] = 17711;
	m[22] = 28657;
	m[23] = 46368;
	m[24] = 75025;
	m[25] = 121393;
	m[26] = 196418;
	m[27] = 317811;
	m[28] = 514229;
	m[29] = 832040;
	m[30] = 1346269;
	m[31] = 2178309;
	m[32] = 3524578;
	m[33] = 5702887;
	m[34] = 9227465;
	m[35] = 14930352;
	m[36] = 24157817;
	m[37] = 39088169;
	m[38] = 63245986;
	m[39] = 102334155;
	m[40] = 165580141;

	while (cin >> n && n) {
		cout << m[n] << endl;
	}

	return 0;
}
/*#include <iostream>
using namespace std;
int main() {
	int n, sum, average;
	while (true) {
		cout << "합을 입력하세요(0입력시 종료)>> ";
		cin >> sum;
		if (sum == 0)break;
		cout << "인원수를 입력하세요>>";
		cin >> n;
		try {
			if (n <= 0)
				throw n;
			else average = sum / n;
		}
		catch (int x) {
			cout << "예외발생!" << x << "으로 나눌수 없음" << endl;
			average = 0;
			cout << endl;
			continue;
		}
		cout << "평균= " << average << endl << endl;
	}
}*/
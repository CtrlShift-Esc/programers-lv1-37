#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
	vector<int> answer;

	for (auto cmd : commands)
	{
		vector<int> vt(array.begin() + --cmd[0], array.begin() + cmd[1]);
		sort(vt.begin(), vt.end());
		answer.push_back(vt[--cmd[2]]);
	}

	return answer;
}
void main()
{
	//test
	//auto ret = solution({1, 5, 2, 6, 3, 7, 4}, {2, 5, 3}, {4, 4, 1}, {1, 7, 3});
}
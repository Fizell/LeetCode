/**
 * <Description> һЩ���߼��� <br>
 *
 * @author 943379410@qq.com <br>
 * @version 1.0 <br>
 * @date 2020/06/16 <br>
 */
#include "utils.h"

using namespace std;

/*
* ������[x,x,x,x,x]������ת����vector����
*/
vector<int> Utils::toVector(string array) {
	array = array.substr(1, array.size() - 1);
	vector<int> vecInt;
	vector<string> vecStr;
	vecStr = Utils::split(array, ',');
	for (int i = 0; i < vecStr.size(); i++) {
		vecInt.push_back(stoi(vecStr[i]));
	}
	return vecInt;
}

/*
* �ָ��ַ���
*/
vector<string> Utils::split(string s, char index) {
	vector<string> vec;
	stringstream ss;
	ss << s;
	while (getline(ss, s, index)) {
		vec.push_back(s);
	}
	return vec;
}


/**
 * <Description> 一些工具集合 <br>
 *
 * @author 943379410@qq.com <br>
 * @version 1.0 <br>
 * @date 2020/06/16 <br>
 */
#include "utils.h"

using namespace std;

/*
* 将类似[x,x,x,x,x]的数据转换成vector数组
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
* 分割字符串
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


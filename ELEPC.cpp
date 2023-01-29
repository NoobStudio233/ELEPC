#include "ELEPC.h"
using namespace std;

int main()
{
	cout << "//////////////////////////////////////////////////////////////////////////////////////////" << endl;
	cout << "//                                                                                      //" << endl;
	cout << "//  ---------------  |                ---------------    -----------    --------------  //" << endl;
	cout << "//  |                |                |                 |           |   |               //" << endl;
	cout << "//  |                |                |                 |           |   |               //" << endl;
	cout << "//  |                |                |                 |           |   |               //" << endl;
	cout << "//  |                |                |                 |           |   |               //" << endl;
	cout << "//  |--------------  |                |--------------   |-----------    |               //" << endl;
	cout << "//  |                |                |                 |               |               //" << endl;
	cout << "//  |                |                |                 |               |               //" << endl;
	cout << "//  |                |                |                 |               |               //" << endl;
	cout << "//  |                |                |                 |               |               //" << endl;
	cout << "//  |--------------  |--------------  |--------------   |               |-------------  //" << endl;
	cout << "//                                                                                      //" << endl;
	cout << "//////////////////////////////////////////////////////////////////////////////////////////" << endl << endl;
	
	//程序文件路径格式化
	string path = __FILE__;
	string::size_type pos = 0;
	while ((pos = path.find('\\', pos)) != string::npos) {
		path.insert(pos, "\\");
		pos = pos + 2;
	}
	path.replace(path.end() - 9, path.end(), "resource");

	string file1 = path;
	string file2 = path;
	string file3 = path;
	string file4 = path;
	string file5 = path;
	string file6 = path;
	string folder = path;
	
	file1.append("\\\\.gitignore");
	file2.append("\\\\main.js");
	file3.append("\\\\package.json");
	file4.append("\\\\preload.js");
	file5.append("\\\\renderer.js");
	file6.append("\\\\index.html");
	folder.append("\\\\node_modules");
	printf("ElePC将开始创建Electron开发环境，请确认~\n");
	printf("[y/n]\n");
	char in;
	cin >> in;
	if (in == 'y') {

		//复制已写好的文件
		printf("好的呢~请稍等亿会会儿~");
		system("npm install electron -g -S");
		ifstream  src1(file1, ios::binary);
		ofstream  dst1(".//.gitignore", ios::binary);
		ifstream  src2(file2, ios::binary);
		ofstream  dst2(".//main.js", ios::binary);
		ifstream  src3(file3, ios::binary);
		ofstream  dst3(".//package.json", ios::binary);
		ifstream  src4(file4, ios::binary);
		ofstream  dst4(".//preload.js", ios::binary);
		ifstream  src5(file5, ios::binary);
		ofstream  dst5(".//renderer.js", ios::binary);
		ifstream  src6(file6, ios::binary);
		ofstream  dst6(".//index.html", ios::binary);
		dst1 << src1.rdbuf();
		dst2 << src2.rdbuf();
		dst3 << src3.rdbuf();
		dst4 << src4.rdbuf();
		dst5 << src5.rdbuf();
		dst6 << src6.rdbuf();
		printf("好啦！祝您一路顺风~");
	}
	
}


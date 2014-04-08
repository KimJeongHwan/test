#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>
using namespace std;

//주석추가함~~

int main(void)
{
	ofstream out("output.txt");

	srand((unsigned int)time(NULL));	//랜덤함수가 랜덤하게 나오게 하기위해서
	char mode[3]={'I','D','M'};

	for(int i=0; i<60; i++)	//트랜잭션파일 만들기
		out<<mode[rand()%3]<<" "<<time(NULL)+i<<" "<<rand()%20+1<<endl;

	out.close();

	return 0;
}
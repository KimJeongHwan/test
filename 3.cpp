#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>
using namespace std;

//�ּ��߰���~~

int main(void)
{
	ofstream out("output.txt");

	srand((unsigned int)time(NULL));	//�����Լ��� �����ϰ� ������ �ϱ����ؼ�
	char mode[3]={'I','D','M'};

	for(int i=0; i<60; i++)	//Ʈ��������� �����
		out<<mode[rand()%3]<<" "<<time(NULL)+i<<" "<<rand()%20+1<<endl;

	out.close();

	return 0;
}
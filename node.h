#include <iostream>
#include <cstdlib>
#include <string>
#include <string.h>
using namespace std;
class node{
public:
	int info_num,info_num2;
	double info_double;
	char info_char;
	bool info_bool;
	string info_string;
	string list [100];
	node(string info_string,int info_num);
	node();
};
node::node(){
	node * next_right = NULL;
	node * next_left = NULL;
}
node::node(string info_string, int info_num){
	this->info_string = info_string;
	this->info_num = info_num;
	node * next_right = NULL;
	node * next_left = NULL;
}

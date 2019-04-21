#ifndef FILE_HANDLER_H
#define FILE_HANDLER_H

#include <iostream>
#include <fstream>
#include <vector>
#include <map>

#include <string>
#include <string.h>
#include <stdlib.h>
#include <cctype>

//for sleep function call
#include <unistd.h>

#if 0
struct shcextbindb{
	std::string member;
	std::string name;
	std::string value;
};

template <class T>
class data{
public:
	const std::string &getMember(){
		return _data.member;
	}

	const std::string &getName(){
		return _data.name;
	}

	const std::string &getValue(){
		return _data.value;
	}

	const std::string &get_Value(){
		return _data._value;
	}

private:
	T _data;
};
#endif

//typedef std::pair<std::string, std::string> PAIR;

class filehandler
{
public:
	filehandler(const std::string filename);
	filehandler(const filehandler &file);
	~filehandler();

	void parse(std::string tableName/*, std::string find*/);
	void show();

private:
	filehandler(); //we dont want a default ctor 
	
	std::string filename;
	std::ifstream filestream;
	//std::vector<PAIR> tcontainer;
	//std::multimap<std::string, name_value> mmap;
	//std::multimap<std::string, std::pair<std::string, std::string>> mmap;
	//std::vector<data<shcextbindb>> container;
	std::multimap<std::string, std::string> mmap;

	bool isAlpha(const std::string &input);
	bool isComment(const std::string &input);
};

#endif //FILE_HANDLER_H
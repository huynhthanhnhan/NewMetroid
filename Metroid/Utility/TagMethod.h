#pragma once
#include <string>
#include <vector>
#include <iostream>

using namespace std;

enum eTag
{
	Player
};

class Tag
{
private: 
	vector<eTag> tags;
public:
	void AddTag(eTag tag);
	bool isHasTag(eTag tag);
	void EraseTag(eTag tag);
};
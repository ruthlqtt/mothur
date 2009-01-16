#ifndef FASTAMAP_H
#define FASTAMAP_H

/*
 *  fastamap.h
 *  mothur
 *
 *  Created by Sarah Westcott on 1/16/09.
 *  Copyright 2009 Schloss Lab UMASS AMherst. All rights reserved.
 *
 */
 
using namespace std;
 
#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include "utilities.hpp"


class FastaMap  {

public:
	FastaMap() {};
	FastaMap(ifstream&);
	~FastaMap() {};
	
	string getGroupName(string);  //pass a sequence name get its group
	int getGroupNumber(string);  //pass a sequence name get number of sequence in its group
	string getNames(string);	//pass a sequence get the string of names in the group separated by ','s.
	void push_back(string, string); //sequencename, groupname
	void clear();
	int size();					//returns number of unique sequences
	void print(ostream&);

private:
	struct group {
		string groupname;					//the group name for identical sequences, will be set to the first sequence found.
		int groupnumber;					//the number of sequences in that group.
		string names;						//the names of the sequence separated by ','.
	};

	map<string, group>  data;  //sequence, group
	map<string, group>::iterator it;	
};

#endif
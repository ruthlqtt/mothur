#ifndef PROGRESS_H
#define PROGRESS_H

#include "mothur.h"

using namespace std;

class Progress {
	
public:
	Progress();
	Progress(string, int);
	void update(int);
	void newLine(string, int);
	void finish();
	
private:
	int nTicks;
	int finalPos;	
};

#endif

#include "Header.h"

int main()
{
	Map Test;

	vector<int> Temp;

	Temp = Test.DijkstraDistance(Denver);

	Test.DebugDistances(Temp);
	
	
	return 0;
}
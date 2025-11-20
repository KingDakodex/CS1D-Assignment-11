#include "Header.h"

int main()
{
	Map Test;

	vector<int> mstWeight;
	vector<pair<int, int>> mst = Test.PrimMST(Denver, mstWeight);

	vector<int> Temp;

	Temp = Test.DijkstraDistance(Denver);

	Test.DebugDistances(Temp);
	
	Test.DisplayMST(mst, mstWeight);

	return 0;
}

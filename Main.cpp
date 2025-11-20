/*******************************************************************************
 * Name: Jacob, Dakota, and Aaron
 * Assignment: Assignment 11
 * Description:
 * 	This program implements a Map and demonstrates both Dijkstra's and Prim's
 * 	Algorithms on it, outputting the paths and tree respectively.
 *
 * ****************************************************************************/
#include "Header.h"

int main()
{
	cout << "This program implements Dijkstra's Algorithm to find the shortest distance\n"
		 << "from Denver to every other city on the given map. It also determines the map's\n"
		 << "respective MST.";
	Map USA;

	vector<int> mstWeight;
	vector<pair<int, int>> mst = USA.PrimMST(Denver, mstWeight);

	cout << "Part 1: Dijkstra's Algorithm - Shortest distance from Denver to the rest of the cities:\n";
	USA.Dijkstra(Denver);
	cout << "\n---------------------------------------------------------------------------------------\n";
	cout << "\nPart 2: Prim's Algorithm - Map converted into an MST:\n";
	USA.DisplayMST(mst, mstWeight);

	return 0;
}

#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

// By Dakota Gall
// makes identifying cities easier
enum City
{
    Seattle = 1,
    Chicago = 2,
    Boston = 3,
    SanFrancisco = 4,
    Denver = 5,
    NewYork = 6,
    LosAngeles = 7,
    KansasCity = 8,
    Atlanta = 9,
    Dallas = 10,
    Houston = 11,
    Miami = 12
};

// By Dakota Gall
// class to track the cities  in a Adjacency List Structure
class Map
{
private:

    // Vector to store data for cities and their distances
    vector<vector<pair<int, int>>> adjList;


public:

    // constructor
    Map();

    // adds a city's edges too the vector stored in Map object
    void AddCity(int nameCityOne, int nameCityTwo, int distance);

    // each city is stored in the vector as a number and will need decoded
    // pass the number to decode here to recieve the cities name string
    string CityDecoder(int toDecode);

    // display all cities and their distances to each other
    void DisplayMap();

    // Takes a starting city and returns the coresponding distances from it to all other nodes in the map
    vector<int> DijkstraDistance(int startingPoint);

    // debug tool to output the raw distances values
    void DebugDistances(vector<int> Distances);

    // returns the mst edges using prim's algo
    vector<pair<int, int>> PrimMST(int startingPoint,
    		   	   	   	   	   	   	vector<int>& mstWeight);
    // Display the MST edges
    void DisplayMST(const vector<pair<int, int>>& mstEdges,
                    const vector<int>& key);

    //perform and print the Dijkstra route distances from starting point to each other node:
    void Dijkstra(int startingPoint);

    //print the pathing of a specific traversal within the Dijkstra's algorithm
    void PrintPaths(const vector<int>& parent, int start, int end, int distance);
};

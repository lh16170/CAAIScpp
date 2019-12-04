#include "../../../include/headers.h"
void TestDijkstraSSSP(int v0 = 0)
{
    vector<int> n = { 5, 6, 9 };
    vector<vector<vector<int>>> w = {
        {
            //Prim's Minimum Spanning Tree (MST) | Greedy Algo-5
            //https://www.geeksforgeeks.org/prims-minimum-spanning-tree-mst-greedy-algo-5/
            {       0,      2,INT_MAX,      6,INT_MAX },
            {       2,      0,      3,      8,      5 },
            { INT_MAX,      3,      0,INT_MAX,      7 },
            {       6,      8,INT_MAX,      0,      9 },
            { INT_MAX,      5,      7,      9,      0 }
        },
        // Dijkstra's algorithm on Wikipedia
        {
            {       0,      7,      9,INT_MAX,INT_MAX,     14 },
            {       7,      0,     10,     15,INT_MAX,INT_MAX },
            {       9,     10,      0,     11,INT_MAX,      2 },
            { INT_MAX,     15,     11,      0,      6,INT_MAX },
            { INT_MAX,INT_MAX,INT_MAX,      6,      0,      9 },
            {      14,INT_MAX,      2,INT_MAX,      9,      0 },
        },
        {
            //Kruskal's Minimum Spanning Tree using STL in C++
            //https://www.geeksforgeeks.org/kruskals-minimum-spanning-tree-using-stl-in-c/
            {       0,      4,INT_MAX,INT_MAX,INT_MAX,INT_MAX,INT_MAX,      8,INT_MAX },
            {       4,      0,      8,INT_MAX,INT_MAX,INT_MAX,INT_MAX,     11,INT_MAX },
            { INT_MAX,      8,      0,      7,INT_MAX,      4,INT_MAX,INT_MAX,      2 },
            { INT_MAX,INT_MAX,      7,      0,      9,     14,INT_MAX,INT_MAX,INT_MAX },
            { INT_MAX,INT_MAX,INT_MAX,      9,      0,     10,INT_MAX,INT_MAX,INT_MAX },
            { INT_MAX,INT_MAX,      4,     14,     10,      0,      2,INT_MAX,INT_MAX },
            { INT_MAX,INT_MAX,INT_MAX,INT_MAX,INT_MAX,      2,      0,      1,      6 },
            {       8,     11,INT_MAX,INT_MAX,INT_MAX,INT_MAX,      1,      0,      7 },
            { INT_MAX,INT_MAX,      2,INT_MAX,INT_MAX,INT_MAX,      6,      7,      0 },
        },
    };
    int k = n.size();
    for (int i = 0; i < k; i++)
    {
        if (v0 > n[i] - 1)
            v0 = n[i] - 1;
        DijkstraSSSPCaller(n[i], w[i], v0);
    }
}
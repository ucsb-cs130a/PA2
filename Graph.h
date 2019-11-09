#include <string>
#include <vector>
#include "GraphHelper.h"


using namespace std;


class Graph {

public:
    vector<vector<int>> adjList;
       

    // Constructor
    // 
    // N: The number of nodes
    // nodeIds: the ids of nodes as integers
    // d: the sizee of the skill vectors of all nodes
    // nodeIDtoSkillsMap: a map form the nodeID to their skiils vector
    Graph(int N, vector<int> nodeIDs, vector<Edge> edges, int d, map<int, vector<float>> nodeIDToSkillsMap);

    // Return the diameter of the network.
    int diameter();

    // Return the ratio of open triangles to closed triangles.
    float openClosedTriangleRatio();   

    // Return the top k open triangles ranked by the total weight on their edges.
    // 
    // K: number of triangles to return
    vector<Triangle> topKOpenTriangles(int k);

    // Return the top k skilled individuals around a given node based on a given weighting
    //
    // nodeID: Id of seed node
    // k: number of nodes to return
    // w: weight vector
    vector<int> topKNeighbors(int nodeID, int k,  vector<float> w);

    // Return the most skilled individual that does not share an edge with the seed node
    // nodeId: Id of seed node
    // w: weight vector
    int topNonNeighbor(int nodeID, vector<float> w);
    
    // Return the Jacard Index of the top-k neighbors of two seed nodes
    //
    // nodeA: id of first node
    // nodeB id of second node
    // k: number of neighbors to evaluate for each node
    // w: weight vector
    float jacardIndexOfTopKNeighborhoods(int nodeA, int nodeB, int k, int w);
}  



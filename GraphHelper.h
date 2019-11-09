using namespace std;


struct edge 
{
    int srcId, destId;
}

struct triangle {
    int id1;
    int id2;
    int id3;
    
    // Might need to make a special constructor and override '=='
    //triangle(int a, int b, int c) {}

    //bool operator==(const triangle& other) const {
    //    return (other.id1 == id1) && (other.id2 == id2) && other.(id3 == id3); 
}    

#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
template <class T>
class BFS{
	public:
	int size;  //no of vertices
	list<T> *adjacent;
	public:
		BFS(int s){
			this->size=s; 
		    adjacent=new list<T>[size]; //declaring size of list
		}
	
	void insertEdges(T val1, T val2){
        adjacent[val1].push_back(val2);
        adjacent[val2].push_back(val1);
    }
    
     void ShowConnected(){
     bool* visited = new bool[size];
       for (int i = 0; i < size; i++)
          visited[i] = false;
 
        for (int j = 0; j < size; j++) {
           if (visited[j] == false) {
            
            BFSUtil(j, visited);
 
            cout << "\n";
        }
    }
    //delete[] visited;
  }
	
	
   void BFSUtil(int k, bool visited[]){
       visited[k] = true;
       cout << k << " ";
       list<int>::iterator i;
       i=adjacent[k].begin();
       while(i != adjacent[k].end()){
          if (!visited[*i])
            BFSUtil(*i, visited);
          ++i;
       }
    }
	
	void GraphBFS(T First){
        vector<bool> visited;
        visited.resize(size,false);
        list<T> queue;
        visited[First] = true;
        queue.push_back(First);
 
      while(!queue.empty()){
          First = queue.front();
          cout << First << " ";
          queue.pop_front();
        for(auto adjecent: adjacent[First]){
            if (!visited[adjecent])
            {
                visited[adjecent] = true;
                queue.push_back(adjecent);
            }
        }
    }
}

  void breathFirstSearch(int u, vector<int> adj[], vector<bool> &visited) {
   list<int> q;
   visited[u] = true;
   q.push_back(u);
   while(!q.empty()) {
      u = q.front();
      cout << u << " ";
      q.pop_front();
      int s=0;
      while(s!= adj[u].size()) {
         if (!visited[adj[u][s]]) {
            visited[adj[u][s]] = true;
            q.push_back(adj[u][s]);
         }
         ++s;
      }
   }
 }
 
void BFSdisc(vector<int> ADjacent[], int size) {
   vector<bool> visited(size, false);
   int j=0;
   while (j<size){
      if (visited[j] == false)
        breathFirstSearch(j, ADjacent, visited);
    j++;
   }
}

 
  
};

int main(){
	BFS <int>obj(5);
	obj.insertEdges(1, 0);
    obj.insertEdges(2, 1);
    obj.insertEdges(3, 4);
    cout<<endl;
    cout<<"The connectivity of graphs: "<<endl;
    obj.ShowConnected();
	cout<<"Traversal of connected graphs starting from 2: "<<endl;
	obj.GraphBFS(2);
	cout<<endl;
	cout<<"Traversal of connected graphs starting from 3: "<<endl;
	obj.GraphBFS(3);
	cout<<endl;
	cout<<"Undirected gragh traversal: "<<endl;
	BFS <int> b1(5);
	vector <int> adj[5];
	b1.insertEdges(1, 0);
    b1.insertEdges(2, 1);
    b1.insertEdges(3, 4);
    b1.BFSdisc(adj, 5);
	return 0;
}

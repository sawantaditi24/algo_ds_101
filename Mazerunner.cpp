#include <iostream>
using namespace std;


void findPath(int maze[][20], int n, int x, int y, int path[][20]){
	if(x < 0 || x >= n || y < 0 || y >= n){
		return; 
	}

	if(x == n - 1 && y == n - 1){
		path[x][y] = 1;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cout << path[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		return;
	}

	if(maze[x][y] == 0 || path[x][y] == 1){
		return; 
	}

	path[x][y] = 1;
	// Right
	findPath(maze, n, x, y + 1, path);
	//left
	findPath(maze, n, x, y - 1, path);
	// top
	findPath(maze, n, x - 1, y, path);
	// Down
	findPath(maze, n , x + 1, y, path);
	path[x][y] = 0;

}


void findPath(int maze[][20], int n){

	int path[20][20] = {0};
	findPath(maze, n, 0, 0, path);		

}


int main() {

	// N*N maze
	int n = 3; 

	// Maximum value of N can be 20, so we have kept maze to be big enough 
	int maze[20][20] = {{1,1,0},{1,1,0},{0,1,1}};

	findPath(maze, n);

}


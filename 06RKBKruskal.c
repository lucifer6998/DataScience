#include <stdio.h>

// Structures for edge and edgelist

struct edge {
  int u,v,w;
} edge;

struct edgelist {
  edge data[20];
  int n;
} edgelist;

edgelist elist;
edgelist spanlist;

// Function declarations
void kruskal();
void print();

// Global variable declarations
int n, arr[20][20];

int main (void)  {
  int i;
  printf("\nEnter no. of vertices: ");
  scanf("%d\n", &n);
  printf("\nEnter the adjacency matrix: ");
  for(i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d\n", &G[i][j]);
    }
  }
  kruskal();
  print();
}

void kruskal() {
  int belongs_to[20];
  elist.n = 0;

  for (i = 1; i < n; i++) {
    for (j = 0; j < i; j++) {
      if(arr[i][j] != 0) {
        elist.data[elist.n].u = i;
        elist.data[elist.n].v = j;
        elist.data[elist.n].w = arr[i][j];
        elist.n++;
      }
    }
  }

  sort();

  for (i = 0; i < n; i++) {
    belongs_to[i] = i
  }
}






  return 0;
}

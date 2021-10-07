
#include<stdio.h>
#include<stdlib.h>
#define white 1
#define Gray 2
#define black 3
#define inf 1000
#define nil-1


int vertex,front =0,rear=-1;
int G[100],color[100],prev[100],d[100],queue[100];
void CreatGraph();
void BFS();
void print_path(int s,int v);
void Enqueue(int vertex);
int Dequeue();
int isEmpty_queue();



int main()



void CreatGraph()
{
     int i,maxEdge,source,destin;
     printf("Enter the number of vertex : ");
     scanf ("%d,&vertex");
     maxEdge=vertex*(vertex-1);


     printf("\n choose two vertices from 0 to %d and enter -1 -1 to end the edge input\n",vertex-1);
     for(i=1;i<=maxedge; i++)
     {
         printf("Enter edge %d : ",i);
         scanf((%d%d,&source,&destin);

     if(source== -1 && destin == -1)
        break;
     if(source>=vertex || destin>=vertex|| source)

      {
            printf("Invalid edge!\n");
         i--;
      }

     else
     {
        G [source][destin] =  1;
     }
   }
}






void BFS()
{
    int i,u v,s;
    for(u-0;u<vertex;u++)
    {
        color[u]=white;
        prev[u]=nil;
        d[u]=inf;
    }
    printf{"\n Enter Source Vertex for BFS :  "};
    scanf("%d",&s);

    color[s]=gray;
    d[u]=inf;
    prev[u]=nil;
    Enqueue(s);
while(! isEmpty_queue())
{
    u = Dequeue();
    for(v=0;v<vertex;v++)
    {
        if(G[u][v]==1&&color[v]==white){
            color[v] =gray;
            d[u]=d[u]+1;
            prev[u]=u;
            Enqueue(v);


        }
    }
    color[u] = black;
}
printf("\n Enter Destination Vertex for BFS:");
Scanf("%d",&v);

printf("\n yhe path from vertex %d to vertex %d:");
print_path(s,v);

printf("\n\n");

}








void print_path( int s,int v)
{
    if(v==s)
        printf("%d ",s);
    else if (prev[v]==n-1)
        printf("No path.");
    else{
        print_path(s,prev[v]);
        printf("%d ",v);
    }
}









int dequeue ()
{
    int deletevertex;
    if(front>rear)
    {
        printf("\n There is no vertex.Queue is Empty\n");
        exit(1);
    }
    deleteVertex=queue[front];
    front=front+1;
    return deletevertex;
}



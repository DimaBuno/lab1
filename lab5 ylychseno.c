#include "stdio.h"

struct city {
 char *name;
 int population;
 int square;
};
int Density (int pop, int sqr){
  int k= pop/sqr;
  return(k);
}   
   
  void sqw (struct city arg1){
    printf("Name:" ); puts(arg1.name);
    printf("Population:" ); printf("%d\n",arg1.population);
    printf("Square:" ); printf("%d\n\n",arg1.square);
}

int main(void) {
  
  char *n;
  struct city c[4];
  int d[3];
  int s=0;
  
  c[0].name = "Lviv";
  c[0].population = 40;
  c[0].square = 20; //den =2
  
  c[1].name = "Khmelnitsky";
  c[1].population = 600;
  c[1].square = 20; //den =30
  
  c[2].name = "Kyiv";
  c[2].population = 100;
  c[2].square = 20; //den =5
  
  c[3].name ="1";
  c[3].population = 1;
  c[3].square = 1;
  
  
  for (int i=0;i<3;i++){
    d[i]=Density(c[i].population,c[i].square);
  }
  
      if(d[0]<d[1]){
      int b=d[1];
      d[1]=d[2];
      d[2]=b;
      
      c[3]=c[1];
      c[1]=c[2];
      c[2]=c[3];
      
      }

  for ( int i=0;i<3;i++){
    int b=0;
    
    if (d[i]>d[i+1]){
      b = d[i];
      d[i]= d[1+i];
      d[1+i]=b;
      
      c[3]=c[i];
      c[i]=c[i+1];
      c[i+1]=c[3];
    }
  }
  
  for(int i=0;i<3;i++){
    printf("%d \n", d[i]);
  }
  
  for (int i = 0; i<3;i ++){
   sqw(c[i]); 
  } 
  
}
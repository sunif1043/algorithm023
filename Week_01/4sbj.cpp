#include <stdio.h>
int main(){
  int a, b, c, d, e;
    scanf("%d %d %d %d", &a, &b, &c, &d);
	  if(a>b)  {
	    e=a;  
	  }  
	  else  { 
	    e=b;
		}
		  if(e<c)  {
		    e=c;
			} 
		if(d>e){
			e=d;
		}
		printf("%d", e);
		return 0;
}

#include <stdio.h>
#include<stdlib.h>

int main(){
        int max=0,i,j;
		int index=1;
		int N,M;
		scanf("%d%d",&N,&M);
		int T[M];
		for (i=0;i<M;i++) scanf("%d",&T[i]);
		for (i=1;i<=N;i++) {
			int compteur =0;
			for(j=0;j<M;j++) {
                int element;
                scanf("%d",&element);
				if(element==T[j]) compteur++;
			}
			if(max<compteur) {max=compteur;index=i;}
		}
		printf("%d\n",index);
    return 0;
}

#include <stdio.h>
int main(int argc, char **argv)
{
    printf( "I am alive!  Beware.\n" );
    int sum = atoi(argv[1]);
    int max = 50;
    int w, i, j, k, i3, j3, k3;
    int start = 2;

    for(w=2;w<sum;w++){
        for(i=start;i<max;i++){
	    for(j=start;j<max;j++){
                for(k=start;k<max;k++){
		    i3=i*i*i;
		    j3=j*j*j;
		    k3=k*k*k;
		    if(i3+j3+k3==w){
		        printf( "%d = %d^3 + %d^3 + %d^3 \n", w, i, j, k);
		    }
		}
	    }
	}
    }





    return 0;
}

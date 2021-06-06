#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float mc_pi(int n){
	int i=0;
        int circle_ct=0;
	int total_ct=0;
	while(i<n){
		float x = 2*frandom()-1;
		float y = 2*frandom()-1;
		total_ct++;
	
		float d=(x*x+y*y);
		if(d<=1){
			  circle_ct+=1;
			}
		
		i++;
	}
	 float pi=4*(float)circle_ct/(total_ct);
	 return (pi);
	}



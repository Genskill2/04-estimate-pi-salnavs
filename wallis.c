#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float wallis_pi(int n){
	float pi=1.0,temp;
	
	for(int i=1;i<=n;i++){
                
		temp=4*i*i;
		pi=(pi*(temp/(temp-1)));
	
	
	}
	
	return (2*pi);
}


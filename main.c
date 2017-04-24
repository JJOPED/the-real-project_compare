#include <stdio.h>
#include "compare.h"

int main(void) {
	int x, y;
	x=3;
	y=7;
	printf("%d and %d, the max:%d\n",x,y,max(x,y));
	printf("%d and %d, the min:%d\n",x,y,min(x,y));
	return 0;
}

#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


int main() {
	char c;
	
	if(read(STDIN_FILENO, &c, 1) == 1) {
		printf("%d\n", c);
		
	}
	return 0;
}

/* Reading in input line by line */

/* Method 1 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void processLine(char* line) { ... }
int main() {

	char* line=NULL;
	size_t size;
	while(getline(&line,&size,stdin) != EOF) {
		processLine(line);
		printf("\n");

	}
	return 0;
}

/* Method 2 */
#include <stdlib.h> /* qsort */
#include <stdio.h> /* scanf, fgets, printf */
/* String and character computation. */
#include <string.h> /* strcmp, strcpy, ... */

char line[82];

while(fgets(line, sizeof(line), stdin)) {
		//printf("%s",line);

		if(*line == '*') {
			num++;
			count=0;
			entries=0;
			continue;
		}
		//printf("num: %d\n",num);
		if(sscanf(line," %c%c%c ",&x,&y,&z) == 3){
			run_test(array,x,y,z);
		}
}


/* Method 3 */

/* Source: CP3.pdf */

#include <stdio.h>
#include <string.h>
int N;
char x[110];
// using global variables in contests can be a good strategy
// make it a habit to set array size a bit larger than needed
int main() {
        scanf("%d\n", &N);
        while (N--) {
                // we simply loop from N, N-1, N-2, ..., 0
                scanf("0.%[0-9]...\n", &x);
                // ‘&’ is optional when x is a char array
                // note: if you are surprised with the trick above,
                // please check scanf details in www.cppreference.com
                printf("the digits are 0.%s\n", x);
        } 
}


/* C++ */

int main()
{
	string str1;
	string str2;

	while((cin >> str1 >> str2)) {
		
		...
	}
}


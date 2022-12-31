#include <stdlib.h> 
#include <stdio.h>

void calculate_days(int month) {
	int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int count; 

	for (count = 1; count <= days[month]; count++) {
		printf(" %d   ", count); 
		if (count % 7 == 0) {
			printf("\n");
		}; 
	};
	printf("\n");
}
	
int main() {
	int year, counter; 
	char buff[5]; 
	char* month[] = { "Jan", "Feb", "March", "April", "May", 
		"June", "Jul", "Aug", "Sept", "Oct", "Nov", "Dec"};

	// Gather user input year 
	printf("Enter year: "); 
	fgets(&buff, 5, stdin); 

	year = atoi(buff); 

	// print months 
	for (counter = 0;  counter < 12; counter++) {
		printf(" =================== %s ======================\n\n", month[counter]);
		calculate_days(counter); 
	}; 

	return 0; 
};
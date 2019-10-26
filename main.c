#include <stdio.h>  // For IO operations
#include <stdlib.h> // for malloc/free

#include "my_bst.h"

void unitTest1() {
	printf("unitTest1\n\n");
	bst_t* test1 = create_bst();
	printf("Attempting to add: 10\n");
	printf("Add return: %d\n", bst_add(test1, 10));
	printf("Count: %d\n", bst_size(test1));
	printf("Sum of tree: %d\n", sum(test1));
	printf("Print in ascending order:\n");
	bst_print(test1, 0);
	printf("Print in descending order:\n");
	bst_print(test1, 1);
	printf("\n");
	printf("Attempting to add: 20\n");
	printf("Add return: %d\n", bst_add(test1, 20));
	printf("Count: %d\n", bst_size(test1));
	printf("Sum of tree: %d\n", sum(test1));
	printf("Print in ascending order:\n");
	bst_print(test1, 0);
	printf("Print in descending order:\n");
	bst_print(test1, 1);
	printf("\n");
	printf("Attempting to add: 15\n");
	printf("Add return: %d\n", bst_add(test1, 15));
	printf("Count: %d\n", bst_size(test1));
	printf("Sum of tree: %d\n", sum(test1));
	printf("Print in ascending order:\n");
	bst_print(test1, 0);
	printf("Print in descending order:\n");
	bst_print(test1, 1);
	printf("\n");
	printf("Attempting to find 16 return: %d\n", find(test1, 16));
	printf("Attempting to find 24 return: %d\n", find(test1, 24));
	printf("Attempting to find 32 return: %d\n", find(test1, 32));
	printf("Attempting to find 110 return: %d\n", find(test1, 110));
	printf("Attempting to find 15 return: %d\n", find(test1, 15));
	printf("Attempting to find 20 return: %d\n", find(test1, 20));
	printf("Attempting to find 10 return: %d\n", find(test1, 10));
	printf("Attempting to find 4 return: %d\n", find(test1, 4));
	printf("Attempting to find 0 return: %d\n", find(test1, 0));
	free_bst(test1);
	printf("\n\n");
}

void unitTest2() {
	printf("unitTest2\n\n");
	bst_t* test2 = create_bst();
	printf("Attempting to add: 20\n");
	printf("Add return: %d\n", bst_add(test2, 20));
	printf("Count: %d\n", bst_size(test2));
	printf("Sum of tree: %d\n", sum(test2));
	printf("Print in ascending order:\n");
	bst_print(test2, 0);
	printf("Print in descending order:\n");
	bst_print(test2, 1);
	printf("\n");
	printf("Attempting to add: 30\n");
	printf("Add return: %d\n", bst_add(test2, 30));
	printf("Count: %d\n", bst_size(test2));
	printf("Sum of tree: %d\n", sum(test2));
	printf("Print in ascending order:\n");
	bst_print(test2, 0);
	printf("Print in descending order:\n");
	bst_print(test2, 1);
	printf("\n");
	printf("Attempting to add: 25\n");
	printf("Add return: %d\n", bst_add(test2, 25));
	printf("Count: %d\n", bst_size(test2));
	printf("Sum of tree: %d\n", sum(test2));
	printf("Print in ascending order:\n");
	bst_print(test2, 0);
	printf("Print in descending order:\n");
	bst_print(test2, 1);
	printf("\n");
	printf("Attempting to add: 27\n");
	printf("Add return: %d\n", bst_add(test2, 27));
	printf("Count: %d\n", bst_size(test2));
	printf("Sum of tree: %d\n", sum(test2));
	printf("Print in ascending order:\n");
	bst_print(test2, 0);
	printf("Print in descending order:\n");
	bst_print(test2, 1);
	printf("\n");
	printf("Attempting to add: 30\n");
	printf("Add return: %d\n", bst_add(test2, 30));
	printf("Count: %d\n", bst_size(test2));
	printf("Sum of tree: %d\n", sum(test2));
	printf("Print in ascending order:\n");
	bst_print(test2, 0);
	printf("Print in descending order:\n");
	bst_print(test2, 1);
	printf("\n");
	printf("Attempting to add: 15\n");
	printf("Add return: %d\n", bst_add(test2, 15));
	printf("Count: %d\n", bst_size(test2));
	printf("Sum of tree: %d\n", sum(test2));
	printf("Print in ascending order:\n");
	bst_print(test2, 0);
	printf("Print in descending order:\n");
	bst_print(test2, 1);
	printf("\n");
	printf("Attempting to find 27 return: %d\n", find(test2, 27));
	printf("Attempting to find 24 return: %d\n", find(test2, 24));
	printf("Attempting to find 20 return: %d\n", find(test2, 20));
	printf("Attempting to find 15 return: %d\n", find(test2, 15));
	printf("Attempting to find 32 return: %d\n", find(test2, 32));
	printf("Attempting to find 30 return: %d\n", find(test2, 30));
	printf("Attempting to find 25 return: %d\n", find(test2, 25));
	printf("Attempting to find 18 return: %d\n", find(test2, 18));
	printf("Attempting to find 5 return: %d\n", find(test2, 5));
	free_bst(test2);
	printf("\n\n");
}

int main() {

	unitTest1();
	unitTest2();

	return 0;

}

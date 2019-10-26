#ifndef MYBST_H
#define MYBST_H

// Create a node data structure to store data within
// our BST. In our case, we will stores 'integers'
typedef struct node {
	int data;
	struct node* rightChild;
	struct node* leftChild;
}node_t;

// Create a BST data structure
// Our BST holds a pointer to the root node in our BST called root.
typedef struct BST {
	int count;		// count keeps track of how many items are in the BST.
	node_t* root;		// root points to the root node in our BST.
}bst_t;

// Creates a BST
// Returns a pointer to a newly created BST.
// The BST should be initialized with data on the heap.
// The BST fields should also be initialized to default values.
bst_t* create_bst() {
	bst_t* myBST = NULL;
	myBST = malloc(sizeof(bst_t));
	myBST->count = 0;
	myBST->root = NULL;
	return myBST;
}

// BST Empty
// Check if the BST is empty
// Returns 1 if true (The BST is completely empty)
// Returns 0 if false (the BST has at least one element enqueued)
int bst_empty(bst_t* t) {
	if(t == NULL) {
		exit(1);
	}
	if (t->count == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

int bst_add_help(node_t* n, int item) {
	if (n->leftChild == NULL && item < n->data) {
		node_t* temp = malloc(sizeof(node_t));
		if (temp == NULL) {
			return -1;
		}
		temp->data = item;
		temp->leftChild = NULL;
		temp->rightChild = NULL;
		n->leftChild = temp;
		return 0;
	}
	if (n->rightChild == NULL && item > n->data) {
		node_t* temp = malloc(sizeof(node_t));
		if (temp == NULL) {
			return -1;
		}
		temp->data = item;
		temp->leftChild = NULL;
		temp->rightChild = NULL;
		n->rightChild = temp;
		return 0;
	}
	if (item < n->data) {
		return bst_add_help(n->leftChild, item);
	}
	else if (item > n->data) {
		return bst_add_help(n->rightChild, item);
	}
	return -1;
}

// Adds a new node containing item in the correct place of the BST.
// If the data is less then the current node we go right, otherwise we go left.
// Same as described in the README.md file. 
// Returns a -1 if the operation fails (otherwise returns 0 on success).
// (i.e. the memory allocation for a new node failed).
// It should run in O(log(n)) time.
int bst_add(bst_t* t, int item) {
	if (t->root == NULL) {
		node_t* temp = malloc(sizeof(node_t));
		if (temp == NULL) {
			return -1;
		}
		temp->data = item;
		temp->leftChild = NULL;
		temp->rightChild = NULL;
		t->root = temp;
		t->count++;
		return 0;
	}
	else {
		int add_help = bst_add_help(t->root, item);
		if(add_help == 0){
			t->count++;
		}
		return add_help;
	}
}

void bst_print_help(node_t* n, int order) {
	if (n != NULL) {
		if (order == 0) {
			bst_print_help(n->leftChild, order);
			printf("%d\n", n->data);
			bst_print_help(n->rightChild, order);
		}
		else {
			bst_print_help(n->rightChild, order);
			printf("%d\n", n->data);
			bst_print_help(n->leftChild, order);
		}
	}
}

// Prints the tree in ascending order if order = 0, otherwise prints in descending order.
// For NULL tree it should print nothing. 
// It should run in O(n) time.
void bst_print(bst_t*t, int order) {
	if (t != NULL) {
		bst_print_help(t->root, order);
	}
}

int sum_help(node_t* n, int total) {
	if (n != NULL) {
		total += n->data + sum_help(n->leftChild, total) + sum_help(n->rightChild, total);
	}
	return total;
}

// Returns the sum of all the nodes in the tree. 
// exits the program for a NULL tree. 
// It should run in O(n) time.
int sum(bst_t *t) {
	if (t == NULL) {
		exit(1);
	}
	else {
		int total = sum_help(t->root, 0);
		return total;
	}
}

int find_help(node_t* n, int value) {
	if (value == n->data) {
		return 1;
	}
	else if (value < n->data) {
		if (n->leftChild == NULL) {
			return 0;
		}
		else {
			return find_help(n->leftChild, value);
		}
	}
	else if (value > n->data) {
		if (n->rightChild == NULL) {
			return 0;
		}
		else {
			return find_help(n->rightChild, value);
		}
	}
	return 0;
}

// Returns 1 if value is found in the tree, 0 otherwise. 
// For NULL tree it exists the program. 
// It should run in O(log(n)) time.
int find(bst_t * t, int value) {
	if (t == NULL) {
		exit(1);
	}
	else {
		return find_help(t->root, value);
	}
}

// BST Size
// Queries the current size of the BST
// A BST that has not been previously created will crash the program.
// (i.e. A NULL BST cannot return the size)
unsigned int bst_size(bst_t* t) {
	if (t == NULL) {
		exit(1);
	}
	else {
		return t->count;
	}
}

void free_bst_help(node_t* n) {
	if (n != NULL) {
		free_bst_help(n->leftChild);
		free_bst_help(n->rightChild);
		free(n);
	}
}

// Free BST
// Removes a BST and ALL of its elements from memory.
// This should be called before the program terminates.
void free_bst(bst_t* t) {
	free_bst_help(t->root);
	free(t);
}


#endif

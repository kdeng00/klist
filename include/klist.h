#include "types.h"

struct node* init_list(void*, size_t);

void* list_element_at(struct node*, int);

int is_list_init(struct node**);
int list_size(struct node**);

void insert_at_begin(struct node**, void*, size_t);
void insert_at_end(struct node**, void*, size_t);
void free_list(struct node**);
void traverse(struct node*, void (*)(struct node*));

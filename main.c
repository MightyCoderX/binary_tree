#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

#include "./binary_tree.h"

int main(/*int argc, char** argv*/) {
    BinaryTree tree = btree_init(10);
    btree_add_child(&tree, 10, LEFT, 20);
    btree_add_child(&tree, 20, LEFT, 15);
    btree_add_child(&tree, 20, RIGHT, 21);
    btree_add_child(&tree, 21, LEFT, 22);

    btree_add_child(&tree, 10, RIGHT, 25);

    printf("depth(10): %lu\n", btree_depth(&tree, 10));
    printf("depth(21): %lu\n", btree_depth(&tree, 21));
    printf("depth(22): %lu\n", btree_depth(&tree, 22));
    printf("height(22): %lu\n", btree_height(&tree, 22));
    printf("height(21): %lu\n", btree_height(&tree, 21));
    printf("height(20): %lu\n", btree_height(&tree, 20));
    printf("height(10): %lu\n", btree_height(&tree, 10));

    btree_pre_order_traversal(tree.root);
    puts("");
    btree_in_order_traversal(tree.root);
    puts("");
    btree_post_order_traversal(tree.root);

    return 0;
}

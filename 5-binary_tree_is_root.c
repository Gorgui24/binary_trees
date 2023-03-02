#include "binary_trees.h"
/**
 * binary_tree_is_root - Where node is a pointer to the node to check
 * @node: is a pointer to the node to check
 * Return: integer
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return (node && !node->parent ? 1 : 0);
}

#include "binary_trees.h"
/**
 * binary_tree_nodes - a function that counts the nodes with at...
 * @tree:  is a pointer to the root node of the tree to...
 * Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);
	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}

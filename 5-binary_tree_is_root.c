#include "binary_trees.h"

/**
 * binary_tree_is_root - Function that checks node
 * @node: Node to check
 * Return: 0 if is not a root 1
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}

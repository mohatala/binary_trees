#include "binary_trees.h"
/**
 * binary_tree_is_full - function that says if a tree is full or not
 * @tree: tree to check
 * Return: 1 if it is
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left && tree->right)
		{
			l = binary_tree_is_full(tree->left);
			r = binary_tree_is_full(tree->right);
			if (l == 0 || r == 0)
			{
				return (0);
			}
			return (1);
		}
		else if (!tree->left && !tree->right)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}

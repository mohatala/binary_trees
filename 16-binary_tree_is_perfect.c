#include "binary_trees.h"
/**
 * tree_is_perfect - function that says if a tree is perfect or not
 * @tree: tree to check
 * Return: 0 if is not a perfect or other number
 */
int tree_is_perfect(const binary_tree_t *tree)
{
	int le = 0, re = 0;

	if (tree->left && tree->right)
	{
		le = 1 + tree_is_perfect(tree->left);
		re = 1 + tree_is_perfect(tree->right);
		if (re == le && re != 0 && le != 0)
			return (re);
		return (0);
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
/**
 * binary_tree_is_perfect - perfect or not a tree
 * @tree: tree to check
 * Return: 1 is it is or 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int res = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		res = tree_is_perfect(tree);
		if (res != 0)
		{
			return (1);
		}
		return (0);
	}
}

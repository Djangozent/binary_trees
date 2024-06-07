#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t let = 0, rit = 0;

		let = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		rit = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		return ((let > rit) ? let : rit);
	}

	return (0);
}

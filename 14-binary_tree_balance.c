#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure
 * the balnce factor
 *
 * Return: 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)

	{
		size_t lefte = 0, rite = 0;

		lefte = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		rite = tree->right ? 1 + binary_tree_height(tree->right) : 1;

		return ((lefte > rite) ? lefte : rite);
	}

	return (0);
}


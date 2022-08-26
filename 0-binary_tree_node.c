#include "binary_trees.h"

/**
 * binary_tree-node - Create a binary tree node
 * @parent: pointer to the parent of the node
 * @value: value of the node
 * Return: binary tree or NULL if fail
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tree;

	tree = malloc(sizeof(binary_tree_t));

	if (tree == NULL){
		return (NULL);
	}

	tree->n = value;
	tree->parent = parent;
	tree->left = NULL;
	tree->right = NULL;

	return (tree);
}
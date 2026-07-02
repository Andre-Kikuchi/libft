/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahideo-k <ahideo-k@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 16:36:05 by ahideo-k          #+#    #+#             */
/*   Updated: 2026/07/02 16:36:05 by ahideo-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c);

static size_t	get_word_len(char const *s, char c);

static void	free_all(char **strs, size_t i);

static int	fill_array(char **array_ptr, char const *s, char c);


char	**ft_split(char const *s, char c)
{
	size_t	total_words;
	char	**array_ptr;

	if (!s)
		return (NULL);
	total_words = count_words(s, c);
	array_ptr = ft_calloc((total_words + 1), sizeof(char *));
	if (!array_ptr)
		return (NULL);
	if (!fill_array(array_ptr, s, c))
		return (NULL);
	return (array_ptr);
}

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			words++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (words);
}

static size_t	get_word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
	{
		len++;
	}
	return (len);
}

static void	free_all(char **strs, size_t i)
{
	while (i > 0)
	{
		i--;
		free(strs[i]);
	}
	free(strs);
}

static int	fill_array(char **array_ptr, char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			array_ptr[j] = ft_substr(s, i, get_word_len(&s[i], c));
			if (!array_ptr[j])
			{
				free_all(array_ptr, j);
				return (0);
			}
			i = i + get_word_len(&s[i], c);
			j++;
		}
	}
	array_ptr[j] = NULL;
	return (1);
}
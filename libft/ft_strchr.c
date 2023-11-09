/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:48:48 by jgavairo          #+#    #+#             */
/*   Updated: 2023/11/09 14:34:51 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (s[i] && s[i] == c)
		return ((char *) s + i);
	else
		return (0);
}

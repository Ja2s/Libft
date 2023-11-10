/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:18:29 by gavairon          #+#    #+#             */
/*   Updated: 2023/11/09 20:24:03 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t  len;
    
    len = ft_strlen(s);

    if(c < 0 || c > 127)
        return((char *)s);
    while(len > 0 && s[len] != c)
        len--;
    if (s[len] == c)
        return ((char *)s + len);
    else
        return (NULL);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/22 18:44:05 by gpetrov           #+#    #+#             */
/*   Updated: 2013/12/22 18:44:06 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

//int main()
//{
//
//	static char	*str = "Un jour je serai, le meilleur dresseur !";
//	printf("res = %s\n", ft_strsub(str, 8, 8));
//	return (0);
//}
//

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	if (s && (int)len > -1)
	{
		i = 0;
		str = (char *)malloc(sizeof(s));
		while (len > 0)
		{
			str[i] = s[start];
			i++;
			start++;
			len--;
		}
		return (str);
	}
	return (0);
}

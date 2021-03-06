/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yharwyn- <yharwyn-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 13:58:45 by yharwyn-          #+#    #+#             */
/*   Updated: 2018/12/20 08:45:49 by yharwyn-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t	i;
	int		start;
	int		end;
	char	*fresh;

	if (s)
	{
		i = 0;
		while (ft_checkws(s[i]))
			i++;
		if (i == ft_strlen(s))
			return (ft_strnew(0));
		start = i;
		i = ft_strlen(s) - 1;
		while (ft_checkws(s[i]))
			i--;
		end = i;
		if (!(fresh = ft_strnew(end - start + 1)))
			return (0);
		i = 0;
		ft_strncpy(fresh, &s[start], (end - start + 1));
		return (fresh);
	}
	return (0);
}

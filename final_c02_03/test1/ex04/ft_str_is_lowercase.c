/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 13:16:37 by smeethon          #+#    #+#             */
/*   Updated: 2022/06/22 13:22:32 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	x;

	x = 0;
	if (str[x] == '\0')
	{
		return (1);
	}
	while (str[x] != '\0')
	{
		if (str[x] >= 'a' && str[x] <= 'z')
			x++;
		else
		{
			return (0);
		}
	}
	return (1);
}

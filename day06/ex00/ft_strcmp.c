/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaquand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 19:52:35 by mlaquand          #+#    #+#             */
/*   Updated: 2019/07/10 21:40:26 by mlaquand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcnp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] == s2[a] && s1[a] != '\0' && s2[a] != '\0' && s2[a] != '\0')
		a++;
	return (s1[a] - s2[a]);
}

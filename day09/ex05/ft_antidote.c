/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaquand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 21:50:38 by mlaquand          #+#    #+#             */
/*   Updated: 2019/07/11 22:02:30 by mlaquand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		ft_anti(int i, int j, int k)
{
	if ((i < j && j < k) || (k < j && j < i))
			return (j);
		else if ((j < k && k < i) || (i < k && k < j))
			return (k);
		else
			return (i);
}

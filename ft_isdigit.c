/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiborroq <kiborroq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:18:11 by kiborroq          #+#    #+#             */
/*   Updated: 2020/11/02 16:18:32 by kiborroq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int ch)
{
	if (ch > 47 && ch < 58)
		return (1);
	return (0);
}
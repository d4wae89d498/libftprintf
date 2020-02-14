/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_fmt_n.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/02/14 11:05:35 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/14 11:47:33 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <libftprintf.h>

char			*ft_fmt_n(t_specifier_state state, va_list ap)
{
	int			*ptr;

	ptr = va_arg(ap, int*);
	*ptr = state.no;
	return (ft_strdup(""));
}
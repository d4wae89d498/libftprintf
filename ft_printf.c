/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/08 08:41:56 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/17 12:44:35 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "./libftprintf.h"

t_list					*ft_register_callable(void)
{
	t_list				*output;

	
}

t_arg						*ft_format(const char *format, va_list args)
{
	t_arg					*output;
	unsigned int			i;

	if (!format)
		return (NULL);

}
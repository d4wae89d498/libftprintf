/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_fmt_s.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/02/07 10:58:37 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/07 11:06:22 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <libftprintf.h>

char			*ft_fmt_s(t_convertor_state state, va_list ap)
{
    char        *output;
    char        *s;
    char        *si;
    int         len;
    int         field_width;
    int         i;
    size_t      strsize;
    char        *str;

    s = va_arg(ap, char *);
    si = s;
    len = ft_strnlen(s, state.precision);
    field_width = state.padding;
    strsize = 0;
    if (!(state.flags.minus))
        while (len < field_width--)
            strsize += 1;
    i = 0;
    while (i < len)
    {
        strsize += 1;
        i += 1;
    }
    while (len < field_width--)
        strsize += 1;
    output = malloc(strsize);
    str = output;
    if (!output)
    {
        return (NULL);
    }
    si = s;
    field_width = state.padding;
    strsize = 0;
    if (!(state.flags.minus))
        while (len < field_width--)
            *str++ = ' ';
    i = 0;
    while (i < len)
    {
        *str++ = *s++;
        i += 1;
    }
    while (len < field_width--)
        *str++ = ' ';
    return (output);
}
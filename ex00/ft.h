/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmehloma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 16:46:56 by mmehloma          #+#    #+#             */
/*   Updated: 2020/06/26 17:03:06 by mmehloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef FT_H

#define FT_H

#include <unistd.h>
#include <stdlib.h>

#define LEN 42

void 	ft_putstr(char *str);

void 	ft_putchar(char a);

void 	ft_putnbr(int a);

void 	ft_strlen(char *str);

char 	*ft_strcpy(char *dest, char *src);

char 	*ft_strncpy(char *dest, char *src, unsigned int n);

int 	ft_strcmp(char *s1, char *s2);

#endif

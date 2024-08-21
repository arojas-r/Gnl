/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 21:25:57 by arojas-r          #+#    #+#             */
/*   Updated: 2024/08/20 21:25:59 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 512
# endif

# if BUFFER_SIZE > 125000 || BUFFER_SIZE < 1
#  undef BUFFER_SIZE
#  define BUFFER_SIZE 512
# endif

# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*extract_line(char *line, char *stash, int *eol_loc, int fd);
char	*init_line(char *stash, int *eol_loc);
size_t	locate_eol(char *line);
size_t	gnl_strlen(const char *s);
void	gnl_bzero(void *s, size_t n);
void	*gnl_memcpy(void *dst, const void *src, size_t n);
char	*gnl_strjoin(char *s1, char *s2, int *eol_loc);
void	gnl_strlcpy(char *dst, const char *src, size_t dstsize);
#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcaraway <kcaraway@student.21-school.r>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 02:39:04 by boomblee          #+#    #+#             */
/*   Updated: 2021/01/02 11:08:28 by kcaraway         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# define BUFFER_SIZE 1

typedef	struct	s_gnl
{
	int			size;
	int			error;
	char		*pointer;
}				t_gnl;

int				get_next_line(int fd, char **line);
char			*ft_strchr(const char *string, int symbol);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strcpy(char *dest, char *src);
char			*ft_strdup(const char *s);
size_t			ft_strlen(const char *str);

#endif

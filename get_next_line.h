/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huozkale <huozkale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 19:09:18 by huozkale          #+#    #+#             */
/*   Updated: 2023/11/04 16:15:08 by huozkale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);
char	*ft_read(int fd, char *buffer);
char	*ft_strchr(char *s, char c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_line(char *buffer);
int		ft_strlen(char *s);
char	*ft_newline(char *buffer);
#endif
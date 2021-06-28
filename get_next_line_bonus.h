/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psleziak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 15:16:47 by psleziak          #+#    #+#             */
/*   Updated: 2021/05/21 17:39:41 by psleziak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include<unistd.h>
# include<stdlib.h>
# include<limits.h>
# include<fcntl.h>

int		get_next_line(int fd, char **line);
int		ft_strlen(char *s1);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strchr(char *s);
void	*ft_calloc(size_t nmemb, size_t size);

#endif

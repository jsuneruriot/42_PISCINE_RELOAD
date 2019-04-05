# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juriot <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/11 17:33:46 by juriot            #+#    #+#              #
#    Updated: 2018/11/11 17:33:48 by juriot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ./display_file.c

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : 
	gcc $(FLAGS) -o $(NAME) $(SRC)

clean :
	rm -f $(OBJECTS)

fclean : clean
	rm -f $(NAME)

re : fclean all

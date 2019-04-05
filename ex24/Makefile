# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juriot <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/28 19:43:46 by juriot            #+#    #+#              #
#    Updated: 2018/02/28 19:43:49 by juriot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c \
./srcs/ft_strlen.c ./srcs/ft_swap.c

OBJECTS = ft_putchar.o ft_swap.o ft_strlen.o ft_strcmp.o ft_putstr.o

HEADER = ./includes/ft.h

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : 
	gcc -c $(FLAGS) $(SRC)
	ar rs $(NAME) $(OBJECTS)

clean :
	rm -f $(OBJECTS)

fclean : clean
	rm -f $(NAME)

re : fclean all
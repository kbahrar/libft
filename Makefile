# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kbahrar <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/28 15:09:45 by kbahrar           #+#    #+#              #
#    Updated: 2019/04/10 19:45:22 by kbahrar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

all:$(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror *.c
	ar rc $(NAME) *.o

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

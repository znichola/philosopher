# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: znichola <znichola@student.42lausanne.ch>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/15 22:18:31 by znichola          #+#    #+#              #
#    Updated: 2022/12/15 22:21:24 by znichola         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	philo

FILES	=	main 

SRC		=	$(addsuffix .c, $(FILES))
OBJ		= 	$(SRC:.c=.o)

PS_SRC	=	../push_swap/
PS_NAME	=	push_swap
PUSH	=	$(PS_SRC)$(push_swap)

INCLUDE	=	philo.h \
			../libft/libft.h \
			../libft/printf/ft_printf.h \
			../libft/get_next_line/get_next_line.h
INC_PAR	=	$(addprefix -I, $(INCLUDE))


CC 		=	gcc
# CFLAGS	=	-Wall -Werror -Wextra
CFLAGS	=	-g
RM		=	rm -f

# submodule
# libft
LIB_DIR	=	../libft
LIB_N	=	libft.a
LIB		=	$(LIB_DIR)/$(LIB_N)

.c.o :
		$(CC) $(CFLAGS) -c $< -o $(@)

all : $(NAME)

$(NAME) : $(LIB) $(OBJ)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(INC_PAR) -L$(LIB_DIR) -lft

bonus :
	

clean :
	$(RM) $(OBJ)
	$(MAKE) -C $(LIB_DIR) clean

fclean : clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIB_DIR) fclean

# # push_swap program
# $(PUSH) :
# 	$(MAKE) -C $(PS_SRC) $(PS_NAME)

re : fclean all

# libft
$(LIB):
		$(MAKE) -C $(LIB_DIR) $(LIB_N)
		cp $(LIB) $(NAME)

.PHONY : all re clean fclean bonus

# .SILENT:
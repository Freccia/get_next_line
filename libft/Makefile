NAME = libft.a

CC = @gcc

CFLAGS = -Wall -Werror -Wextra

SRC = ft_strlen.c\
		ft_strstr.c\
		ft_strcpy.c\
		ft_strdup.c\
		ft_strndup.c\
		ft_strcat.c\
		ft_strcmp.c\
		ft_strncpy.c\
		ft_strncat.c\
		ft_strlcat.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strnstr.c\
		ft_strncmp.c\
		ft_atoi.c\
		ft_atol.c\
		ft_atoll.c\
		ft_itoa_base.c\
		ft_imaxtoa_base.c\
		ft_uimaxtoa_base.c\
		ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_isnbr.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memccpy.c\
		ft_memmove.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memdel.c\
		ft_strnew.c\
		ft_strdel.c\
		ft_strclr.c\
		ft_striter.c\
		ft_striteri.c\
		ft_strmap.c\
		ft_strmapi.c\
		ft_strequ.c\
		ft_strnequ.c\
		ft_strsub.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_strsplit.c\
		ft_itoa.c\
		ft_putchar.c\
		ft_putstr.c\
		ft_putendl.c\
		ft_putnbr.c\
		ft_puttab.c\
		ft_putchar_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_putstr_fd.c\
		ft_memalloc.c\
		ft_free_tab.c\
		ft_lstnew.c\
		ft_lstdelone.c\
		ft_lstdel.c\
		ft_lstadd.c\
		ft_lstiter.c\
		ft_lstmap.c\
		ft_wstrlen.c\
		ft_abs.c\
		ft_swap.c\
		ft_realloc.c\
		ft_getnbr.c\
		ft_getchar.c\
		ft_wchar_size.c\
		ft_nbrlen.c\
		get_next_line.c\
		ft_pow.c

OBJ = $(SRC:.c=.o)

$(NAME) :
	@echo "\x1b[44;32m Making libft \x1b[0m"
	@make $(OBJ)
	@ar -rcs $(NAME) $(OBJ)
	@ranlib $(NAME)

all : $(NAME)

clean :
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME)

re : fclean all


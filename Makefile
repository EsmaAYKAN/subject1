NAME        = class.a

CC          = cc
CFLAGS      = -Wall -Wextra -Werror

AR          = ar rcs
RM          = rm -f

SRCS        = math.c 

OBJS        = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
ARFLAGS = rcs
SRCS = ft_printf.c \
	 ft_print_hex.c \
	 ft_put.c

OBJS =  $(SRCS:.c=.o)
#creating the statico librere
all: $(NAME)
#now we compile the source files (build them and turning them into objects)
#$< means the %.c (requirements) and the $@ means the target which is %.o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
$(NAME): $(OBJS)
	ar $(ARFLAGS) $@ $^
#here we remove the object files (.o) that were created
clean:
	rm -f $(OBJS)
#we just remove the library files here
fclean: clean
	rm -f $(NAME)
#here we rebuild everything, by deleting and redoing all of the steps again
re: fclean all

.PHONY: all clean fclean re


NAME	= RPN
	
CXX		= c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

SRC		= main.cpp RPN.cpp
OBJ		= $(SRC:.cpp=.o)

GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m

all: $(NAME)

$(NAME): $(OBJ)
	@printf "$(CURSIVE)$(GRAY) 	- Compiling $(NAME)... $(RESET)\n"
	@ $(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)
	@printf "$(GREEN)    - Executable is ready.\n$(RESET)"

clean:
	@$(RM) $(OBJ)
	@printf "$(YELLOW)    - Objects are cleaned.$(RESET)\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "$(YELLOW)    - Executable is removed.$(RESET)\n"

re: fclean all

run: all
	./$(NAME)

.PHONY: all clean fclean re
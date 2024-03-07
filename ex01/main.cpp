#include "RPN.hpp"

int main(int ac, char **av)
{
	(void)av;
	if (ac != 2)
		return EXIT_FAILURE;

	try{
		RPN a(av[1]);
		a.start();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
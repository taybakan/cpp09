#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <exception>
# include <cctype>
# include <string>
# include <vector>
# include <map>


class BitcoinExchange
{
	private :
		std::map <std::string, float> data;
		std::string path;
	public :
		BitcoinExchange();
		BitcoinExchange(std::string pathcsv);
		BitcoinExchange(BitcoinExchange const &src);
		BitcoinExchange &operator=(BitcoinExchange const &rhs);
		~BitcoinExchange();

		void func();
		void fillData();
		void printMap();
		void checkBalance();
		std::string checkDate(std::string date);
		std::string findNearestDate(int year, int month, int day);

		std::string getPath() const;
};

#endif
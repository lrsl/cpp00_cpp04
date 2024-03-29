#include "Harl.hpp"

Harl::Harl(void)
{
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void	Harl::debug(void)
{
	std::cout << "[DEBUG] I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO] I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING] I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR] This is unacceptable! I want to speak to the manager now." << std::endl;
}

int	levelDetector(std::string level)
{
	const std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int					detectedLevel = -1;

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
			detectedLevel = i;
	}
	return (detectedLevel);
}

void	Harl::complain(std::string level)
{
	int	detectedLevel = levelDetector(level);
	void	(Harl::*levelFunctions[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	if (detectedLevel == -1)
		std::cout << "Invalid level. Expected level are [DEBUG]/[INFO]/[WARNING]/[ERROR]." << std::endl;
	else
		(this->*levelFunctions[detectedLevel])();
}
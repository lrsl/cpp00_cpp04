#include "Weapon.hpp"

Weapon::Weapon(void)
{
	this->_type = "defaultType";
	return ;
}

Weapon::Weapon(std::string type)
{
	this->_type = type;
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

std::string const	&Weapon::getType(void) const
{
	return (this-> _type);
}

void	Weapon::setType(std::string type)
{
	_type = type;
}
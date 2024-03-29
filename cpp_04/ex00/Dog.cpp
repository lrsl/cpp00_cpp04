/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroussel <rroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:54:29 by rroussel          #+#    #+#             */
/*   Updated: 2024/02/16 09:32:44 by rroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "[Dog constructor called]" << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog)
{
	std::cout << "[Dog copy constructor called]" << std::endl;
	*this = dog;
}

Dog::~Dog()
{
	std::cout << "[Dog destructor called]" << std::endl;
}

Dog	&Dog::operator=(const Dog &dog)
{
	if (this != &dog)
	{
		this->_type = dog._type;
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "*ouaff ouaaaf*" << std::endl;
}

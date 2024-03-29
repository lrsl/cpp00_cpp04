/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroussel <rroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:54:36 by rroussel          #+#    #+#             */
/*   Updated: 2024/02/16 09:31:14 by rroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat(void) : Animal("Cat")
{
	std::cout << "[Cat constructor called]" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal("Cat")
{
	std::cout << "[Cat copy constructor called]" << std::endl;
	*this = cat;
}

Cat::~Cat()
{
	std::cout << "[Cat destructor called]" << std::endl;
}

Cat	&Cat::operator=(const Cat &cat)
{
	if (this != &cat)
	{
		this->_type = cat._type;
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "*miaouu miaouuu*" << std::endl;
}

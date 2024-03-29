/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroussel <rroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:01:54 by rroussel          #+#    #+#             */
/*   Updated: 2024/02/13 16:52:02 by rroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "===== CONSTRUCTION AND COPY =====" << std::endl;
	ClapTrap	clapTrap1("ClapTrap1");
	ScavTrap	scavTrap1("ScavTrap1");
	ScavTrap	scavTrap2;

	clapTrap1.stats();
	scavTrap1.stats();
	scavTrap2.stats();
	scavTrap2 = scavTrap1;
	scavTrap2.stats();
	std::cout << std::endl;

	std::cout << "===== GUARDGATE =====" << std::endl;
	scavTrap1.guardGate();
	scavTrap2.guardGate();
	std::cout << std::endl;

	std::cout << "===== ATTACK / TAKE DAMAGES / DEATH =====" << std::endl;
	clapTrap1.attack("random target");
	scavTrap1.attack("random target");
	scavTrap1.takeDamage(25);
	scavTrap1.stats();
	scavTrap1.attack("random target 2");
	scavTrap1.takeDamage(3);
	scavTrap1.stats();
	scavTrap1.takeDamage(75);
	scavTrap1.stats();
	scavTrap1.attack ("random target 3");
	scavTrap1.beRepaired(5);
	std::cout << std::endl;

	std::cout << "===== REPARATION / NO ENERGY =====" << std::endl;
	scavTrap2.stats();
	scavTrap2.takeDamage(60);
	scavTrap2.stats();
	scavTrap2.beRepaired(10);
	scavTrap2.stats();
	scavTrap2.beRepaired(20);
	scavTrap2.stats();
	for (int i = 0; i < 47; i++)
	{
		scavTrap2.attack("another target");
	}
	scavTrap2.stats();
	scavTrap2.attack("another target");
	scavTrap2.beRepaired(3);
	std::cout << std::endl;

	std::cout << "===== DESTRUCTION =====" << std::endl;
}

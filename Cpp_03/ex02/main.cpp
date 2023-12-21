/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <vfrants@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:27:45 by vfrants           #+#    #+#             */
/*   Updated: 2023/12/21 17:37:17 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

void	log( const ClapTrap &ct )
{
	std::cout << "\nLog from main: " << ct << "\n" << std::endl;
}

void	log( const ScavTrap &ct )
{
	std::cout << "\nLog from main: " << ct << "\n" << std::endl;
}

void	log( const FragTrap &ct )
{
	std::cout << "\nLog from main: " << ct << "\n" << std::endl;
}

int	main( void )
{
	std::cout << " ----------- Test 1 -----------\n" << std::endl;
	{
		ClapTrap	bob( "Dony" );

		log(bob);
		bob.attack("Rat");
		log(bob);
		bob.takeDamage( 5 );
		log(bob);
		for (int i = 0; i < 10; i++)
			bob.attack( "Rat" );
		log(bob);
		bob.beRepaired( 10 );
		log(bob);
		// bob.guardGate();
	}
	std::cout << "\n ----------- Test 2 -----------\n" << std::endl;
	{
		ScavTrap	bob( "Mike" );

		log(bob);
		bob.attack("Rat");
		log(bob);
		bob.takeDamage( 5 );
		log(bob);
		for (int i = 0; i < 10; i++)
			bob.attack( "Rat" );
		log(bob);
		bob.beRepaired( 10 );
		log(bob);
		bob.guardGate();
		log(bob);
	}
	std::cout << "\n ----------- Test 3 -----------\n" << std::endl;
	{
		FragTrap	bob( "Raf" );

		log(bob);
		bob.attack("Rat");
		log(bob);
		bob.takeDamage( 5 );
		log(bob);
		for (int i = 0; i < 10; i++)
			bob.attack( "Rat" );
		log(bob);
		bob.beRepaired( 10 );
		log(bob);
		bob.highFivesGuys();
		log(bob);
	}
	std::cout << "\n ----------- Test 4 -----------\n" << std::endl;
	{
		ClapTrap	*bob = new FragTrap("Leo");

		log(*bob);
		bob->attack("Rat");
		log(*bob);
		bob->takeDamage( 5 );
		log(*bob);
		for (int i = 0; i < 10; i++)
			bob->attack( "Rat" );
		log(*bob);
		bob->beRepaired( 10 );
		log(*bob);
		// bob->highFivesGuys();
		// log(*bob);
		delete bob;
	}
	return (0);
}

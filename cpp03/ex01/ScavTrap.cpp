/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenoist <ebenoist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 17:05:02 by ebenoist          #+#    #+#             */
/*   Updated: 2025/12/03 17:18:24 by ebenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	this-> Hit_points = 100;
	this-> Energy_points = 50;
	this-> Attack_damage = 20;
	std::cout << "ScavTrap default constructor called for " << _name << std::endl;
	
}

ScavTrap::~ScavTrap()
{
	
}

ScavTrap::ScavTrap (const ScavTrap& other)
{

}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	
}
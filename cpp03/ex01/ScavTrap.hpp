/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenoist <ebenoist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 15:51:34 by ebenoist          #+#    #+#             */
/*   Updated: 2025/12/03 17:11:46 by ebenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

public: 
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap (const ScavTrap& other);
	ScavTrap& operator=(const ScavTrap& other);

private:

};

#endif
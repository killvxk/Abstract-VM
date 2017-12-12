/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OperandFactory.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmarinh <frmarinh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 13:39:47 by frmarinh          #+#    #+#             */
/*   Updated: 2017/12/12 13:39:57 by frmarinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OperandFactory.hpp"

IOperand const *OperandFactory::createInt8(std::string const &value) const
{
	return (NULL);
}

IOperand const *OperandFactory::createInt16(std::string const &value) const
{
	return (NULL);
}

IOperand const *OperandFactory::createInt32(std::string const &value) const
{
	return (NULL);
}

IOperand const *OperandFactory::createFloat(std::string const &value) const
{
	return (NULL);
}

IOperand const *OperandFactory::createDouble(std::string const &value) const
{
	return (NULL);
}

IOperand const *OperandFactory::createOperand(eOperandType type, std::string const& value) const
{
	return (NULL);
}

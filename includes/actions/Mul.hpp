/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Add.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoureu- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 02:39:57 by dmoureu-          #+#    #+#             */
/*   Updated: 2017/12/15 07:49:17 by dmoureu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUL_HPP
# define MUL_HPP

#include "All.hpp"

class Handler;
class Mul
{
	public:
	 static void Handle(std::vector<std::string> line, Handler *handler);
	 struct MulStackTooSmall : public std::logic_error {
	   MulStackTooSmall(const std::string& str) : std::logic_error(str) {}
	};
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Add.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoureu- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 02:39:57 by dmoureu-          #+#    #+#             */
/*   Updated: 2017/12/15 11:12:11 by dmoureu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADD_HPP
# define ADD_HPP

#include "All.hpp"

class Handler;
class Add
{
	public:
	 static void Handle(std::vector<std::string> line, Handler *handler);
	 struct AddStackTooSmall : public std::logic_error {
	   AddStackTooSmall(const std::string& str) : std::logic_error(str) {}
	};
};
#endif

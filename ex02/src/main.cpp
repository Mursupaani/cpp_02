/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpollan <anpollan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 10:26:20 by anpollan          #+#    #+#             */
/*   Updated: 2026/02/10 10:26:22 by anpollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	{
		Fixed a(3);
		Fixed b(4);
		Fixed c = a;

		std::cout << a << " > " << b << " : " << (a > b) << std::endl;
		std::cout << a << " < " << b << " : " << (a < b) << std::endl;
		std::cout << a << " >= " << b << " : " << (a >= b) << std::endl;
		std::cout << a << " <= " << b << " : " << (a <= b) << std::endl;
		std::cout << a << " == " << b << " : " << (a == b) << std::endl;
		std::cout << a << " != " << b << " : " << (a != b) << std::endl;
		std::cout << a << " > " << c << " : " << (a > c) << std::endl;
		std::cout << a << " < " << c << " : " << (a < c) << std::endl;
		std::cout << a << " >= " << c << " : " << (a >= c) << std::endl;
		std::cout << a << " <= " << c << " : " << (a <= c) << std::endl;
		std::cout << a << " == " << c << " : " << (a == c) << std::endl;
		std::cout << a << " != " << c << " : " << (a != c) << std::endl;
		std::cout << a << " + " << b << " = " << (a + b) << std::endl;
		std::cout << a << " - " << b << " = "  << (a - b) << std::endl;
		std::cout << a << " * " << b << " = "  << (a * b) << std::endl;
		std::cout << a << " / " << b << " = "  << (a / b) << std::endl;
	}
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		Fixed c = 10;
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
		std::cout << Fixed::min( a, b ) << std::endl;
		std::cout << Fixed::min(a, c) << std::endl;
		std::cout << Fixed::min(a, c)++ << std::endl;
		std::cout << Fixed::min(a, c) << std::endl;
		std::cout << ++Fixed::min(a, c) << std::endl;
		std::cout << Fixed::min(a, c) << std::endl;
	}
	return (EXIT_SUCCESS);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpollan <anpollan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 10:26:20 by anpollan          #+#    #+#             */
/*   Updated: 2026/02/17 15:19:41 by anpollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsp.hpp"

int	main(void)
{
	Point a{0.0f, 0.0f};
	Point b{5.0f, 0.0f};
	Point c{0.0f, 5.0f};
	Point point0{1.0f, 1.0f};
	Point point1{0.01, 0.01f};
	Point point2{4.9f, 0.01f};
	Point point3{0.0f, 4.99f};
	Point point4{0.0f, -0.01f};
	Point point5{-0.01, 0.01f};
	Point point6{4.99f, -0.01f};
	Point point7{-0.01f, 4.99f};

	std::cout << bsp(a, b, c, point0) << std::endl;
	std::cout << bsp(a, b, c, point1) << std::endl;
	std::cout << bsp(a, b, c, point2) << std::endl;
	std::cout << bsp(a, b, c, point3) << std::endl;
	std::cout << bsp(a, b, c, point4) << std::endl;
	std::cout << bsp(a, b, c, point5) << std::endl;
	std::cout << bsp(a, b, c, point6) << std::endl;
	std::cout << bsp(a, b, c, point7) << std::endl;
	return (EXIT_SUCCESS);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler < aaguiler@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 21:14:33 by aaguiler          #+#    #+#             */
/*   Updated: 2023/02/11 21:19:01 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// void ft_leaks(void)
// {
//   system("leaks -q a.out");
// }

int main(void)
{
  Span sp = Span(5);
  sp.addNumber(5);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);
  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;

  try
  {
    sp.addNumber(11);
  }
  catch (std::exception &e)
  {
    std::cout << e.what() << std::endl;
  }

  try
  {
    Span sp2 = Span(1);
    sp2.addNumber(11);
    std::cout << sp2.shortestSpan() << std::endl;
    std::cout << sp2.longestSpan() << std::endl;
  }
  catch (std::exception &e)
  {
    std::cout << e.what() << std::endl;
  }

  Span sp3 = Span(1000000);
  for (int i = 0; i < 1000000; i++)
    sp3.addNumber(i);
  std::cout << sp3.shortestSpan() << std::endl;
  std::cout << sp3.longestSpan() << std::endl;
  return 0;
}
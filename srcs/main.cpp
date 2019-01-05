/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delay <cpieri@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 14:07:12 by delay             #+#    #+#             */
/*   Updated: 2019/01/05 21:06:52 by delay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "emulate.hpp"

int		main(void)
{
	setup();
	while (gb.display.get_loop())
	{
		loop();
		if (gb.get_event_type() == SDL_QUIT)
			gb.display.set_loop(0);
		gb.display.present();
	}
	return (0);
}

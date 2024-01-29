/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: holee <holee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 19:01:18 by holee             #+#    #+#             */
/*   Updated: 2020/10/20 20:33:31 by holee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		main(int argc, char *argv[])
{
    if (argc == 3)
    {
	    rush(atoi(argv[1]), atoi(argv[2]));
    }
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoares- <ssoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 21:09:50 by ssoares-          #+#    #+#             */
/*   Updated: 2022/04/10 23:30:19 by ssoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	largura;
	int	altura;

	altura = 1;
	while (altura <= y)
	{
		largura = 1;
		while (largura <= x)
		{
			if (altura == 1 && (largura == 1 || largura == x))
				ft_putchar('A');
			else if (altura == y && (largura == 1 || largura == x))
				ft_putchar('C');
			else if (largura == 1 || largura == x || altura == 1 || altura == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
			largura++;
		}
		ft_putchar('\n');
		altura++;
	}
}

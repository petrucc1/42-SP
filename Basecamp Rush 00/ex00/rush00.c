/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupaulo- <lupaulo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 03:14:10 by lupaulo-          #+#    #+#             */
/*   Updated: 2022/04/10 03:24:04 by lupaulo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	primeira_e_ultima_linha(int largura)
{
	int		coluna;

	coluna = 1;
	while (coluna <= largura)
	{
		if (coluna == 1)
			ft_putchar('o');
		else if (coluna < largura)
			ft_putchar('-');
		else
			ft_putchar('o');
		coluna++;
	}
	ft_putchar('\n');
}

void	linha_do_meio(int largura)
{
	int		coluna;

	coluna = 1;
	while (coluna <= largura)
	{
		if (coluna == 1 || coluna == largura)
			ft_putchar('|');
		else
			ft_putchar(' ');
		coluna++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int		linha;

	linha = 1;
	while (linha <= y)
	{
		if (linha == 1 || linha == y)
			primeira_e_ultima_linha(x);
		else
			linha_do_meio(x);
		linha++;
	}
}

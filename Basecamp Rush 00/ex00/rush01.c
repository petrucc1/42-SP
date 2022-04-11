/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroteia <vde-paul@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 22:49:16 by viroteia          #+#    #+#             */
/*   Updated: 2022/04/09 23:22:46 by viroteia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	primeira_linha(int largura)
{
	int		coluna;

	coluna = 1;
	while (coluna <= largura)
	{
		if (coluna == 1)
			ft_putchar('/');
		else if (coluna < largura)
			ft_putchar('*');
		else
			ft_putchar('\\');
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
			ft_putchar('*');
		else
			ft_putchar(' ');
		coluna++;
	}
	ft_putchar('\n');
}

void	ultima_linha(int largura)
{
	int		coluna;

	coluna = 1;
	while (coluna <= largura)
	{
		if (coluna == 1)
			ft_putchar('\\');
		else if (coluna < largura)
			ft_putchar('*');
		else
			ft_putchar('/');
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
		if (linha == 1)
			primeira_linha(x);
		else if (linha == y)
		{
			ultima_linha(x);
		}
		else
			linha_do_meio(x);
		linha++;
	}
}

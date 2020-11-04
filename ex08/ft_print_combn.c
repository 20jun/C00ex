#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	if (n == 1)

	else
	{
	int a;

	a = 0;
	while (a <= 9)
	{
		ft_putchar(48 + a % 10);
		if (a != 9)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		a++;
	}
	ft_print_combn(n - 1);
	}
}

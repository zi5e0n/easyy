#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
		ft_putnbr(nb);
	}
	else
	{
		if (nb >= 10)
			ft_putnbr(nb / 10);
		c = nb % 10 + '0';
		write(1, &c, 1);
	}
}

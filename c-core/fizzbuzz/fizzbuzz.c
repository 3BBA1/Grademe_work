#include <unistd.h>

#include <unistd.h>

void	put_number(int n)
{
	int i;
	long nb;
	char str[11];

	i = 0;
	nb = n;
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if(n < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	while(n > 0)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	while(i--)
	write(1, &str[i], 1);
}
int	main()
{
	int i = 1;
	
	while(i <= 100)
	{
		if(i % 15 == 0)
		{
			write(1, "FizzBuzz\n", 9);
		}
		else if(i % 3 == 0)
		{
			write(1, "Fizz\n", 5);
		}
		else if(i % 5 == 0)
		{
			write(1, "Buzz\n", 5);
		}
		else
		{
			put_number(i);
			write(1, "\n", 1);
		}
		i++;
	}
}
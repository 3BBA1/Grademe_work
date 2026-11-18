long	abs_safe( int n)
{
	long nb = n;
	if (nb <= -1)
	{
		return (nb * -1);
	}
	return nb;
}

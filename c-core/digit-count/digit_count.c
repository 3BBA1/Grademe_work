// Count the decimal digits of n, sign excluded, with zero written as one digit.
// Every int is a valid n, INT_MIN included.
int	digit_count(int n)
{
	int count;
	
	count = 0;
	
	if(n == 0)
	return 1;
	
	while(n != 0)
	{
		count++;
		n = n / 10;
	}
	return count;
}

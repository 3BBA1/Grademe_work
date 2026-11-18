int	fits_in_int(long value)
{
	if( value >= -2147483648  && value <= 2147483647)
	return 1;

	return 0;
}

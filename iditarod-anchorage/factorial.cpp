int factorial_loop(int n)
{
	int result = 1;
	while (n>0)
	{
		result *= n;
		n--;
	}
	return result;
}
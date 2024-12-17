int	main( void )
{
	int	n = 16;
	int	n_neg = -5;
	int	n_max = INT_MAX;
	int	n_min = INT_MIN;
	unsigned int un = 16;
	unsigned int un_max = UINT_MAX;
	unsigned int un_zero = 0;
	char o = 0;
	char c = 'c';
	char nl = '\n';
	char s[] = "Bonjour je suis une string";
	char s_vide[2] = {0};
	char *p_null = NULL;
	void *p = ft_printf;

	
	if (ft_printf("test int : %d %d %d %d\n", n, n_neg, n_max, n_min) != printf("test int : %d %d %d %d\n", n, n_neg, n_max, n_min))
		printf(">>> KO <<<\n");
	if (ft_printf("test hexa : %x %x %x %x\n", n, n_neg, n_max, n_min) != printf("test hexa : %x %x %x %x\n", n, n_neg, n_max, n_min))
		printf(">>> KO <<<\n");
	if (ft_printf("test hexa : %X %X %X %X\n", n, n_neg, n_max, n_min) != printf("test hexa : %X %X %X %X\n", n, n_neg, n_max, n_min))
		printf(">>> KO <<<\n");
	if (ft_printf("test uint: %u %u %u \n", un, un_max, un_zero) != printf("test uint: %u %u %u \n", un, un_max, un_zero))
		printf(">>> KO <<<\n");
	if (ft_printf("%c %c nl->%c\n", o, c, nl) != printf("%c %c nl->%c\n", o, c, nl))
		printf(">>> KO <<<\n");
	if (ft_printf("%s %s\n", s, s_vide) != printf("%s %s\n", s, s_vide))
		printf(">>> KO <<<\n");
	ft_printf("NULL->%s\n", NULL);
	if (ft_printf("%p %p\n", p_null, p) != printf("%p %p\n", p_null, p))
		printf(">>> KO <<<\n");
	printf("ret(0) == %d\n", ft_printf(0));
}

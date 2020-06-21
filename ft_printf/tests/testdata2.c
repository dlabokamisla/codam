#include <stdio.h>
#include "ft_printf.h"
#include "inttypes.h"
#include <stdarg.h>
#include <limits.h>

int main()
{
	printf("1|%.d|\n", 0);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("1|%.d|\n", 0);
	printf("%s\n", "====================================================");

	printf("2|%0.0d|\n", 0);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("2|%0.0d|\n", 0);
	printf("%s\n", "====================================================");

	printf("3|%0.1d|\n", 0);
	
	printf("%s\n", "----------------------------------------------------");
	ft_printf("3|%0.1d|\n", 0);
	printf("%s\n", "====================================================");

	printf("4|%1.0d|\n", 0);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("4|%1.0d|\n", 0);
	printf("%s\n", "====================================================");

	printf("5|%3d|\n", 0);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("5|%3d|\n", 0);
	printf("%s\n", "====================================================");

	printf("6|%-5d|\n", 0);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("6|%-5d|\n", 0);
	printf("%s\n", "====================================================");

	printf("7|%3.0d|\n", 0);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("7|%3.0d|\n", 0);
	printf("%s\n", "====================================================");

	printf("8|%3.1d|\n", 0);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("8|%3.1d|\n", 0);
	printf("%s\n", "====================================================");

	printf("9|%3.1d|\n", 0);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("9|%3.1d|\n", 0);
	printf("%s\n", "====================================================");

	printf("5|%3.1s|\n", NULL);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("5|%3.1s|\n", NULL);
	printf("%s\n", "====================================================");

	printf("6|%-3.1s|\n", NULL);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("6|%-3.1s|\n", NULL);
	printf("%s\n", "====================================================");

	printf("5|%2.4s|\n", NULL);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("5|%2.4s|\n", NULL);
	printf("%s\n", "====================================================");

	printf("6|%-2.4s|\n", NULL);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("6|%-2.4s|\n", NULL);
	printf("%s\n", "====================================================");

	printf("1|%*i%|\n", 5, -10);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("1|%*i%|\n", 5, -10);
	printf("%s\n", "====================================================");

	printf("2|%.09s|\n", NULL);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("2|%.09s|\n", NULL);
	printf("%s\n", "====================================================");

	printf("3|%.03s|\n", NULL);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("3|%.03s|\n", NULL);
	printf("%s\n", "====================================================");

	printf("4|%.03s|\n", "slobodata e cena");
	printf("%s\n", "----------------------------------------------------");
	ft_printf("4|%.03s|\n", "slobodata e cena");
	printf("%s\n", "====================================================");

	printf("5|%3.1s|\n", NULL);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("5|%3.1s|\n", NULL);
	printf("%s\n", "====================================================");

	printf("5|%3.1s|\n", "(null)");
	printf("%s\n", "----------------------------------------------------");
	ft_printf("5|%3.1s|\n", "(null)");
	printf("%s\n", "====================================================");

	printf("6|%-3.1s|\n", NULL);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("6|%-3.1s|\n", NULL);
	printf("%s\n", "====================================================");

	printf("7|%3.1s|\n", "slobodata");
	printf("%s\n", "----------------------------------------------------");
	ft_printf("7|%3.1s|\n", "slobodata");
	printf("%s\n", "====================================================");

	printf("8|%-3.1s|\n", "slobodata");
	printf("%s\n", "----------------------------------------------------");
	ft_printf("8|%-3.1s|\n", "slobodata");
	printf("%s\n", "====================================================");

	printf("9|%-3s|\n", "(null)");
	printf("%s\n", "----------------------------------------------------");
	ft_printf("9|%-3s|\n", "(null)");
	printf("%s\n", "====================================================");

	printf("2|%-10s|\n", NULL);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("2|%-10s|\n", NULL);
	printf("%s\n", "====================================================");

	printf("3|%10.20s|\n", NULL);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("3|%10.20s|\n", NULL);
	printf("%s\n", "====================================================");

	printf("4|%20.10s|\n", NULL);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("4|%20.10s|\n", NULL);
	printf("%s\n", "====================================================");

	printf("5|%-30.10s|\n", NULL);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("5|%-30.10s|\n", NULL);
	printf("%s\n", "====================================================");

	printf("6|%-10.30s|\n", NULL);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("6|%-10.30s|\n", NULL);
	printf("%s\n", "====================================================");

	printf("7|%.10s|\n", NULL);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("7|%.10s|\n", NULL);
	printf("%s\n", "====================================================");

	printf("8|%-30.s|\n", NULL);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("8|%-30.s|\n", NULL);
	printf("%s\n", "====================================================");

	printf("|%c|\n", NULL);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("|%c|\n", NULL);
	printf("%s\n", "====================================================");

	printf("|%d|\n", NULL);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("|%d|\n", NULL);
	printf("%s\n", "====================================================");

	int a = 2;
	printf("|%p|\n", 0);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("|%p|\n", 0);
	printf("%s\n", "====================================================");

	printf("|%x|\n", NULL);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("|%x|\n", NULL);
	printf("%s\n", "====================================================");

	printf("|%b|\n", NULL);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("|%b|\n", NULL);
	printf("%s\n", "====================================================");
	
	printf("|%%%%|\n", 20);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("|%%%%|\n", 20);

	printf("%s\n", "====================================================");
	printf("|%%d734%%%%i%|\n");
	printf("%s\n", "----------------------------------------------------");
	ft_printf("|%%d734%%%%i%|\n");

	printf("%s\n", "====================================================");
	printf("|%%%d|\n", 20);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("|%%%d|\n", 20);
	printf("%s\n", "====================================================");

	printf("|%#$%|\n");
	printf("%s\n", "----------------------------------------------------");
	ft_printf("|%#$%|\n");
	printf("%s\n", "====================================================");

	printf("|%#3|\n");
	printf("%s\n", "----------------------------------------------------");
	ft_printf("|%#3|\n");
	printf("%s\n", "====================================================");

	printf("|%d|\n", 156);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("|%d|\n", 156);
	printf("%s\n", "====================================================");

	printf("|hello, %s.\n|", NULL);
	printf("%s\n", "----------------------------------------------------");
    ft_printf("|hello, %s.\n|", NULL);
    printf("%s\n", "====================================================");

    printf("1|%-8.3d|\n", -8473);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("1|%-8.3d|\n", -8473);
	printf("%s\n", "====================================================");

	printf("1|%-08.3d|\n", -8473);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("1|%-08.3d|\n", -8473);
	printf("%s\n", "====================================================");

	printf("1|%-5.d|\n", 0);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("1|%-5.d|\n", 0);
	printf("%s\n", "====================================================");

	printf("1|%.d|\n", 0);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("1|%.d|\n", 0);
	printf("%s\n", "====================================================");

	printf("2|%0.0d|\n", 0);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("2|%0.0d|\n", 0);
	printf("%s\n", "====================================================");

	printf("3|%0.1d|\n", 0);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("3|%0.1d|\n", 0);
	printf("%s\n", "====================================================");

	printf("4|%1.0d|\n", 0);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("4|%1.0d|\n", 0);
	printf("%s\n", "====================================================");

	printf("5|%3d|\n", 0);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("5|%3d|\n", 0);
	printf("%s\n", "====================================================");

	printf("6|%-5d|\n", 0);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("6|%-5d|\n", 0);
	printf("%s\n", "====================================================");

	printf("7|%3.0d|\n", 0);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("7|%3.0d|\n", 0);
	printf("%s\n", "====================================================");

	printf("8|%3.1d|\n", 0);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("8|%3.1d|\n", 0);
	printf("%s\n", "====================================================");

	printf("9|%3.1d|\n", 0);
	printf("%s\n", "----------------------------------------------------");
	ft_printf("9|%3.1d|\n", 0);
	printf("%s\n", "====================================================");

	printf("|%5%|");
    ft_printf("|%5%|");
    printf("\n");
    printf("|%-5%|");
    ft_printf("|%-5%|");
    printf("\n");
    printf("|%05%|");
    ft_printf("|%05%|");
    printf("\n");
    printf("|%-05%|");
    ft_printf("|%-05%|");
    printf("\n");
    printf("|hello, %s.|", NULL);
    ft_printf("|hello, %s.|", NULL);
    printf("\n");
    printf("|%s|", NULL);
    ft_printf("|%s|", NULL);
    printf("\n");
    printf("1|%32s|", NULL);
    printf("\n");
    ft_printf("1|%32s|", NULL);
    printf("\n");
    printf("2|%2s|\n", NULL);
    ft_printf("2|%2s|\n", NULL);
    printf("\n");
    printf("3|%-32s|\n", NULL);
    ft_printf("3|%-32s|", NULL);
    printf("\n");
    printf("4|%-16s|\n", NULL);
    ft_printf("4|%-16s|", NULL);
    printf("\n");
    printf("5|%-3s|\n", NULL);
    ft_printf("5|%-3s|", NULL);
    printf("\n");
    printf("6|%.03s|\n", NULL);
    ft_printf("6|%.03s|", NULL);
    printf("\n");
    printf("7|%.09s|\n", NULL);
    ft_printf("7|%.09s|\n", NULL);
    printf("\n");
    printf("8|%3.s|\n", NULL);
    ft_printf("8|%3.s|\n", NULL);
    printf("\n");
     printf("9|%10.s|\n", NULL);
    ft_printf("9|%10.s|\n", NULL);
    printf("\n");
    printf("10|%-3.s|\n", NULL);
    ft_printf("10|%-3.s|\n", NULL);
    printf("\n");
    printf("11|%-8.s|\n", NULL);
    ft_printf("11|%-8.s|\n", NULL);
    printf("\n");
    printf("12|%3.1s|\n", NULL);
    ft_printf("12|%3.1s|\n", NULL);
    printf("\n");
    printf("13|%-3.1s|\n", NULL);
    ft_printf("13|%-3.1s|\n", NULL);
    printf("\n");
    printf("14|%9.1s|\n", NULL);
    ft_printf("14|%9.1s|\n", NULL);
    printf("\n");
    printf("15|%-9.1s|\n", NULL);
    ft_printf("15|%-9.1s|\n", NULL);
    printf("\n");
    printf("16|%3.6s|\n", NULL);
    ft_printf("16|%3.6s|\n", NULL);
    printf("\n");
    printf("17|%20.6s|\n", NULL);
    ft_printf("17|%20.6s|\n", NULL);
    printf("\n");
    printf("18|%3.8s|\n", NULL);
    ft_printf("18|%3.8s|\n", NULL);
    printf("\n");
    printf("19|%-10.8s|\n", NULL);
    ft_printf("19|%-10.8s|\n", NULL);
    printf("\n");
    printf("\n");
    printf("1|this %i number|\n", -267);
    ft_printf("1|this %i number|\n", -267);
    printf("\n");
    printf("1|%i|\n", -1);
    ft_printf("1|%i|\n", -1);
    printf("\n");
    printf("2|this %d number|\n", -267);
    ft_printf("2|this %d number|\n", -267);
    printf("\n");
    printf("3|%7i|\n", -14);
    ft_printf("3|%7i|\n", -14);
    printf("\n");
    printf ("4|%5i|\n", -2562);
    ft_printf ("4|%5i|\n", -2562);
    printf("\n");
    printf("5|%4i|\n", -2464);
    ft_printf("5|%4i|\n", -2464);
    printf("\n");
    printf("6|%-8.3i|\n", -2464);
    ft_printf("6|%-8.3i|\n", -2464);
    printf("\n");
    printf("7|%0-8.3i|\n", -8473);
    ft_printf("7|%0-8.3i|\n", -8473);
    printf("\n");
    printf("8|%.0i|\n", -8473);
    ft_printf("8|%.0i|\n", -8473);
    printf("\n");
    printf("9|%.i|\n", 0);
    ft_printf("9|%.i|\n", 0);
    printf("\n");
    printf("10|%5.0i|\n", 0);
    ft_printf("10|%5.0i|\n", 0);
    printf("\n");
    printf("11|%-5.0i|\n", 0);
    ft_printf("11|%-5.0i|\n", 0);
    printf("\n");
    printf("12|%-5.i|\n", 0);
    ft_printf("12|%-5.i|\n", 0);
    printf("\n");
    printf("13|this %d number|\n", -267);
    ft_printf("13|this %d number|\n", -267);
    printf("\n");
    printf("14|%d|\n", -1);
    ft_printf("14|%d|\n", -1);
    printf("\n");
    printf("15|%7d|\n", -14);
    ft_printf("15|%7d|\n", -14);
    printf("\n");
    printf("16|%5d|\n", -2562);
    ft_printf("16|%5d|\n", -2562);
    printf("\n");
    printf("17|%4d|\n", -2464);
    ft_printf("17|%4d|\n", -2464);
    printf("\n");
    printf("18|%-8.3d|\n", -8473);
    ft_printf("18|%-8.3d|\n", -8473);
    printf("\n");
    printf("19|%0-8.3d|\n", -8473);
    ft_printf("19|%0-8.3d|\n", -8473);
    printf("\n");
    printf("20|%.0d|\n", 0);
    ft_printf("20|%.0d|\n", 0);
    printf("\n");
    printf("21|%.d|\n", 0);
    ft_printf("21|%.d|\n", 0);
    printf("\n");
    printf("22|%5.0d|\n", 0);
    ft_printf("22|%5.0d|\n", 0);
    printf("\n");
    printf("23|%5.d|\n", 0);
    ft_printf("23|%5.d|\n", 0);
    printf("\n");
    printf("24|%-5.0d|\n", 0);
    ft_printf("24|%-5.0d|\n", 0);
    printf("\n");
    printf("25|%-5.d|\n", 0);
    ft_printf("25|%-5.d|\n", 0);
    printf("\n");
     printf("25|%05.d|\n", 0);
    ft_printf("25|%05.d|\n", 0);
    printf("\n");
    printf("26|%08.15d|\n", 34);
    ft_printf ("26|%08.15d|\n", 34);
    printf("\n");
    printf("26|%08.15u|\n", 34);
    ft_printf ("26|%08.15u|\n", 34);
    printf("\n");
    printf("27|%08.5u|\n", 34);
    ft_printf ("27|%08.5u|\n", 34);
    printf("\n");
    printf("|%08.15u|\n", 0);
    ft_printf ("|%08.15u|\n", 0);
    printf("\n");
    printf("|%08.5u|\n", 0);
    ft_printf ("|%08.5u|\n", 0);
    printf("\n");
    printf("|%08.3u|\n", 8375);
    ft_printf ("|%08.3u|\n", 8375);
    printf("\n");
    printf("|%.0u|\n", 0);
    ft_printf ("|%.0u|\n", 0);
    printf("\n");
    printf("|%.u|\n", 0);
    ft_printf("|%.u|\n", 0);
    printf("\n");
    printf("|%5.u|\n", 0);
    ft_printf("|%5.u|\n", 0);
    printf("\n");
     printf("|%-5.u|\n", 0);
    ft_printf("|%-5.u|\n", 0);
    printf("\n");
    printf("|%-5.0u|\n", 0);
    ft_printf("|%-5.0u|\n", 0);
    printf("\n");
    printf("|%5.0u|\n", 0);
    ft_printf("|%5.0u|\n", 0);
    printf("\n");
    
    printf("|%8.5x|\n", 34);
    ft_printf("|%8.5x|\n", 34);
    printf("\n");
     printf("|%8.5x|\n", 0);
    ft_printf("|%8.5x|\n", 0);
    printf("\n");
    printf("|%2.7x|\n", 3267);
    ft_printf("|%2.7x|\n", 3267);
    printf("\n");
    printf("|%-8.5x|\n", 34);
    ft_printf("|%-8.5x|\n", 34);
    printf("\n");
    printf("|%-2.7x|\n", 3267);
    ft_printf("|%-2.7x|\n", 3267);
    printf("\n");
    printf("|%08.5x|\n", 0);
    ft_printf("|%08.5x|\n", 0);
    printf("\n");
    printf("|%08.3x|\n", 8375);
    ft_printf("|%08.3x|\n", 8375);
    printf("\n");
    printf("|%02.7x|\n", 3267);
    ft_printf("|%02.7x|\n", 3267);
    printf("\n");
    printf("|%0-8.5x|\n", 34);
    ft_printf("|%0-8.5x|\n", 34);
    printf("\n");
    printf("|%0-8.5x|\n", 0);
    ft_printf("|%0-8.5x|\n", 0);
    printf("\n");
    printf("|%0-2.7x|\n", 3267);
    ft_printf("|%0-2.7x|\n", 3267);
    printf("\n");
    printf("|%.0x|\n", 0);
    ft_printf("|%.0x|\n", 0);
    printf("\n");
    printf("|%.x|\n", 0);
    ft_printf("|%.x|\n", 0);
    printf("\n");
    printf("|%5.0x|\n", 0);
    ft_printf("|%5.0x|\n", 0);
    printf("\n");
    printf("|%5.x|\n", 0);
    ft_printf("|%5.x|\n", 0);
    printf("\n");
    printf("|%-5.x|\n", 0);
    ft_printf("|%-5.x|\n", 0);
    printf("\n");
    printf("|%8.5x|\n", 34);
    ft_printf("|%8.5x|\n", 34);
    printf("\n");
    printf("|%2.7x|\n", 3267);
    ft_printf("|%2.7x|\n", 3267);
    printf("\n");
    printf("|%-8.5x|\n", 0);
    ft_printf("|%-8.5x|\n", 0);
    printf("\n");
     printf("|%-2.7x|\n", 3267);
    ft_printf("|%-2.7x|\n", 3267);
    printf("\n");
    printf("|%08.5x|\n", 34);
    ft_printf("|%08.5x|\n", 34);
    printf("\n");
    printf("|%08.5x|\n", 34);
    ft_printf("|%08.5x|\n", 34);
    printf("\n");
    printf("|%08.3x|\n", 8375);
    ft_printf("|%08.3x|\n", 8375);
    printf("\n");
    printf("|%02.7X|\n", 3267);
    ft_printf("|%02.7X|\n", 3267);
    printf("\n");
    printf("|%0-8.5X|\n", 34);
    ft_printf("|%0-8.5X|\n", 34);
    printf("\n");
    printf("|%0-8.5X|\n", 0);
    ft_printf("|%0-8.5X|\n",0);
    printf("\n");
    printf("|%0-2.7X|\n", 3267);
    ft_printf("|%0-2.7X|\n", 3267);
    printf("\n");
    printf("|%.0X|\n", 0);
    ft_printf("|%.0X|\n", 0);
    printf("\n");
    printf("|%.X|\n", 0);
    ft_printf("|%.X|\n", 0);
    printf("\n");
     printf("|%5.0X|\n", 0);
    ft_printf("|%5.0X|\n", 0);
    printf("\n");
    printf("|%5.X|\n", 0);
    ft_printf("|%5.X|\n", 0);
    printf("\n");
    printf("|%-5.X|\n", 0);
    ft_printf("|%-5.X|\n", 0);
    printf("\n");
    printf("|%-5.0X|\n", 0);
    ft_printf("|%-5.0X|\n", 0);
    printf("\n");

    printf("|%.p|\n", NULL);
    ft_printf("|%.p|\n", NULL);
    printf("\n");
    printf("|%5.p|\n", NULL);
    ft_printf("|%5.p|\n", NULL);
    printf("\n");
    printf("|%2.p|\n", NULL);
    ft_printf("|%2.p|\n", NULL);
    printf("\n");
    printf("|%9.2p|\n", 1234);
    ft_printf("|%9.2p|\n", 1234);
    printf("\n");
    printf("|%2.9p|\n", 1234);
    ft_printf ("|%2.9p|\n", 1234);
    printf("\n");
    printf("|%.5p|\n", 0);
    ft_printf ("|%.5p|\n", 0);
    printf("\n");
    printf("|%.0p|\n", 0);
    ft_printf ("|%.0p|\n", 0);
    printf("\n");
    printf("|%5.0p|\n", 0);
    ft_printf("|%5.0p|\n", 0);
    printf("\n");
    printf("|%5.p|\n", 0);
    ft_printf("|%5.p|\n", 0);
    printf("\n");
    printf("|%-5.p|\n", 0);
    ft_printf("|%-5.p|\n", 0);

    printf("|%0s|\n", NULL);
    ft_printf("|%0s|\n", NULL);
    printf("\n");
    printf("|%-s|\n", NULL);
    ft_printf("|%-s|\n", NULL);
    printf("\n");
    printf("|%+s|\n", NULL);
    ft_printf("|%+s|\n", NULL);
    printf("\n");
    printf("|%23s|\n", NULL);
    ft_printf("|%23s|\n", NULL);
    printf("\n");
    printf("|%.s|\n", NULL);
    ft_printf("|%.s|\n", NULL);
    printf("------------------\n");
    printf("|%b|\n", NULL);
    ft_printf("|%b|\n", NULL);
    printf("\n");
    printf("|%s|\n", NULL);
    ft_printf("|%s|\n", NULL);
    printf("\n");
    printf("|%021s|\n", NULL);
    ft_printf("|%021s|\n", NULL);
    printf("\n");
    printf("|%02s|\n", NULL);
    ft_printf("|%02s|\n", NULL);
    printf("\n");
    printf("|%-03s|\n", NULL);
    ft_printf("|%-03s|\n", NULL);
    printf("\n");
    printf("|Il fait au moins %d|\n", -8000);
    ft_printf("|Il fait au moins %d|\n", -8000);
    printf("\n");
    printf("|Il fait au moins %i|\n", -8000);
    ft_printf("|Il fait au moins %i|\n", -8000);

    printf("|%*s|\n", 32, "abc");
    ft_printf("|%*s|\n", 32, "abc");
    printf("\n");
    printf("|%*s|\n", -32, "abc");
    ft_printf("|%*s|\n", -32, "abc");
    printf("\n");
    printf("|%-32s|\n", "abc");
    ft_printf("|%-32s|\n", "abc");
    printf("\n");
    printf("|%-*s|\n", -32, "abc");
    ft_printf("|%-*s|\n", -32, "abc");
    printf("\n");
    printf("1|%*.s|\n", -3, "hello");
    ft_printf("1|%*.s|\n", -3, "hello");
    printf("\n");
    printf("1|%*.s|\n", 3, "hello");
    ft_printf("1|%*.s|\n", 3, "hello");
    printf("\n");
    printf("2|%.*s|\n", -3, "hello");
    ft_printf("2|%.*s|\n", -3, "hello");
    printf("\n");
    printf("2|%.*s|\n", -7, "hello");
    ft_printf("2|%.*s|\n", -7, "hello");
    printf("\n");
    printf("3|%*s|\n", -3, "hello");
    ft_printf("3|%*s|\n", -3, "hello");
    printf("\n");
    printf("4|%.*s|\n", 3, "hello");
    ft_printf("4|%.*s|\n", 3, "hello");
    printf("\n");
    printf("|%-*.*s|\n", -7, -3, "yolo");
    ft_printf("|%-*.*s|\n", -7, -3, "yolo");
    printf("\n");
    printf("|%*i|\n", -14, 94827);
    ft_printf("|%*i|\n", -14, 94827);
    printf("\n");
    printf("|%0*i|\n", -7, -54);
    ft_printf("|%0*i|\n", -7, -54);

    unsigned int ui = 424242;
    printf("7|%p|\n", (void*)ULONG_MAX + 1);
    ft_printf("7|%p|\n", (void*)ULONG_MAX + 1);
    printf("\n");
    ft_printf("--------------\n");
	ft_printf("64|%.20p|\n", &ui);
	printf("64|%.20p|\n", &ui);
	ft_printf("--------------\n");
	ft_printf("65|%*p|\n", -10, &ui);
	printf("65|%*p|\n", -10, &ui);
	ft_printf("--------------\n");
	ft_printf("66|%-015p|\n", &ui);
	printf("66|%-015p|\n", &ui);
	ft_printf("--------------\n");
	ft_printf("67|%-30p|\n", &ui);
	printf("67|%-30p|\n", &ui); 
	ft_printf("--------------\n");
	ft_printf("68|%-30.40p|\n", &ui);
	printf("68|%-30.40p|\n", &ui); 
	ft_printf("69|%p|\n", &ui);
	printf("69|%p|\n", &ui); 
	ft_printf("--------------\n");
	ft_printf("68|%-30.40p|\n", &ui);
	printf("68|%-30.40p|\n", &ui); 
	ft_printf("--------------\n");
	ft_printf("68|%30.40p|\n", &ui);
	printf("68|%30.40p|\n", &ui); 
	ft_printf("--------------\n");
	ft_printf("68|%-30.20p|\n", &ui);
	printf("68|%-30.20p|\n", &ui); 
	ft_printf("--------------\n");
	ft_printf("68|%30.20p|\n", &ui);
	printf("68|%30.20p|\n", &ui); 
	ft_printf("--------------\n");
	ft_printf("68|%*.*p|\n", -30, -40, &ui);
	printf("68|%*.*p|\n", -30, -40, &ui);
	ft_printf("--------------\n");
	ft_printf("68|%-*.*p|\n", 30, 40, &ui);
	printf("68|%-*.*p|\n", 30, 40, &ui);
	ft_printf("--------------\n");
	ft_printf("68|%-*.*p|\n", -30, -40, &ui);
	printf("68|%-*.*p|\n", -30, -40, &ui);
	ft_printf("--------------\n");
	ft_printf("--------------\n");
	ft_printf("64|%.20x|\n", 12345);
	printf("64|%.20x|\n", 12345);
	ft_printf("--------------\n");
	ft_printf("65|%*x|\n", -10, 12345);
	printf("65|%*x|\n", -10, 12345);
	ft_printf("--------------\n");
	ft_printf("66|%-015x|\n", 12345);
	printf("66|%-015x|\n", 12345);
	ft_printf("--------------\n");
	ft_printf("67|%-30x|\n", 12345);
	printf("67|%-30x|\n", 12345); 
	ft_printf("--------------\n");
	ft_printf("68|%-30.40x|\n", 12345);
	printf("68|%-30.40x|\n", 12345); 
	ft_printf("69|%x|\n", 12345);
	printf("69|%x|\n", 12345); 
	ft_printf("--------------\n");
	ft_printf("68|%-30.40x|\n", 12345);
	printf("68|%-30.40x|\n", 12345); 
	ft_printf("--------------\n");
	ft_printf("68|%30.40x|\n", 12345);
	printf("68|%30.40x|\n", 12345); 
	ft_printf("--------------\n");
	ft_printf("68|%-30.20x|\n", 12345);
	printf("68|%-30.20x|\n", 12345); 
	ft_printf("--------------\n");
	ft_printf("68|%30.20x|\n", 12345);
	printf("68|%30.20x|\n", 12345); 
	ft_printf("--------------\n");
	ft_printf("68|%*.*x|\n", -30, -40, 12345);
	printf("68|%*.*x|\n", -30, -40, 12345);
	ft_printf("--------------\n");
	ft_printf("68|%-*.*x|\n", 30, 40, 12345);
	printf("68|%-*.*x|\n", 30, 40, 12345);
	ft_printf("--------------\n");
	ft_printf("68|%-*.*x|\n", -30, -40, 12345);
	printf("68|%-*.*x|\n", -30, -40, 12345);
	ft_printf("--------------\n");
	return (0);
}

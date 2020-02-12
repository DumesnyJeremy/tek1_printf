/*
** EPITECH PROJECT, 2019
** h
** File description:
** h
*/

#ifndef MY_H_
#define MY_H_

#include <unistd.h>

int my_strlen(char const *str);
char *my_revstr(char *str);
void my_putstr(char const *str);
void my_putchar(char c);
void my_printf(char const *str, ...);
int my_strncmp(char const *s1, char const *s2, int n);
void my_put_nbr_l(long nb);
void my_put_nbr(int);
void my_put_nbr_o(int);
void my_put_nbr_x(int);
void my_put_nbr_xmaj(int);
void my_put_nbr_b(int nb);
void my_put_nbr_u(unsigned int nb);
void my_put_nbr_lx(long nb);
void my_put_nbr_lxmaj(long nb);
void my_put_nbr_p(long long int nb);
void my_put_p(long long int nb);

typedef void (*p_fonct)();

#endif

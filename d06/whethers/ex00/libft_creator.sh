#!/bin/bush
gcc -c ft_strcmp.c
gcc -c ft_putchar.c
gcc -c ft_putstr.c
gcc -c ft_strlen.c
gcc -c ft_swap.c
ar rc libstr.a  ft_strcmp.o ft_putchar.o ft_putstr.o ft_strlen.o ft_swap.o

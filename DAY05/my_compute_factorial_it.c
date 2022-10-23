/*
** EPITECH PROJECT, 2022
** MY_COMPUTE_FACTORIAL_IT
** File description:
** No file there, just an epitech header example.
** You can even have multiple lines if you want!
*/
int my_compute_factorial_it (int nb)
{
    int total = 1;
    if (nb < 0 || nb > 12) {
        return 0;
    }
    if (nb == 0) {
        return 1;
    }
    while (nb > 1) {
        total = total * nb;
        nb--;
    }
    return total;
}

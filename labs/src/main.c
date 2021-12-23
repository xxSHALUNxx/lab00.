/*
 * @mainpage
 * # Загальне завдання
 * 1. ** Визначити, чи є задане ціле число простим.
 * @author Dоbromilsky R.
 * @date 20-12-2021
 * @version 1.1
 */

/**
 * @file main.c
 * @brief Файл з демонстрацією роботи структури {@link a} та методів
 * оперування ним.
 *
 * @author Dobromilsky R.
 * @date 20-12-2020
 * @version 1.1
 */
#include <math.h>
int main(){
int n = 11;
int result;
/**
 * Головна функція.
 *
 * Послідовність дій:
 * -{@link main}
 * - создал переменную n = 11
 * - создаю цикл который показует простое часло или нет.

 *
 * @return успішний код повернення з програми (0)
 */
for (int i = 2; i <sqrt(n); i++){
if ( n % i == 0)
result = 0;
break;
if ( n % i == 1)
result = 1;
}

return 0;
}



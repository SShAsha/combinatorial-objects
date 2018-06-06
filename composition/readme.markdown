﻿*Слабые разбиения* (weak composition) числа n на n неотрицательных целых слагаемых с учетом порядка &mdash;
это количество кортежей из n неотрицательных целых чисел, в сумме дающих n, с учетом порядка их расстановки (так, например, расстановки 3=1+2 и 3=2+1 считаются различными).

Автор: Шестаков Семён.

OEIS: [A001700](http://oeis.org/A001700).

Ссылки:
[Wikipedia](https://en.wikipedia.org/wiki/Stars_and_bars_(combinatorics)) - общее описание,
[Wikipedia](https://en.wikipedia.org/wiki/Composition_(combinatorics)).

Предподсчёт: нет.

Функция `total`: O(n).

Функция `generate_all`: O(n * total(n)) = O(n^2).

Функция `is_valid`: O(n).

Функция `number_by_object`: O(generate_all(n) * total(n)) = O(n^3) .

Функция `object_by_number`: O(generate_all(n) * total(n)) = O(n^3).

Функция `prev`: O(number_by_object(n) * object_by_number(n)).

Функция `next`: O(number_by_object(n) * object_by_number(n)).

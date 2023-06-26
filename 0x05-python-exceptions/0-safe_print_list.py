#!/usr/bin/python3
def safe_print_list(my_list=[], x=0):
    m = 0
    try:
        for i in range(x):
            m += 1
            print(my_list[i], end="")
    except IndexError:
        m -= 1
    print()
    return m

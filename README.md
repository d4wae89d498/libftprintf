## libftprintf
Reproduction of printf, with 64-bits integers, 80-bits floating points, and a new %b specifier (cf. notes). Also implementation speed was not a goal, priority was more in code clarity and extensibility.

### primitives
* unistd.h&nbsp;&nbsp;&nbsp;&nbsp;read()&nbsp;&nbsp;&nbsp;write()
* stdlib.h&nbsp;&nbsp;&nbsp;&nbsp;malloc()&nbsp;&nbsp;&nbsp;free()
* stdargs.h&nbsp;&nbsp;&nbsp;&nbsp;va_*()

### extensibility
* register a specifier simply before calling your printf using ft_register_specifier()
* delete a specifier simply before calling your printf using ft_delete_specifier()

### notes
* %b for displaying binary representation of a mem area using a pointer, with a space between each byte, qualifiers for its size, and regular padding/precision. Also 
```c
long double x;

x = 1;
ft_printf("%#b", sizeof(long double), &x)
->  01101000 11001010 01101011 10111111 00011000 10100100 00111111 11111111 10000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000
```
will display the long double x. But for regular types, for example 
```c
size_t x;

x = 1;
ft_printf("%zb", &x)
->  00000000 00000000 00000000 00000001
```

* gcc ... -D AT_EXIT=1 ... compilation flag will enable the use of a global variable for storing specifier to callback associations, this global variable will then be freed at exit, using stdlib.h's atexit()
* gcc ... -D LDMAXPRECISION=1024 ... compilation will modify the max precision that printf will use for handling long doubles.
* all functions that exist with a larger type will use the one with a larger type for avoiding repetitions 
* %Lf&nbsp;is different from original %Lf flag under macos when the decimal part of a long double exeeds 16-18 digits
* %ls and %lc dont support unicode after a setlocale() because we are not allowed to rely on it, so I use the default behaviour and I dont rely on any utf conversion. No garbage in - garbage out.

## Coming soon 
[ ] %e
[ ] %a 
[ ] %g

PHP_ARG_ENABLE([rdtsc],
  [whether to enable rdtsc support],
  [AS_HELP_STRING([--enable-rdtsc],
    [Enable rdtsc support])],
  [no])

if test "$PHP_RDTSC" != "no"; then
  AC_DEFINE(HAVE_RDTSC, 1, [ Have rdtsc support ])

  PHP_NEW_EXTENSION(rdtsc, rdtsc.c, $ext_shared)
fi

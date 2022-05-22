# php-ffi-rdtsc
Expose the `__rdtsc` CPU cycle counter to user-land using a php extension

# Requirements

- x64 platform
- gcc

# Usage

```
phpize
./configure
make
php -d extension=modules/rdtsc.so example.php
```

# Notes

Given the [various caveats](https://en.wikipedia.org/wiki/Time_Stamp_Counter#Use) with `__rdtsc` this should be used with great care when trying to measure things.

There also is a [PHP-FFI implementation that provides the same functionality](https://github.com/edorian/php-ext-rdtsc) available.

For most cases [**`getrusage()`**](https://www.php.net/manual/en/function.getrusage.php) should be preferable.

# References
 - [Wikipedia - Time Stamp Counter](https://en.wikipedia.org/wiki/Time_Stamp_Counter)
 - [Microsoft cpp intrinsics \_\_rdtsc](https://docs.microsoft.com/en-us/cpp/intrinsics/rdtsc?view=msvc-170)
 - [Intel - How to Benchmark Code Execution Times on Intel® IA-32 and IA-64 Instruction Set Architectures](https://www.intel.com/content/dam/www/public/us/en/documents/white-papers/ia-32-ia-64-benchmark-code-execution-paper.pdf)
 - [Online x64 reference](https://www.felixcloutier.com/x86/rdtsc)

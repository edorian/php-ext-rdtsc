<?php

$first = \rdtsc();
$second = \rdtsc();

echo $second - $first, ' "cycles" between the two function calls.', PHP_EOL;

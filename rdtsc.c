/* rdtsc extension for PHP */

#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include "php.h"
#include <x86intrin.h>

PHP_FUNCTION(rdtsc)
{
    int64_t cycles = __rdtsc();

	RETURN_LONG(cycles);
}

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_rdtsc, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

static const zend_function_entry rdtsc_functions[] = {
    ZEND_FE(rdtsc, arginfo_rdtsc)
    ZEND_FE_END
};

zend_module_entry rdtsc_module_entry = {
	STANDARD_MODULE_HEADER,
	"rdtsc",
	rdtsc_functions,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	"0.1.0",
	STANDARD_MODULE_PROPERTIES
};


ZEND_GET_MODULE(rdtsc)

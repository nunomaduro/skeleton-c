#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>

/**
 * A test example.
 */
static void test_example(void **state) {
    (void) state;
}

/**
 * Groups the tests.
 */
int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test(test_example),
    };

    return cmocka_run_group_tests(tests, NULL, NULL);
}

#include "../warmup1/frontBack.c"
#include "include/minunit.h"

MU_TEST(test_frontBack_swapped) {
    mu_assert_string_eq("eodc", frontBack("code"));
}

MU_TEST(test_frontBack_same) {
    mu_assert_string_eq("a", frontBack("a"));
}

MU_TEST_SUITE(suite) {
    MU_RUN_TEST(test_frontBack_swapped);
    MU_RUN_TEST(test_frontBack_same);
}

int main(void) {
    MU_RUN_SUITE(suite);
    MU_REPORT();
    return MU_EXIT_CODE;
}

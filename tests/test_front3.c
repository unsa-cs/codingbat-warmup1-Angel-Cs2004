#include "../warmup1/front3.c"
#include "include/minunit.h"

MU_TEST(test_front3_chocolate) {
    mu_assert_string_eq("ChoChoCho", front3("Chocolate"));
}

MU_TEST(test_front3_single) {
    mu_assert_string_eq("aaa", front3("a"));
}

MU_TEST_SUITE(suite) {
    MU_RUN_TEST(test_front3_chocolate);
    MU_RUN_TEST(test_front3_single);
}

int main(void) {
    MU_RUN_SUITE(suite);
    MU_REPORT();
    return MU_EXIT_CODE;
}

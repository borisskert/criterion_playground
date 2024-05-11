#include <criterion/criterion.h>
#include <criterion/new/assert.h>

int add_me_plz(int a, int b);

Test(My_Library_Tests_Suite, Sample_Tests
) {
    cr_assert_eq(add_me_plz(1, 2), 3);
    cr_assert_eq(add_me_plz(4, 5), 9);
    cr_assert_eq(add_me_plz(6, 7), 13);
    cr_assert_eq(add_me_plz(8, 9), 17);
    cr_assert_eq(add_me_plz(10, 11), 21);
    cr_assert_eq(add_me_plz(12, 13), 25);
    cr_assert_eq(add_me_plz(14, 15), 29);
    cr_assert_eq(add_me_plz(16, 17), 33);
}

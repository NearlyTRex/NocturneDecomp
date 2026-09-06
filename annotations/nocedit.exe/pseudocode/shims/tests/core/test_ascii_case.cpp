// =============================================================================
// ASCII CASE — the one fold
// =============================================================================
//
// Two of these functions stand behind _stricmp and _strnicmp, which the game
// calls and whose RESULT it uses — not just whether it is zero. A comparison
// that got equality right and the sign wrong would sort a list backwards and
// look like a game bug, so the ordering is pinned down here as well.

#include "nocturne_test.h"

#include "core/ascii_case.h"

#include <cstring>
#include <string>

NOCTURNE_TEST(letters_fold_and_nothing_else_does) {
    CHECK_EQ(nocturne_ascii_lower('A'), 'a');
    CHECK_EQ(nocturne_ascii_lower('Z'), 'z');
    CHECK_EQ(nocturne_ascii_lower('a'), 'a');
    CHECK_EQ(nocturne_ascii_lower('0'), '0');
    CHECK_EQ(nocturne_ascii_lower('_'), '_');
    // The bytes either side of the letters, which an off-by-one fold would take.
    CHECK_EQ(nocturne_ascii_lower('@'), '@');   // just before 'A'
    CHECK_EQ(nocturne_ascii_lower('['), '[');   // just after 'Z'
}

NOCTURNE_TEST(a_byte_above_ascii_is_left_alone) {
    // The C library would fold some of these depending on the locale, which is
    // the behaviour this deliberately does not have.
    CHECK_EQ(nocturne_ascii_lower((char)0xC0), (char)0xC0);
    CHECK_EQ(nocturne_ascii_lower((char)0xE0), (char)0xE0);
}

NOCTURNE_TEST(names_match_whatever_case_they_are_in) {
    CHECK(nocturne_ascii_iequals("ACT1.POD", "act1.pod"));
    CHECK(nocturne_ascii_iequals("Readme.TXT", "rEADME.txt"));
    CHECK(nocturne_ascii_iequals("", ""));
    CHECK(!nocturne_ascii_iequals("act1", "act2"));
    CHECK(!nocturne_ascii_iequals("act", "act1"));
    CHECK(!nocturne_ascii_iequals("act1", "act"));
}

NOCTURNE_TEST(the_sign_says_which_way_round_they_are) {
    // Callers use the sign, so it has to mean something. Folded 'a' < 'b'.
    CHECK(nocturne_ascii_icompare("A", "b") < 0);
    CHECK(nocturne_ascii_icompare("B", "a") > 0);
    CHECK_EQ(nocturne_ascii_icompare("same", "SAME"), 0);
    // A prefix sorts before the longer string it starts.
    CHECK(nocturne_ascii_icompare("act", "act1") < 0);
    CHECK(nocturne_ascii_icompare("act1", "act") > 0);
}

NOCTURNE_TEST(it_agrees_with_the_c_library_on_ascii) {
    // The site it replaces called strcasecmp, and the game runs in the "C"
    // locale where the two are the same rule. Checking the sign rather than the
    // value: both are free to choose the magnitude.
    static const char *words[] = {"act1.pod", "ACT1.POD", "act2", "ACT",
                                  "", "a", "Z", "zz", "Save1.NOC"};
    const int count = (int)(sizeof(words) / sizeof(words[0]));
    for (int i = 0; i < count; ++i) {
        for (int j = 0; j < count; ++j) {
            const int mine = nocturne_ascii_icompare(words[i], words[j]);
            const int theirs = strcasecmp(words[i], words[j]);
            CHECK_EQ((mine < 0), (theirs < 0));
            CHECK_EQ((mine > 0), (theirs > 0));
            CHECK_EQ((mine == 0), (theirs == 0));
        }
    }
}

NOCTURNE_TEST(the_bounded_form_stops_where_it_is_told) {
    CHECK_EQ(nocturne_ascii_icompare_n("ACT1.POD", "act1.raw", 4), 0);
    CHECK(nocturne_ascii_icompare_n("ACT1.POD", "act1.raw", 6) != 0);
    // Zero length compares nothing and everything is equal.
    CHECK_EQ(nocturne_ascii_icompare_n("a", "b", 0), 0);
    // A terminator inside the window ends the comparison there.
    CHECK_EQ(nocturne_ascii_icompare_n("ab", "AB", 10), 0);
}

NOCTURNE_TEST(nothing_is_handled_rather_than_crashed) {
    // These reach the CRT bridge from decompiled code, so they arrive.
    CHECK_EQ(nocturne_ascii_icompare(nullptr, nullptr), 0);
    CHECK(nocturne_ascii_icompare(nullptr, "a") < 0);
    CHECK(nocturne_ascii_icompare("a", nullptr) > 0);
    CHECK(!nocturne_ascii_iequals(nullptr, "a"));
}

NOCTURNE_TEST_MAIN()

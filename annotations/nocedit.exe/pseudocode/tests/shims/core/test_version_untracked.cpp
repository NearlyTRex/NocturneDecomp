// =============================================================================
// VERSION, UNTRACKED — no describe string, or one that is the version
// =============================================================================
//
// test_version_tagged.cpp the other way round.

#include "core/version.h"
#include "nocturne_test.h"

#include <string>

extern const char *version_support_git;

NOCTURNE_TEST(without_git_or_on_a_tag_the_version_stands_alone) {
    version_support_git = "";
    CHECK_EQ(std::string(nocturne_version_short()), std::string("1.2.3"));
    version_support_git = "1.2.3";
    CHECK_EQ(std::string(nocturne_version_line()), std::string("NocturneDecomp 1.2.3, test-build"));
}

NOCTURNE_TEST_MAIN()

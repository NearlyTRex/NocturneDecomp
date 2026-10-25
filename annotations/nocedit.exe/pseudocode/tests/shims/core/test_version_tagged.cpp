// =============================================================================
// VERSION, TAGGED — a describe string that is the version says nothing more
// =============================================================================
//
// The short form is asked on a tag and the full line with no git at all; the
// other way round is test_version_untracked.cpp.

#include "core/version.h"
#include "nocturne_test.h"

#include <string>

extern const char *version_support_git;

NOCTURNE_TEST(on_a_tag_or_without_git_the_version_stands_alone) {
    version_support_git = "1.2.3";
    CHECK_EQ(std::string(nocturne_version_short()), std::string("1.2.3"));
    version_support_git = "";
    CHECK_EQ(std::string(nocturne_version_line()), std::string("NocturneDecomp 1.2.3, test-build"));
}

NOCTURNE_TEST_MAIN()

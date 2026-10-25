// =============================================================================
// VERSION — the build's name, as --version and the crash report give it
// =============================================================================
//
// The version, and the git describe string after it when that says more. Each
// line is built once, so the ways a describe string can say nothing more (on a
// tag, or with no git) are runs of their own: test_version_tagged.cpp and
// test_version_untracked.cpp.

#include "core/version.h"
#include "nocturne_test.h"

#include <cstring>
#include <string>

// Past a tag, the describe string follows the version.
NOCTURNE_TEST(past_a_tag_the_describe_string_follows) {
    CHECK_EQ(std::string(nocturne_version()), std::string("1.2.3"));
    CHECK_EQ(std::string(nocturne_version_git()), std::string("1.2.3-4-gabcdef0"));
    CHECK_EQ(std::string(nocturne_version_build()), std::string("test-build"));
    CHECK_EQ(std::string(nocturne_version_short()), std::string("1.2.3 (1.2.3-4-gabcdef0)"));
    CHECK_EQ(std::string(nocturne_version_line()),
             std::string("NocturneDecomp 1.2.3 (1.2.3-4-gabcdef0), test-build"));
    CHECK(std::strlen(nocturne_version_built()) > 0);
    // Built once: the same line again.
    CHECK(nocturne_version_short() == nocturne_version_short());
    CHECK(nocturne_version_line() == nocturne_version_line());
}

NOCTURNE_TEST_MAIN()

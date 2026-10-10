#include "common/text/wildcard.h"

#include <gtest/gtest.h>

namespace nocturne::common {
namespace {

TEST(Wildcard, SplitsDirectoryFromPattern) {
    const SWildcardPath split = splitWildcardPath("art/textures/*.raw");
    EXPECT_EQ(split.directory, "art/textures");
    EXPECT_EQ(split.pattern, "*.raw");
}

TEST(Wildcard, SplitAcceptsBackslashesAndReturnsSlashes) {
    const SWildcardPath split = splitWildcardPath("art\\textures\\*.raw");
    EXPECT_EQ(split.directory, "art/textures");
    EXPECT_EQ(split.pattern, "*.raw");
}

TEST(Wildcard, PatternWithoutDirectoryHasAnEmptyDirectory) {
    const SWildcardPath split = splitWildcardPath("*.POD");
    EXPECT_EQ(split.directory, "");
    EXPECT_EQ(split.pattern, "*.POD");
}

TEST(Wildcard, LiteralMatchFoldsCase) {
    EXPECT_TRUE(matchesWildcard("SAVE01.SAV", "save01.sav"));
    EXPECT_TRUE(matchesWildcard("save01.sav", "SAVE01.SAV"));
    EXPECT_FALSE(matchesWildcard("save01.sav", "save02.sav"));
}

TEST(Wildcard, CaseFoldingIsAsciiOnly) {
    EXPECT_FALSE(matchesWildcard("\xc9", "\xe9"));
}

TEST(Wildcard, QuestionMarkMatchesExactlyOneCharacter) {
    EXPECT_TRUE(matchesWildcard("save??.sav", "save01.sav"));
    EXPECT_FALSE(matchesWildcard("save??.sav", "save1.sav"));
    EXPECT_FALSE(matchesWildcard("save?", "save"));
}

TEST(Wildcard, StarMatchesAnyRunIncludingNone) {
    EXPECT_TRUE(matchesWildcard("*.pod", "nocturne.pod"));
    EXPECT_TRUE(matchesWildcard("*.pod", ".pod"));
    EXPECT_TRUE(matchesWildcard("*", "anything"));
    EXPECT_TRUE(matchesWildcard("a*", "a"));
    EXPECT_FALSE(matchesWildcard("*.pod", "nocturne.raw"));
}

TEST(Wildcard, StarBacktracksWhenItTookTooLittle) {
    EXPECT_TRUE(matchesWildcard("*a*b", "xaxab"));
    EXPECT_TRUE(matchesWildcard("*.tar.gz", "x.tar.tar.gz"));
    EXPECT_FALSE(matchesWildcard("*a*b", "xaxa"));
}

TEST(Wildcard, PatternLongerThanNameFails) {
    EXPECT_FALSE(matchesWildcard("abc", "ab"));
    EXPECT_FALSE(matchesWildcard("ab", "abc"));
}

TEST(Wildcard, EmptyPatternMatchesOnlyAnEmptyName) {
    EXPECT_TRUE(matchesWildcard("", ""));
    EXPECT_FALSE(matchesWildcard("", "a"));
    EXPECT_TRUE(matchesWildcard("**", ""));
}

} // namespace
} // namespace nocturne::common

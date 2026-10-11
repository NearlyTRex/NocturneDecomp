#include "engine/pod/pod.h"
#include "engine/pod/pod_functions.h"
#include "tests/mocks/engine/podfixture.h"
#include "tests/mocks/engine/podimage.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace nocturne::engine {
namespace {

using ::testing::ElementsAre;
using ::testing::IsEmpty;

class FindFilesByExtensionTest : public CPodFixture {
protected:
    FindFilesByExtensionTest() {
        givenFile("ACT1.POD", makePod2("", {{.name = "B.MSN"},
                                            {.name = "A.MSN"},
                                            {.name = "c.msn"},
                                            {.name = "SET.SET"}}));
        givenFile("ACT2.POD", makePod2("", {{.name = "A.MSN"}, {.name = "D.MSN"}}));
        pod_.mount("ACT1.POD");
        pod_.mount("ACT2.POD");
    }

    CPod pod_{file_system_, dosio_};
};

// The extension is matched in upper case and the names compared exactly, so "c.msn" isn't one.
TEST_F(FindFilesByExtensionTest, ListsUpperCaseMatchesPodByPodInNameOrder) {
    EXPECT_THAT(findFilesByExtension(pod_, "msn", 10, 32), ElementsAre("A.MSN", "B.MSN", "D.MSN"));
}

TEST_F(FindFilesByExtensionTest, StopsAtMaxResults) {
    EXPECT_THAT(findFilesByExtension(pod_, ".MSN", 2, 32), ElementsAre("A.MSN", "B.MSN"));
}

TEST_F(FindFilesByExtensionTest, CutsNamesToTheResultLength) {
    EXPECT_THAT(findFilesByExtension(pod_, "SET", 10, 4), ElementsAre("SET"));
}

TEST_F(FindFilesByExtensionTest, NoMatchesIsEmpty) {
    EXPECT_THAT(findFilesByExtension(pod_, "WAV", 10, 32), IsEmpty());
}

// Only 'a' to 'z' are raised, so "s{t" can't match "S{T" through a case change it doesn't have.
TEST_F(FindFilesByExtensionTest, OnlyAsciiLettersAreRaised) {
    givenFile("ODD.POD", makePod2("", {{.name = "X.S{T"}}));
    pod_.mount("ODD.POD");
    EXPECT_THAT(findFilesByExtension(pod_, "s{t", 10, 32), ElementsAre("X.S{T"));
}

} // namespace
} // namespace nocturne::engine

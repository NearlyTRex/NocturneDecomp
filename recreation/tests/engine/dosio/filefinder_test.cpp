#include "common/error/fatalerror.h"
#include "engine/dosio/filefinder.h"
#include "tests/mocks/platform/mockfilesystem.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <string>
#include <vector>

namespace nocturne::engine {
namespace {

using platform::SFileInfo;
using ::testing::Return;

class CFileFinderTest : public ::testing::Test {
protected:
    void givenMatches(std::vector<SFileInfo> matches) {
        EXPECT_CALL(file_system_, findFiles(std::string_view("*.pod")))
            .WillOnce(Return(std::move(matches)));
    }

    platform::MockFileSystem file_system_;
    CFileFinder finder_{file_system_};
};

TEST_F(CFileFinderTest, StepsThroughTheMatchesThenRunsOut) {
    givenMatches({{.name = "ACT1.POD", .size = 10, .modified = 7}, {.name = "ACT2.POD"}});
    ASSERT_TRUE(finder_.openSearch("*.pod"));
    EXPECT_EQ(finder_.getFilename(), "ACT1.POD");
    EXPECT_EQ(finder_.getFileSize(), 10);
    EXPECT_EQ(finder_.getTimestamp(), 7);
    ASSERT_TRUE(finder_.findNext());
    EXPECT_EQ(finder_.getFilename(), "ACT2.POD");
    EXPECT_FALSE(finder_.findNext());
    EXPECT_EQ(finder_.getFilename(), "");
}

TEST_F(CFileFinderTest, NoMatchesLeavesNoName) {
    givenMatches({});
    EXPECT_FALSE(finder_.openSearch("*.pod"));
    EXPECT_EQ(finder_.getFilename(), "");
}

TEST_F(CFileFinderTest, FindNextWithoutAnOpenSearchIsFatal) {
    EXPECT_THAT([this] { static_cast<void>(finder_.findNext()); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq("CFileFinder::open - search not opened!")));
}

TEST_F(CFileFinderTest, ClosingEndsTheSearch) {
    givenMatches({{.name = "ACT1.POD"}, {.name = "ACT2.POD"}});
    ASSERT_TRUE(finder_.openSearch("*.pod"));
    finder_.closeSearch();
    EXPECT_EQ(finder_.getFilename(), "");
    EXPECT_THROW(static_cast<void>(finder_.findNext()), common::CFatalError);
}

TEST_F(CFileFinderTest, AttributesTranslateFromTheFileInfo) {
    givenMatches({{.name = "file"},
                  {.name = "dir", .is_directory = true},
                  {.name = ".hidden", .is_hidden = true, .is_read_only = true}});
    ASSERT_TRUE(finder_.openSearch("*.pod"));
    EXPECT_EQ(finder_.getAttributes(), CFileFinder::kArchive);
    ASSERT_TRUE(finder_.findNext());
    EXPECT_EQ(finder_.getAttributes(), CFileFinder::kDirectory);
    ASSERT_TRUE(finder_.findNext());
    EXPECT_EQ(finder_.getAttributes(),
              CFileFinder::kArchive | CFileFinder::kHidden | CFileFinder::kReadOnly);
}

TEST_F(CFileFinderTest, NamesAreCutAt255Characters) {
    givenMatches({{.name = std::string(300, 'n')}});
    ASSERT_TRUE(finder_.openSearch("*.pod"));
    EXPECT_EQ(finder_.getFilename(), std::string(255, 'n'));
}

TEST_F(CFileFinderTest, AFileOver2GBIsFatal) {
    givenMatches({{.name = "huge", .size = 0x80000000}});
    EXPECT_THAT([this] { static_cast<void>(finder_.openSearch("*.pod")); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq("CFileFinder::convertStruct - file too big!")));
}

} // namespace
} // namespace nocturne::engine

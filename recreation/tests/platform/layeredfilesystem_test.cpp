#include "platform/file.h"
#include "platform/layeredfilesystem.h"
#include "tests/mocks/platform/memoryfilesystem.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <algorithm>
#include <memory>
#include <optional>
#include <ranges>
#include <string>
#include <string_view>
#include <type_traits>
#include <vector>

namespace nocturne::platform {
namespace {

using ::testing::ElementsAre;
using ::testing::Optional;

TEST(CLayeredFileSystem, PublicInterface) {
    static_assert(std::is_base_of_v<IFileSystem, CLayeredFileSystem>);
    static_assert(std::is_constructible_v<CLayeredFileSystem, IFileSystem &>);
    static_assert(
        std::is_constructible_v<CLayeredFileSystem, IFileSystem &, std::vector<std::string>>);
}

// A user's folder over a game's install.
class CLayeredFileSystemTest : public ::testing::Test {
protected:
    CMemoryFileSystem disk_;
    CLayeredFileSystem files_{disk_.host_, {"user", "game"}};

    [[nodiscard]] std::vector<std::string> names(std::string_view pattern) {
        std::vector<std::string> found;
        for (const SFileInfo &file : files_.findFiles(pattern)) {
            found.push_back(file.name);
        }
        return found;
    }
};

TEST_F(CLayeredFileSystemTest, AFileIsReadFromTheFirstFolderHoldingIt) {
    disk_.givenFile("game/system/nocturne.ini", "shipped");
    EXPECT_THAT(files_.readFile(".\\system\\nocturne.ini"), Optional(std::string("shipped")));
    disk_.givenFile("user/system/nocturne.ini", "mine");
    EXPECT_THAT(files_.readFile(".\\system\\nocturne.ini"), Optional(std::string("mine")));
    EXPECT_THAT(files_.getFullPath("system/nocturne.ini"),
                Optional(std::string("/full/user/system/nocturne.ini")));
}

TEST_F(CLayeredFileSystemTest, AWriteGoesToTheFirstFolderItsFolderMadeThere) {
    disk_.givenFile("game/save/SAVE1.NOC", "shipped");
    EXPECT_TRUE(files_.writeFile("save\\SAVE1.NOC", "mine"));
    EXPECT_THAT(disk_.contents("user/save/SAVE1.NOC"), Optional(std::string("mine")));
    EXPECT_THAT(disk_.contents("game/save/SAVE1.NOC"), Optional(std::string("shipped")));
    EXPECT_TRUE(disk_.made().contains("user/save"));
    EXPECT_NE(files_.openFile("save/SAVE2.NOC", EFileMode::Write), nullptr);
    EXPECT_TRUE(disk_.contents("user/save/SAVE2.NOC").has_value());
}

// So the shipped copy is never changed, and what was in it is kept.
TEST_F(CLayeredFileSystemTest, AChangeCopiesTheFileUpFirst) {
    disk_.givenFile("game/system/nocturne.ini", "[Graphics]\n", 1000);
    EXPECT_TRUE(files_.setReadOnly("system/nocturne.ini", false));
    EXPECT_THAT(disk_.contents("user/system/nocturne.ini"), Optional(std::string("[Graphics]\n")));
    EXPECT_EQ(disk_.modified("user/system/nocturne.ini"), 1000);
    disk_.givenFile("game/log.txt", "one\n");
    EXPECT_TRUE(files_.appendFile("log.txt", "two\n"));
    EXPECT_THAT(disk_.contents("user/log.txt"), Optional(std::string("one\ntwo\n")));
    EXPECT_THAT(disk_.contents("game/log.txt"), Optional(std::string("one\n")));
}

TEST_F(CLayeredFileSystemTest, AChangeToAFileTheFirstFolderHasIsMadeThere) {
    disk_.givenFile("game/a.txt", "shipped");
    disk_.givenFile("user/a.txt", "mine");
    EXPECT_TRUE(files_.appendFile("a.txt", "!"));
    EXPECT_THAT(disk_.contents("user/a.txt"), Optional(std::string("mine!")));
    EXPECT_NE(files_.openFile("a.txt", EFileMode::Update), nullptr);
}

TEST_F(CLayeredFileSystemTest, ADeleteCantHideAShippedFile) {
    disk_.givenFile("game/a.txt", "shipped");
    disk_.givenFile("user/a.txt", "mine");
    EXPECT_TRUE(files_.removeFile("a.txt"));
    EXPECT_FALSE(files_.removeFile("a.txt"));
    EXPECT_THAT(files_.readFile("a.txt"), Optional(std::string("shipped")));
}

TEST_F(CLayeredFileSystemTest, AListingIsEveryFoldersEachNameOnce) {
    disk_.givenFile("game/save/SAVE1.NOC", "shipped");
    disk_.givenFile("game/save/SAVE2.NOC", "shipped");
    disk_.givenFile("user/save/save1.noc", "mine");
    disk_.givenFile("user/save/SAVE3.NOC", "mine");
    EXPECT_THAT(names("save/*.noc"), ElementsAre("SAVE2.NOC", "SAVE3.NOC", "save1.noc"));
    const std::vector<SFileInfo> found = files_.findFiles("save/save1.noc");
    ASSERT_EQ(found.size(), 1U);
    EXPECT_EQ(found[0].size, 4U);
}

TEST_F(CLayeredFileSystemTest, AFileNoFolderHoldsIsLookedForWhereItWouldBeWritten) {
    EXPECT_EQ(files_.readFile("none.txt"), std::nullopt);
    EXPECT_EQ(files_.getFileInfo("none.txt"), std::nullopt);
    EXPECT_EQ(files_.openFile("none.txt", EFileMode::Read), nullptr);
    EXPECT_FALSE(files_.setModifiedTime("none.txt", 1));
    EXPECT_THAT(files_.getFullPath("none.txt"), Optional(std::string("/full/user/none.txt")));
    EXPECT_EQ(files_.getRealPath("none.txt"), std::nullopt);
}

TEST_F(CLayeredFileSystemTest, AFolderIsMadeAndRemovedInTheFirst) {
    EXPECT_CALL(disk_.host_, makeDirectory(std::string_view("user/save")));
    EXPECT_TRUE(files_.makeDirectory("save"));
    EXPECT_CALL(disk_.host_, removeDirectory(std::string_view("user/save")));
    static_cast<void>(files_.removeDirectory("save"));
}

TEST_F(CLayeredFileSystemTest, AbsolutePathsAreTheHosts) {
    disk_.givenFile("/elsewhere/a.txt", "there");
    EXPECT_THAT(files_.readFile("/elsewhere/a.txt"), Optional(std::string("there")));
    EXPECT_TRUE(files_.writeFile("/elsewhere/b.txt", "new"));
    EXPECT_TRUE(disk_.contents("/elsewhere/b.txt").has_value());
    EXPECT_THAT(files_.getRealPath("/elsewhere/a.txt"),
                Optional(std::string("/real//elsewhere/a.txt")));
    EXPECT_EQ(files_.findFiles("/elsewhere/*").size(), 2U);
    EXPECT_TRUE(files_.removeFile("/elsewhere/b.txt"));
    EXPECT_TRUE(files_.makeDirectory("/elsewhere/c"));
    EXPECT_TRUE(files_.removeDirectory("/elsewhere/c"));
}

TEST_F(CLayeredFileSystemTest, TheCacheFolderIsTheHosts) {
    EXPECT_CALL(disk_.host_, getCacheFolder(std::string_view("Nocturne")))
        .WillOnce(::testing::Return(std::optional<std::string>("/cache/nocturne")));
    EXPECT_THAT(files_.getCacheFolder("Nocturne"), Optional(std::string("/cache/nocturne")));
}

TEST_F(CLayeredFileSystemTest, TheWorkingDirectoryIsAFolderWithPathsAsGiven) {
    files_.setFolders({"user", ""});
    disk_.givenFile(".\\shipped.txt", "here");
    EXPECT_THAT(files_.readFile(".\\shipped.txt"), Optional(std::string("here")));
    EXPECT_THAT(files_.getFolders(), ElementsAre("user", ""));
}

TEST(CLayeredFileSystem, WithoutFoldersEveryPathIsTheHostsAsGiven) {
    CMemoryFileSystem disk;
    CLayeredFileSystem files(disk.host_);
    EXPECT_CALL(disk.host_, writeFile(std::string_view(".\\system\\a.ini"), std::string_view("x")));
    files.writeFile(".\\system\\a.ini", "x");
    EXPECT_CALL(disk.host_, findFiles(std::string_view("save\\*.noc")));
    static_cast<void>(files.findFiles("save\\*.noc"));
    EXPECT_TRUE(disk.made().empty());
}

} // namespace
} // namespace nocturne::platform

#include "platform/pathroots.h"
#include "tests/mocks/platform/memoryfilesystem.h"
#include "tests/mocks/platform/mockenvironment.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <initializer_list>
#include <optional>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::platform {
namespace {

using ::testing::ElementsAre;
using ::testing::HasSubstr;
using ::testing::IsEmpty;
using ::testing::Not;
using ::testing::Optional;
using ::testing::Return;

class CPathRootsTest : public ::testing::Test {
protected:
    void givenVariable(std::string_view name, const std::string &value) {
        ON_CALL(environment_, getVariable(name)).WillByDefault(Return(std::optional(value)));
    }

    [[nodiscard]] SPathRoots choose(std::initializer_list<std::string_view> args) {
        const std::vector<std::string_view> given(args);
        return choosePathRoots(given, environment_, defaults_, disk_.host_);
    }

    ::testing::NiceMock<MockEnvironment> environment_;
    SPathRootDefaults defaults_;
    CMemoryFileSystem disk_;
};

// How the game has always run, and what a desktop build that sets nothing still does.
TEST_F(CPathRootsTest, NothingSetIsTheWorkingDirectoryForBoth) {
    const SPathRoots roots = choose({});
    EXPECT_EQ(roots.data, "");
    EXPECT_EQ(roots.user, "");
    EXPECT_THAT(roots.getFolders(), IsEmpty());
    EXPECT_EQ(describePathRoots(roots), std::nullopt);
}

TEST_F(CPathRootsTest, TheCommandLineNamesEitherWay) {
    const SPathRoots roots = choose({"--data-dir", "/games/nocturne", "--user-dir=/home/me/"});
    EXPECT_EQ(roots.data, "/games/nocturne");
    EXPECT_EQ(roots.user, "/home/me");
    EXPECT_THAT(roots.getFolders(), ElementsAre("/home/me", "/games/nocturne"));
    EXPECT_TRUE(disk_.made().contains("/home/me"));
    EXPECT_THAT(describePathRoots(roots),
                Optional(std::string("data directory /games/nocturne, user directory /home/me")));
}

TEST_F(CPathRootsTest, TheCommandLineWinsOverTheEnvironmentWhichWinsOverTheDefaults) {
    givenVariable("NOCTURNE_USER_DIR", "/env/user");
    givenVariable("NOCTURNE_DATA_DIR", "/env/data");
    defaults_ = {.data = "/built/data", .user = "/built/user"};
    EXPECT_EQ(choose({"--user-dir", "/line/user"}).user, "/line/user");
    const SPathRoots roots = choose({});
    EXPECT_EQ(roots.user, "/env/user");
    EXPECT_EQ(roots.data, "/env/data");
}

TEST_F(CPathRootsTest, TheDefaultsAreTheLastWord) {
    defaults_ = {.data = "/built/data", .user = "/built/user"};
    const SPathRoots roots = choose({});
    EXPECT_EQ(roots.data, "/built/data");
    EXPECT_EQ(roots.user, "/built/user");
}

TEST_F(CPathRootsTest, ARelativeDirectoryIsMadeAbsolute) {
    const SPathRoots roots = choose({"--data-dir=games\\nocturne"});
    EXPECT_EQ(roots.data, "/full/games/nocturne");
    EXPECT_EQ(roots.user, "");
    EXPECT_THAT(roots.getFolders(), ElementsAre("/full/games/nocturne"));
    EXPECT_THAT(describePathRoots(roots), Optional(HasSubstr("(the data directory)")));
}

TEST_F(CPathRootsTest, AnOptionWithoutItsValueIsntGiven) {
    givenVariable("NOCTURNE_USER_DIR", "/env/user");
    EXPECT_EQ(choose({"--user-dir"}).user, "/env/user");
    EXPECT_EQ(choose({"--user-directory=/x"}).user, "/env/user");
    EXPECT_EQ(choose({"--user-dir="}).user, "");
}

TEST_F(CPathRootsTest, OneDirectoryGivenAsBothLeavesNoUserDirectory) {
    const SPathRoots roots = choose({"--data-dir=/games", "--user-dir=/games/"});
    EXPECT_EQ(roots.data, "/games");
    EXPECT_EQ(roots.user, "");
    EXPECT_THAT(describePathRoots(roots), Optional(HasSubstr("data directory /games")));
}

TEST_F(CPathRootsTest, TheUserDirectorysDataDirTxtNamesTheData) {
    disk_.givenFile("/games/nocturne/ACT1.POD", "");
    disk_.givenFile("/home/me/data_dir.txt", "/games/nocturne  \r\nignored\n");
    const SPathRoots roots = choose({"--user-dir=/home/me"});
    EXPECT_EQ(roots.data, "/games/nocturne");
    EXPECT_EQ(roots.user, "/home/me");
    EXPECT_EQ(roots.data_dir_file_folder, "/home/me");
}

// It then keeps what the game writes, the game's own folder only read.
TEST_F(CPathRootsTest, TheDefaultDataDirectorysDataDirTxtMakesItTheUserDirectory) {
    disk_.givenFile("/games/nocturne/ACT1.POD", "");
    disk_.givenFile("/app/data_dir.txt", "/games/nocturne\n");
    defaults_ = {.data = "/app", .user = std::nullopt, .data_filled_by_hand = true};
    const SPathRoots roots = choose({});
    EXPECT_EQ(roots.data, "/games/nocturne");
    EXPECT_EQ(roots.user, "/app");
    EXPECT_FALSE(roots.filled_by_hand);
}

TEST_F(CPathRootsTest, ADataDirTxtNamingNoDirectoryIsPassedOver) {
    disk_.givenFile("/home/me/data_dir.txt", "/nowhere\n");
    EXPECT_EQ(choose({"--user-dir=/home/me"}).data, "");
    disk_.givenFile("/home/me/data_dir.txt", "\n");
    EXPECT_EQ(choose({"--user-dir=/home/me"}).data, "");
    disk_.givenFile("/games/file", "");
    disk_.givenFile("/home/me/data_dir.txt", "/games/file");
    EXPECT_EQ(choose({"--user-dir=/home/me"}).data, "");
}

TEST_F(CPathRootsTest, AGivenDataDirectoryIsntLookedUpInDataDirTxt) {
    disk_.givenFile("/games/nocturne/ACT1.POD", "");
    disk_.givenFile("/home/me/data_dir.txt", "/games/nocturne\n");
    const SPathRoots roots = choose({"--user-dir=/home/me", "--data-dir=/other"});
    EXPECT_EQ(roots.data, "/other");
    EXPECT_EQ(roots.data_dir_file_folder, "");
}

TEST_F(CPathRootsTest, ThePlatformsOwnFolderIsFilledByHand) {
    defaults_ = {.data = "/app", .user = std::nullopt, .data_filled_by_hand = true};
    const SPathRoots roots = choose({});
    EXPECT_EQ(roots.data, "/app");
    EXPECT_TRUE(roots.filled_by_hand);
    EXPECT_FALSE(choose({"--data-dir=/games"}).filled_by_hand);
}

TEST_F(CPathRootsTest, TheGameIsAnyPodInTheDataDirectoryOrAFolderInIt) {
    const SPathRoots roots = choose({"--data-dir=/games"});
    EXPECT_FALSE(hasGameData(disk_.host_, roots));
    disk_.givenFile("/games/readme.txt", "");
    disk_.givenFile("/games/.git/X.POD", "");
    disk_.givenFile("/games/a/b/c/d/e/X.POD", "");
    EXPECT_FALSE(hasGameData(disk_.host_, roots));
    disk_.givenFile("/games/games/blairwitch1/Startup.Pod", "");
    EXPECT_TRUE(hasGameData(disk_.host_, roots));
    disk_.givenFile("ACT1.POD", "");
    EXPECT_TRUE(hasGameData(disk_.host_, choose({})));
}

// A folder whose name starts with a dot isn't looked in, though the host doesn't call it hidden.
TEST_F(CPathRootsTest, ADotFolderIsntLookedInEvenWhenNotHidden) {
    ON_CALL(disk_.host_, findFiles(std::string_view("/games/*")))
        .WillByDefault(Return(std::vector<SFileInfo>{{.name = ".cache",
                                                      .size = 0,
                                                      .modified = 0,
                                                      .is_directory = true,
                                                      .is_hidden = false}}));
    ON_CALL(disk_.host_, findFiles(std::string_view("/games/.cache/*")))
        .WillByDefault(Return(std::vector<SFileInfo>{{.name = "X.POD", .size = 1, .modified = 0}}));
    EXPECT_FALSE(hasGameData(disk_.host_, choose({"--data-dir=/games"})));
}

// The root keeps its one slash.
TEST_F(CPathRootsTest, TheRootStaysTheRoot) {
    EXPECT_EQ(choose({"--data-dir=/"}).data, "/");
}

// With only a user directory, the data is the working directory's.
TEST_F(CPathRootsTest, AUserDirectoryAloneKeepsTheDataInTheWorkingDirectory) {
    const SPathRoots roots = choose({"--user-dir=/home/me"});
    EXPECT_THAT(
        describePathRoots(roots),
        Optional(std::string("data directory (working directory), user directory /home/me")));
}

TEST_F(CPathRootsTest, MissingGameDataSaysWhereToPutIt) {
    disk_.givenFile("/home/me/data_dir.txt", "\n");
    std::string message = describeMissingGameData(disk_.host_, choose({"--user-dir=/home/me"}));
    EXPECT_THAT(message, HasSubstr("in:\n\n/full/.\n\n"));
    EXPECT_THAT(message, HasSubstr("--data-dir"));
    EXPECT_THAT(message, HasSubstr("data_dir.txt in:\n\n/home/me"));
    EXPECT_THAT(message, Not(HasSubstr("will open now")));
    defaults_ = {.data = "/app", .user = std::nullopt, .data_filled_by_hand = true};
    message = describeMissingGameData(disk_.host_, choose({}));
    EXPECT_THAT(message, HasSubstr("in:\n\n/app\n\n"));
    EXPECT_THAT(message, HasSubstr("will open now"));
    EXPECT_THAT(describeMissingGameData(disk_.host_, choose({"--data-dir=/games"})),
                Not(HasSubstr("data_dir.txt")));
}

} // namespace
} // namespace nocturne::platform

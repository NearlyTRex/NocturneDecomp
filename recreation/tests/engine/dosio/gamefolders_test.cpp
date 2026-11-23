#include "engine/dosio/gamefolders.h"
#include "tests/mocks/platform/memoryfilesystem.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <optional>
#include <string>
#include <string_view>
#include <type_traits>

namespace nocturne::engine {
namespace {

using ::testing::ElementsAre;
using ::testing::IsEmpty;
using ::testing::Optional;

TEST(CGameFolders, PublicInterface) {
    static_assert(std::is_base_of_v<platform::CLayeredFileSystem, CGameFolders>);
    static_assert(std::is_constructible_v<CGameFolders, platform::IFileSystem &>);
}

class CGameFoldersTest : public ::testing::Test {
protected:
    platform::CMemoryFileSystem install_;
    CGameFolders files_{install_.host_};
};

// Until a game is chosen, startup's own files are the install's.
TEST_F(CGameFoldersTest, EveryPathIsTheInstallsUntilAGameIsChosen) {
    EXPECT_THAT(files_.getFolders(), IsEmpty());
    EXPECT_CALL(install_.host_, readFile(std::string_view(".\\system\\nocturne.ini")));
    static_cast<void>(files_.readFile(".\\system\\nocturne.ini"));
}

TEST_F(CGameFoldersTest, TheGamesFoldersAreItsPackagesOverTheInstalls) {
    files_.useGame("games/blairwitch1");
    EXPECT_THAT(files_.getFolders(), ElementsAre("games/blairwitch1", ""));
    install_.givenFile("games/blairwitch1/system/nocturne.ini", "bw1");
    install_.givenFile("gamecontrollerdb.txt", "pads");
    EXPECT_THAT(files_.readFile(".\\system\\nocturne.ini"), Optional(std::string("bw1")));
    EXPECT_THAT(files_.readFile("gamecontrollerdb.txt"), Optional(std::string("pads")));
}

// So two games keep their own settings and saves.
TEST_F(CGameFoldersTest, TheGameWritesInItsOwnFolder) {
    files_.useGame("games/blairwitch1");
    EXPECT_TRUE(files_.writeFile("save\\SAVE1.NOC", "bw1"));
    EXPECT_THAT(install_.contents("games/blairwitch1/save/SAVE1.NOC"),
                Optional(std::string("bw1")));
    files_.useGame("games/nocturne");
    EXPECT_EQ(files_.readFile("save\\SAVE1.NOC"), std::nullopt);
}

TEST_F(CGameFoldersTest, AGameInTheInstallsOwnFolderIsTheInstall) {
    files_.useGame("games/nocturne");
    files_.useGame("");
    EXPECT_THAT(files_.getFolders(), IsEmpty());
}

} // namespace
} // namespace nocturne::engine

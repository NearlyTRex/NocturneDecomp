#include "engine/package/packagedata.h"
#include "engine/package/packagediscovery.h"
#include "tests/mocks/engine/packagefiles.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <format>
#include <optional>
#include <ranges>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::engine {
namespace {

using ::testing::_;
using ::testing::HasSubstr;
using ::testing::Return;
using ::testing::StartsWith;

// A release of STARTUP.POD and A.POD, its install in memory.
class CPackageDiscoveryTest : public ::testing::Test {
protected:
    CPackageDiscoveryTest() {
        files_.givenFile("STARTUP.POD", "POD one");
        files_.givenFile("A.POD", "POD two");
    }

    [[nodiscard]] SPackageDiscovery discover() {
        return discoverPackages(files_.file_system_, releases_);
    }

    [[nodiscard]] static std::vector<std::string> folders(const SPackageDiscovery &found) {
        return found.packages | std::views::transform(&SPackage::folder) |
               std::ranges::to<std::vector>();
    }

    static std::string manifestText(std::string_view id) {
        return std::format("id = \"{}\"\n", id);
    }

    CPackageFiles files_;
    std::vector<SRelease> releases_{
        {.id = "1999-en",
         .name = "English",
         .required = {"STARTUP.POD"},
         .pods = {{.name = "STARTUP.POD", .size = 7, .xxh3 = std::string(kHashOfPodOne)},
                  {.name = "A.POD", .size = 7, .xxh3 = std::string(kHashOfPodTwo)}}}};
};

// It is written led by the line saying the game wrote it, and reads back as what was found.
TEST_F(CPackageDiscoveryTest, WithoutAManifestTheBaseGamesIsWrittenFromTheRelease) {
    const SPackageDiscovery found = discover();
    ASSERT_EQ(found.packages.size(), 1U);
    const SPackage &base = found.packages.front();
    EXPECT_EQ(base.folder, "");
    EXPECT_TRUE(base.written_by_game);
    EXPECT_EQ(base.manifest.release, "1999-en");
    EXPECT_EQ(base.manifest.pods.size(), 2U);
    EXPECT_TRUE(found.notes.empty());
    const std::optional<std::string> written = files_.contents("nocturne.toml");
    ASSERT_TRUE(written.has_value());
    EXPECT_THAT(*written, StartsWith(std::string(kWrittenByGame) + "\n"));
    EXPECT_EQ(parsePackageManifest(*written), base.manifest);
}

TEST_F(CPackageDiscoveryTest, TheBaseGamesOwnManifestIsUsedAsItIs) {
    files_.givenFile("nocturne.toml", "id = \"nocturne\"\n[[pod]]\npath = \"STARTUP.POD\"\n");
    EXPECT_CALL(files_.file_system_, writeFile).Times(0);
    const SPackageDiscovery found = discover();
    const SPackage &base = found.packages.front();
    EXPECT_FALSE(base.written_by_game);
    EXPECT_EQ(base.manifest.pods.size(), 1U);
}

TEST_F(CPackageDiscoveryTest, AManifestTheGameWroteIsMarkedAsItsOwn) {
    files_.givenFile("nocturne.toml", std::format("{}\nid = \"nocturne\"\n", kWrittenByGame));
    EXPECT_TRUE(discover().packages.front().written_by_game);
}

// The install is read as the release it matches, and the player's file is left to be fixed.
TEST_F(CPackageDiscoveryTest, ABrokenBaseManifestIsNotedAndLeftAsItIs) {
    files_.givenFile("nocturne.toml", "id = \n");
    const SPackageDiscovery found = discover();
    EXPECT_EQ(found.packages.front().manifest.release, "1999-en");
    ASSERT_EQ(found.notes.size(), 1U);
    EXPECT_THAT(found.notes.front(), StartsWith("nocturne.toml: line 1: "));
    EXPECT_THAT(found.notes.front(),
                HasSubstr("; the install is read as English and the file is left as it is"));
    EXPECT_EQ(files_.contents("nocturne.toml"), "id = \n");
}

// What the base manifest's generator noted comes through.
TEST_F(CPackageDiscoveryTest, TheBaseManifestsNotesAreKept) {
    files_.givenFile("A.POD", "POD one");
    EXPECT_EQ(discover().notes, std::vector<std::string>{"A.POD isn't the copy English shipped"});
}

TEST_F(CPackageDiscoveryTest, AManifestThatCantBeWrittenIsNotedAndUsed) {
    ON_CALL(files_.file_system_, writeFile).WillByDefault(Return(false));
    const SPackageDiscovery found = discover();
    EXPECT_EQ(found.packages.size(), 1U);
    EXPECT_EQ(found.notes, std::vector<std::string>{"nocturne.toml couldn't be written, so it is "
                                                    "made again on the next start"});
}

TEST_F(CPackageDiscoveryTest, APodInTheInstallFolderThatTheBaseGameDoesntListIsntLoaded) {
    files_.givenFile("MYMOD.POD", "POD one");
    files_.givenFile("startup.pod", "POD one");
    EXPECT_EQ(discover().notes,
              std::vector<std::string>{"MYMOD.POD isn't in a package's manifest, so it isn't "
                                       "loaded"});
}

// Its own folders are its own: they aren't searched for packages.
TEST_F(CPackageDiscoveryTest, AFolderWithAManifestIsAPackage) {
    files_.givenFile("mods/extra/nocturne.toml", manifestText("extra"));
    files_.givenFile("mods/extra/data/MORE.POD", "POD one");
    const SPackageDiscovery found = discover();
    EXPECT_EQ(folders(found), (std::vector<std::string>{"", "mods/extra"}));
    EXPECT_EQ(found.packages[1].manifest.id, "extra");
    EXPECT_FALSE(found.packages[1].written_by_game);
}

// Its id is its path, the separators dots and anything an id can't hold '_'; the folders below
// it are still searched.
TEST_F(CPackageDiscoveryTest, AFolderOfPodsWithoutAManifestIsGivenOne) {
    files_.givenFile("mods/My Mod/b.pod", "POD two");
    files_.givenFile("mods/My Mod/A.POD", "POD one");
    files_.givenFile("mods/My Mod/x.pod/inside.txt", "not a POD");
    files_.givenFile("mods/My Mod/more/C.POD", "POD one");
    const SPackageDiscovery found = discover();
    EXPECT_EQ(folders(found), (std::vector<std::string>{"", "mods/My Mod", "mods/My Mod/more"}));
    const SPackage &mod = found.packages[1];
    EXPECT_EQ(mod.manifest.id, "mods.My_Mod");
    EXPECT_EQ(mod.manifest.name, "mods/My Mod");
    EXPECT_TRUE(mod.written_by_game);
    EXPECT_EQ(mod.manifest.pods, (std::vector<SPackagePod>{{.path = "A.POD",
                                                            .size = 7,
                                                            .modified = CPackageFiles::kModified,
                                                            .xxh3 = std::string(kHashOfPodOne)},
                                                           {.path = "b.pod",
                                                            .size = 7,
                                                            .modified = CPackageFiles::kModified,
                                                            .xxh3 = std::string(kHashOfPodTwo)}}));
    const std::optional<std::string> written = files_.contents("mods/My Mod/nocturne.toml");
    ASSERT_TRUE(written.has_value());
    EXPECT_EQ(parsePackageManifest(*written), mod.manifest);
}

TEST_F(CPackageDiscoveryTest, AFolderWithNeitherAManifestNorPodsIsOnlySearched) {
    files_.givenFile("video/opening.avi", "movie");
    files_.givenFile("video/extra/nocturne.toml", manifestText("extra"));
    EXPECT_EQ(folders(discover()), (std::vector<std::string>{"", "video/extra"}));
}

TEST_F(CPackageDiscoveryTest, ABrokenManifestKeepsItsPackageOut) {
    files_.givenFile("mods/broken/nocturne.toml", "id = 1\n");
    files_.givenFile("mods/broken/inner/nocturne.toml", manifestText("inner"));
    const SPackageDiscovery found = discover();
    EXPECT_EQ(folders(found), std::vector<std::string>{""});
    EXPECT_EQ(found.notes, std::vector<std::string>{"mods/broken/nocturne.toml: id: not a string; "
                                                    "the package isn't loaded"});
}

// A folder named with a leading dot, as .git is, or marked hidden.
TEST_F(CPackageDiscoveryTest, HiddenFoldersArentSearched) {
    ON_CALL(files_.file_system_, findFiles(std::string_view("*")))
        .WillByDefault(Return(std::vector<platform::SFileInfo>{
            {.name = ".git", .is_directory = true},
            {.name = "Hidden", .is_directory = true, .is_hidden = true},
            {.name = "Shown", .is_directory = true}}));
    EXPECT_CALL(files_.file_system_, readFile(_)).Times(::testing::AnyNumber());
    EXPECT_CALL(files_.file_system_, readFile(std::string_view(".git/nocturne.toml"))).Times(0);
    EXPECT_CALL(files_.file_system_, readFile(std::string_view("Hidden/nocturne.toml"))).Times(0);
    EXPECT_CALL(files_.file_system_, readFile(std::string_view("Shown/nocturne.toml")));
    EXPECT_EQ(folders(discover()), std::vector<std::string>{""});
}

// Folders are taken by name ignoring case; the first keeps an id, the base game's always.
TEST_F(CPackageDiscoveryTest, AnIdAlreadyTakenKeepsTheLaterPackageOut) {
    files_.givenFile("b/nocturne.toml", manifestText("same"));
    files_.givenFile("A/nocturne.toml", manifestText("same"));
    files_.givenFile("c/nocturne.toml", manifestText("nocturne"));
    const SPackageDiscovery found = discover();
    EXPECT_EQ(folders(found), (std::vector<std::string>{"", "A"}));
    EXPECT_EQ(found.notes,
              (std::vector<std::string>{"b: the id same is A's too, so it isn't loaded",
                                        "c: the id nocturne is the base game's too, so it isn't "
                                        "loaded"}));
}

TEST_F(CPackageDiscoveryTest, AManifestIsWrittenLedByTheGamesLine) {
    const SPackage package{.manifest = {.id = "extra",
                                        .name = "extra",
                                        .version = {},
                                        .release = {},
                                        .dependencies = {},
                                        .required = {},
                                        .pods = {}},
                           .folder = "mods/extra",
                           .written_by_game = true};
    EXPECT_CALL(files_.file_system_,
                writeFile(std::string_view("mods/extra/nocturne.toml"),
                          std::string_view(std::format("{}\n{}", kWrittenByGame,
                                                       formatPackageManifest(package.manifest)))))
        .WillOnce(Return(true));
    EXPECT_TRUE(writeManifest(files_.file_system_, package));
    EXPECT_CALL(files_.file_system_, writeFile(_, _)).WillOnce(Return(false));
    EXPECT_FALSE(writeManifest(files_.file_system_, package));
}

} // namespace
} // namespace nocturne::engine

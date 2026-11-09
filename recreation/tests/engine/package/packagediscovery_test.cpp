#include "engine/package/packagedata.h"
#include "engine/package/packagediscovery.h"
#include "tests/mocks/engine/packagefiles.h"
#include "tests/mocks/engine/testarchive.h"

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
using ::testing::MatchesRegex;
using ::testing::Return;
using ::testing::StartsWith;

// A release of STARTUP.POD and A.POD, its install in memory, empty until a test fills it.
class CDiscoveryFixture : public ::testing::Test {
protected:
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

    // The base game's manifest the game wrote, needing STARTUP.POD.
    static std::string writtenBaseManifest() {
        return std::format("{}\nid = \"nocturne\"\nrequired = [\"STARTUP.POD\"]\n"
                           "[[pod]]\npath = \"STARTUP.POD\"\n",
                           kWrittenByGame);
    }

    CPackageFiles files_;
    std::vector<SRelease> releases_{
        {.id = "1999-en-nocturne",
         .name = "English",
         .game = "nocturne",
         .required = {"STARTUP.POD"},
         .pods = {{.name = "STARTUP.POD", .size = 7, .xxh3 = std::string(kHashOfPodOne)},
                  {.name = "A.POD", .size = 7, .xxh3 = std::string(kHashOfPodTwo)}},
         .files = {},
         .content = {}}};
};

// The release's PODs in the install folder.
class CPackageDiscoveryTest : public CDiscoveryFixture {
protected:
    CPackageDiscoveryTest() {
        files_.givenFile("STARTUP.POD", "POD one");
        files_.givenFile("A.POD", "POD two");
    }
};

using CMovedInstallTest = CDiscoveryFixture;

// It is written led by the line saying the game wrote it, and reads back as what was found.
TEST_F(CPackageDiscoveryTest, WithoutAManifestTheBaseGamesIsWrittenFromTheRelease) {
    const SPackageDiscovery found = discover();
    ASSERT_EQ(found.packages.size(), 1U);
    const SPackage &base = found.packages.front();
    EXPECT_EQ(base.folder, "");
    EXPECT_TRUE(base.written_by_game);
    EXPECT_EQ(base.manifest.release, "1999-en-nocturne");
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
    EXPECT_EQ(found.notes,
              std::vector<std::string>{"A.POD isn't in a package's manifest, so it isn't loaded"});
}

// Its PODs' paths are from its own folder.
TEST_F(CMovedInstallTest, TheBaseGamesManifestCanBeInAnyFolder) {
    files_.givenFile("pods/STARTUP.POD", "POD one");
    files_.givenFile("pods/nocturne.toml",
                     "id = \"nocturne\"\nrequired = [\"STARTUP.POD\"]\n[[pod]]\npath = "
                     "\"STARTUP.POD\"\n");
    EXPECT_CALL(files_.file_system_, writeFile).Times(0);
    const SPackageDiscovery found = discover();
    EXPECT_EQ(folders(found), std::vector<std::string>{"pods"});
    EXPECT_TRUE(found.notes.empty()) << found.notes.front();
}

TEST_F(CPackageDiscoveryTest, TheBaseManifestCarriesItsReleasesGameContent) {
    releases_.front().content.front_end = "nocturne";
    const SPackageDiscovery found = discover();
    EXPECT_EQ(found.packages.front().manifest.game.front_end, "nocturne");
    EXPECT_THAT(files_.bytes("nocturne.toml"), HasSubstr("front_end = 'nocturne'"));
}

// A build whose game content changed brings the manifests it wrote up to it.
TEST_F(CPackageDiscoveryTest, AWrittenManifestWithOtherGameContentIsWrittenAgain) {
    releases_.front().content.front_end = "nocturne";
    files_.givenFile("nocturne.toml",
                     std::format("{}\nid = \"nocturne\"\nrelease = \"1999-en-nocturne\"\n"
                                 "front_end = \"old\"\n[[pod]]\npath = \"STARTUP.POD\"\n",
                                 kWrittenByGame));
    const SPackageDiscovery found = discover();
    EXPECT_EQ(found.packages.front().manifest.game.front_end, "nocturne");
    EXPECT_THAT(found.notes,
                ::testing::Contains("nocturne.toml is written again with English's game content"));
    EXPECT_THAT(files_.bytes("nocturne.toml"), HasSubstr("front_end = 'nocturne'"));
}

TEST_F(CPackageDiscoveryTest, AWrittenManifestWithItsReleasesContentIsLeftAsItIs) {
    files_.givenFile("nocturne.toml",
                     std::format("{}\nid = \"nocturne\"\nrelease = \"1999-en-nocturne\"\n"
                                 "[[pod]]\npath = \"STARTUP.POD\"\n[[pod]]\npath = \"A.POD\"\n",
                                 kWrittenByGame));
    EXPECT_CALL(files_.file_system_, writeFile).Times(0);
    EXPECT_TRUE(discover().notes.empty());
}

// The player's own manifest, or one of a release this build doesn't know, keeps its content.
TEST_F(CPackageDiscoveryTest, OnlyAWrittenManifestOfAKnownReleaseTakesItsContent) {
    releases_.front().content.front_end = "nocturne";
    files_.givenFile("nocturne.toml", "id = \"nocturne\"\nrelease = \"1999-en-nocturne\"\n"
                                      "front_end = \"mine\"\n[[pod]]\npath = \"STARTUP.POD\"\n");
    files_.givenFile("mods/old/nocturne.toml",
                     std::format("{}\nid = \"old\"\nrelease = \"1998-xx\"\n", kWrittenByGame));
    EXPECT_CALL(files_.file_system_, writeFile).Times(0);
    const SPackageDiscovery found = discover();
    ASSERT_EQ(found.packages.size(), 2U);
    EXPECT_EQ(found.packages[0].manifest.game.front_end, "mine");
    EXPECT_EQ(found.packages[1].manifest.game.front_end, std::nullopt);
}

TEST_F(CPackageDiscoveryTest, AManifestTheGameWroteIsMarkedAsItsOwn) {
    files_.givenFile("nocturne.toml", std::format("{}\nid = \"nocturne\"\n", kWrittenByGame));
    EXPECT_TRUE(discover().packages.front().written_by_game);
}

// The install is read as the release it matches, and the player's file is left to be fixed.
TEST_F(CPackageDiscoveryTest, ABrokenBaseManifestIsNotedAndLeftAsItIs) {
    files_.givenFile("nocturne.toml", "id = \n");
    const SPackageDiscovery found = discover();
    EXPECT_EQ(found.packages.front().manifest.release, "1999-en-nocturne");
    ASSERT_EQ(found.notes.size(), 2U);
    EXPECT_THAT(found.notes[0], StartsWith("nocturne.toml: line 1: "));
    EXPECT_THAT(found.notes[0], HasSubstr("; the package isn't loaded"));
    EXPECT_EQ(found.notes[1], "the install is read as English and nocturne.toml is left as it is");
    EXPECT_EQ(files_.contents("nocturne.toml"), "id = \n");
}

// One the game wrote that has lost a POD it needs is written again from where the PODs are now;
// the player's own is left as it is.
TEST_F(CMovedInstallTest, AStaleBaseManifestIsWrittenAgain) {
    files_.givenFile("nocturne.toml", writtenBaseManifest());
    files_.givenFile("pods/STARTUP.POD", "POD one");
    files_.givenFile("pods/A.POD", "POD two");
    const SPackageDiscovery found = discover();
    EXPECT_EQ(folders(found), std::vector<std::string>{"pods"});
    EXPECT_EQ(found.notes,
              std::vector<std::string>{"nocturne.toml has lost a POD it needs, so it is written "
                                       "again"});
    EXPECT_EQ(files_.contents("nocturne.toml"), std::nullopt);
    EXPECT_THAT(files_.bytes("pods/nocturne.toml"), StartsWith(std::string(kWrittenByGame)));
}

// The PODs and a manifest for them moved to a folder, the one left behind stale: the moved one
// is the base game.
TEST_F(CMovedInstallTest, AStaleBaseManifestGivesWayToAMovedOne) {
    files_.givenFile("nocturne.toml", writtenBaseManifest());
    files_.givenFile("pods/STARTUP.POD", "POD one");
    files_.givenFile("pods/nocturne.toml", writtenBaseManifest());
    const SPackageDiscovery found = discover();
    EXPECT_EQ(folders(found), std::vector<std::string>{"pods"});
    EXPECT_EQ(found.notes,
              std::vector<std::string>{"nocturne.toml has lost a POD it needs, so it is written "
                                       "again"});
}

// The PODs moved away from it are then a folder of PODs like any other.
TEST_F(CMovedInstallTest, AStaleBaseManifestOfThePlayersOwnIsKept) {
    const std::string own = "id = \"nocturne\"\nrequired = [\"STARTUP.POD\"]\n";
    files_.givenFile("nocturne.toml", own);
    files_.givenFile("pods/STARTUP.POD", "POD one");
    EXPECT_EQ(folders(discover()), (std::vector<std::string>{"", "pods"}));
    EXPECT_EQ(files_.contents("nocturne.toml"), own);
}

TEST_F(CMovedInstallTest, WithoutTheReleasesRequiredPodsNoBaseManifestIsWritten) {
    files_.givenFile("A.POD", "POD two");
    EXPECT_CALL(files_.file_system_, writeFile).Times(0);
    const SPackageDiscovery found = discover();
    EXPECT_TRUE(found.packages.empty());
    EXPECT_EQ(found.notes, (std::vector<std::string>{
                               "English's PODs weren't found, so the base game has no manifest",
                               "A.POD isn't in a package's manifest, so it isn't loaded"}));
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

// A second file spelt as a shipped POD in another case is another file, and the first is taken;
// a link to a POD the base game has is that POD.
TEST_F(CPackageDiscoveryTest, APodInTheInstallFolderThatTheBaseGameDoesntHaveIsntLoaded) {
    files_.givenFile("MYMOD.POD", "POD one");
    files_.givenFile("startup.pod", "POD one");
    files_.givenLink("A-link.pod", "A.POD");
    EXPECT_EQ(discover().notes,
              (std::vector<std::string>{
                  "MYMOD.POD isn't in a package's manifest, so it isn't loaded",
                  "startup.pod isn't in a package's manifest, so it isn't loaded"}));
}

// As netplay_test.sh stages one: every POD a link to the install's.
TEST_F(CPackageDiscoveryTest, AFolderLinkingToTheBaseGamesPodsIsntAPackage) {
    files_.givenLink("build/netplay/Client/STARTUP.POD", "STARTUP.POD");
    files_.givenLink("build/netplay/Client/A.POD", "A.POD");
    const SPackageDiscovery found = discover();
    EXPECT_EQ(folders(found), std::vector<std::string>{""});
    EXPECT_TRUE(found.notes.empty()) << found.notes.front();
    EXPECT_EQ(files_.contents("build/netplay/Client/nocturne.toml"), std::nullopt);
}

// Moved into a folder, the release is found there and its manifest written there; any other POD
// in it is noted, as the folder is the base game's.
TEST_F(CMovedInstallTest, TheBaseGamesPodsCanBeInAFolder) {
    files_.givenFile("pods/STARTUP.POD", "POD one");
    files_.givenFile("pods/A.POD", "POD two");
    files_.givenFile("pods/MINE.POD", "mine");
    const SPackageDiscovery found = discover();
    EXPECT_EQ(folders(found), std::vector<std::string>{"pods"});
    EXPECT_EQ(found.packages[0].manifest.required, std::vector<std::string>{"STARTUP.POD"});
    EXPECT_EQ(found.packages[0].manifest.pods.size(), 2U);
    EXPECT_EQ(parsePackageManifest(files_.bytes("pods/nocturne.toml")), found.packages[0].manifest);
    EXPECT_EQ(found.notes, std::vector<std::string>{"pods/MINE.POD isn't in a package's manifest, "
                                                    "so it isn't loaded"});
}

// The folder holding them all holds the manifest, each POD by its path from there.
TEST_F(CMovedInstallTest, PodsInSeveralFoldersShareTheFolderHoldingThem) {
    files_.givenFile("data/one/STARTUP.POD", "POD one");
    files_.givenFile("data/two/A.POD", "POD two");
    const SPackageDiscovery found = discover();
    ASSERT_EQ(folders(found), std::vector<std::string>{"data"});
    EXPECT_EQ(found.packages[0].manifest.pods[0].path, "one/STARTUP.POD");
    EXPECT_EQ(found.packages[0].manifest.pods[1].path, "two/A.POD");
    EXPECT_EQ(found.packages[0].manifest.required, std::vector<std::string>{"one/STARTUP.POD"});
}

// Unreadable, it has no folder of its own to give the manifest, which goes in the install's.
TEST_F(CMovedInstallTest, WithNoShippedPodReadableTheManifestIsTheInstallFolders) {
    files_.givenUnreadableFile("pods/STARTUP.POD", 7);
    const SPackageDiscovery found = discover();
    ASSERT_EQ(folders(found), std::vector<std::string>{""});
    EXPECT_EQ(found.packages[0].manifest.required, std::vector<std::string>{"pods/STARTUP.POD"});
}

// A link to a POD a mod's manifest names isn't the base game's, nor a package of its own.
TEST_F(CMovedInstallTest, APodAManifestNamesIsntLookedForAgain) {
    files_.givenFile("pods/STARTUP.POD", "POD one");
    files_.givenFile("pods/A.POD", "POD two");
    files_.givenFile("mods/extra/nocturne.toml", "id = \"extra\"\n[[pod]]\npath = \"X.POD\"\n");
    files_.givenFile("mods/extra/X.POD", "x");
    files_.givenLink("links/X.POD", "mods/extra/X.POD");
    EXPECT_EQ(folders(discover()), (std::vector<std::string>{"pods", "mods/extra"}));
}

// As a dangling link: it is listed but has no real file, so it is no other POD.
TEST_F(CMovedInstallTest, APodWithoutARealPathIsAPodOfItsOwn) {
    files_.givenFile("pods/STARTUP.POD", "POD one");
    files_.givenFile("mods/odd/ODD.POD", "odd");
    ON_CALL(files_.file_system_, getRealPath(std::string_view("mods/odd/ODD.POD")))
        .WillByDefault(Return(std::nullopt));
    EXPECT_EQ(folders(discover()), (std::vector<std::string>{"pods", "mods/odd"}));
}

// A missing one keeps its bare name.
TEST_F(CMovedInstallTest, AMissingShippedPodIsNamedFromTheBaseGamesFolder) {
    files_.givenFile("pods/STARTUP.POD", "POD one");
    const SPackageDiscovery found = discover();
    ASSERT_EQ(folders(found), std::vector<std::string>{"pods"});
    EXPECT_EQ(found.packages[0].manifest.pods[1].path, "A.POD");
    EXPECT_EQ(found.notes, std::vector<std::string>{"A.POD is missing"});
}

// A package's folders are searched too: a folder of PODs in it is a package of its own.
TEST_F(CPackageDiscoveryTest, AFolderWithAManifestIsAPackageAndItsFoldersAreSearched) {
    files_.givenFile("mods/extra/nocturne.toml", manifestText("extra"));
    files_.givenFile("mods/extra/data/MORE.POD", "POD one");
    files_.givenFile("mods/extra/UNLISTED.POD", "POD one");
    const SPackageDiscovery found = discover();
    EXPECT_EQ(folders(found), (std::vector<std::string>{"", "mods/extra", "mods/extra/data"}));
    EXPECT_EQ(found.packages[1].manifest.id, "extra");
    EXPECT_FALSE(found.packages[1].written_by_game);
    EXPECT_EQ(found.notes, std::vector<std::string>{"mods/extra/UNLISTED.POD isn't in a package's "
                                                    "manifest, so it isn't loaded"});
}

// Its id is its path, the separators dots and anything an id can't hold '_'.
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

// Its PODs are left with it, for its author to mend, and the folders below are still searched.
TEST_F(CPackageDiscoveryTest, ABrokenManifestKeepsItsPackageOut) {
    files_.givenFile("mods/broken/nocturne.toml", "id = 1\n");
    files_.givenFile("mods/broken/OWN.POD", "own");
    files_.givenFile("mods/broken/inner/nocturne.toml", manifestText("inner"));
    EXPECT_CALL(files_.file_system_, writeFile(_, _)).Times(::testing::AnyNumber());
    EXPECT_CALL(files_.file_system_, writeFile(std::string_view("mods/broken/nocturne.toml"), _))
        .Times(0);
    const SPackageDiscovery found = discover();
    EXPECT_EQ(folders(found), (std::vector<std::string>{"", "mods/broken/inner"}));
    EXPECT_EQ(found.notes,
              (std::vector<std::string>{
                  "mods/broken/nocturne.toml: id: not a string; the package isn't loaded",
                  "mods/broken/OWN.POD isn't in a package's manifest, so it isn't loaded"}));
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

// Folders are taken by name ignoring case, each before those in it; the first keeps an id.
TEST_F(CPackageDiscoveryTest, AnIdAlreadyTakenKeepsTheLaterPackageOut) {
    files_.givenFile("nocturne.toml", "id = \"nocturne\"\n");
    files_.givenFile("b/nocturne.toml", manifestText("same"));
    files_.givenFile("A/nocturne.toml", manifestText("same"));
    files_.givenFile("c/nocturne.toml", manifestText("nocturne"));
    const SPackageDiscovery found = discover();
    EXPECT_EQ(folders(found), (std::vector<std::string>{"", "A"}));
    EXPECT_THAT(found.notes, ::testing::IsSupersetOf(std::vector<std::string>{
                                 "b/nocturne.toml: the id same is A/nocturne.toml's too, so it "
                                 "isn't loaded",
                                 "c/nocturne.toml: the id nocturne is nocturne.toml's too, so it "
                                 "isn't loaded"}));
}

// The folder b/c would be b.c, which a's manifest took first.
TEST_F(CPackageDiscoveryTest, AFolderOfPodsWhoseIdIsTakenIsntLoaded) {
    files_.givenFile("a/nocturne.toml", manifestText("b.c"));
    files_.givenFile("b/c/MINE.POD", "mine");
    const SPackageDiscovery found = discover();
    EXPECT_EQ(folders(found), (std::vector<std::string>{"", "a"}));
    EXPECT_EQ(found.notes, std::vector<std::string>{"b/c/nocturne.toml: the id b.c is "
                                                    "a/nocturne.toml's too, so it isn't loaded"});
    EXPECT_EQ(files_.contents("b/c/nocturne.toml"), std::nullopt);
}

// Found where it lies, by what it holds rather than what it is called, and read from the cache.
TEST_F(CPackageDiscoveryTest, AnArchiveWithAManifestIsItsPackage) {
    files_.givenFile(
        "mods/hell.dat",
        makeTestArchive(ETestArchiveFormat::SevenZip,
                        {{.path = "hell/nocturne.toml",
                          .contents = manifestText("hell") + "[[pod]]\npath = \"HELL.POD\"\n"},
                         {.path = "hell/HELL.POD", .contents = "POD one"},
                         {.path = "hell/EXTRA.POD", .contents = "POD two"}}));
    const SPackageDiscovery found = discover();
    ASSERT_EQ(found.packages.size(), 2U);
    const SPackage &hell = found.packages[1];
    EXPECT_EQ(hell.manifest.id, "hell");
    EXPECT_THAT(hell.folder, MatchesRegex(R"(\.packages/hell\.dat-[0-9a-f]{16}/hell)"));
    EXPECT_EQ(files_.bytes(hell.folder + "/HELL.POD"), "POD one");
    EXPECT_EQ(found.notes, std::vector<std::string>{"mods/hell.dat/hell/EXTRA.POD isn't in a "
                                                    "package's manifest, so it isn't loaded"});
}

// Each folder of PODs in it by its path inside, and those at its top by the archive's name.
TEST_F(CPackageDiscoveryTest, AnArchivesPodsWithoutAManifestAreNamedByWhatItHolds) {
    files_.givenFile("mods/Hell Mod.zip",
                     makeTestArchive(ETestArchiveFormat::Zip,
                                     {{.path = "TOP.POD", .contents = "POD one"},
                                      {.path = "inner/levels/LEVEL.POD", .contents = "POD two"}}));
    const SPackageDiscovery found = discover();
    ASSERT_EQ(found.packages.size(), 3U);
    EXPECT_EQ(found.packages[1].manifest.id, "Hell_Mod");
    EXPECT_EQ(found.packages[1].manifest.name, "mods/Hell Mod.zip");
    EXPECT_EQ(found.packages[2].manifest.id, "inner.levels");
    EXPECT_EQ(found.packages[2].manifest.name, "mods/Hell Mod.zip/inner/levels");
    EXPECT_TRUE(files_.contents(found.packages[2].folder + "/nocturne.toml").has_value());
}

TEST_F(CPackageDiscoveryTest, AnArchiveThatIsntAPackageIsNoted) {
    files_.givenFile("saves.zip", makeTestArchive(ETestArchiveFormat::Zip,
                                                  {{.path = "a.sav", .contents = "x"}}));
    files_.givenFile("readme.txt", "not an archive");
    EXPECT_EQ(discover().notes, std::vector<std::string>{"saves.zip holds no nocturne.toml and no "
                                                         "POD, so it isn't loaded"});
}

// A POD or a manifest beginning as an archive does isn't one.
TEST_F(CPackageDiscoveryTest, OnlyOtherFilesAreLookedAtAsArchives) {
    files_.givenFile("readme.txt", "not an archive");
    EXPECT_CALL(files_.file_system_, openFile(_, _)).Times(::testing::AnyNumber());
    EXPECT_CALL(files_.file_system_, openFile(std::string_view("readme.txt"), _));
    EXPECT_CALL(files_.file_system_, openFile(std::string_view("nocturne.toml"), _)).Times(0);
    static_cast<void>(discover());
}

TEST_F(CPackageDiscoveryTest, TheCacheKeepsOnlyTheArchivesFound) {
    files_.givenFile("hell.zip", makeTestArchive(ETestArchiveFormat::Zip,
                                                 {{.path = "HELL.POD", .contents = "POD one"}}));
    files_.givenFile(".packages/gone.zip-0123456789abcdef.unpacked", "gone.zip");
    const std::string kept = discover().packages[1].folder;
    EXPECT_FALSE(files_.contents(".packages/gone.zip-0123456789abcdef.unpacked").has_value());
    EXPECT_TRUE(files_.contents(kept + ".unpacked").has_value());
}

// In the folder the base game's title names, its release's here; its notes still name the
// archive where it lies.
TEST_F(CPackageDiscoveryTest, AnArchiveIsUnpackedInTheUsersCacheWhereThereIsOne) {
    releases_.front().content.title = "Nocturne";
    ON_CALL(files_.file_system_, getCacheFolder(std::string_view("Nocturne")))
        .WillByDefault(Return(std::optional<std::string>("/home/u/.cache/nocturne")));
    ON_CALL(files_.file_system_, getRealPath(std::string_view(".")))
        .WillByDefault(Return(std::optional<std::string>("/games/Nocturne")));
    files_.givenFile("hell.zip", makeTestArchive(ETestArchiveFormat::Zip,
                                                 {{.path = "HELL.POD", .contents = "POD one"},
                                                  {.path = "STRAY.POD", .contents = "POD two"},
                                                  {.path = "nocturne.toml",
                                                   .contents = manifestText("hell") +
                                                               "[[pod]]\npath = \"HELL.POD\"\n"}}));
    const SPackageDiscovery found = discover();
    ASSERT_EQ(found.packages.size(), 2U);
    EXPECT_THAT(found.packages[1].folder,
                MatchesRegex(R"(/home/u/\.cache/nocturne/packages/Nocturne-[0-9a-f]{16}/)"
                             R"(hell\.zip-[0-9a-f]{16})"));
    EXPECT_EQ(files_.bytes(found.packages[1].folder + "/HELL.POD"), "POD one");
    EXPECT_EQ(found.notes, std::vector<std::string>{"hell.zip/STRAY.POD isn't in a package's "
                                                    "manifest, so it isn't loaded"});
}

// A base manifest of its own may name it, and wins over its release's.
TEST_F(CPackageDiscoveryTest, TheBaseGamesOwnTitleNamesTheCache) {
    releases_.front().content.title = "Nocturne";
    files_.givenFile("nocturne.toml",
                     "id = \"nocturne\"\nrelease = \"1999-en-nocturne\"\n"
                     "title = \"Nocturne Redux\"\n[[pod]]\npath = \"STARTUP.POD\"\n"
                     "[[pod]]\npath = \"A.POD\"\n");
    ON_CALL(files_.file_system_, getCacheFolder(std::string_view("Nocturne Redux")))
        .WillByDefault(Return(std::optional<std::string>("/cache/nocturne-redux")));
    ON_CALL(files_.file_system_, getRealPath(std::string_view(".")))
        .WillByDefault(Return(std::optional<std::string>("/games/Nocturne")));
    files_.givenFile("hell.zip", makeTestArchive(ETestArchiveFormat::Zip,
                                                 {{.path = "HELL.POD", .contents = "POD"}}));
    EXPECT_THAT(discover().packages.back().folder, StartsWith("/cache/nocturne-redux/packages/"));
}

// Without a title, as one only its release gives, archives stay in the install.
TEST_F(CPackageDiscoveryTest, AnUntitledBaseGamesArchivesAreUnpackedInTheInstall) {
    files_.givenFile("nocturne.toml",
                     "id = \"nocturne\"\nrelease = \"1999-xx\"\n"
                     "[[pod]]\npath = \"STARTUP.POD\"\n[[pod]]\npath = \"A.POD\"\n");
    ON_CALL(files_.file_system_, getCacheFolder)
        .WillByDefault(Return(std::optional<std::string>("/cache/game")));
    ON_CALL(files_.file_system_, getRealPath(std::string_view(".")))
        .WillByDefault(Return(std::optional<std::string>("/games/Nocturne")));
    files_.givenFile("hell.zip", makeTestArchive(ETestArchiveFormat::Zip,
                                                 {{.path = "HELL.POD", .contents = "POD"}}));
    EXPECT_THAT(discover().packages.back().folder, StartsWith(".packages/hell.zip-"));
}

// Its PODs not being in the install isn't noted when an archive holds it.
TEST_F(CMovedInstallTest, TheBaseGameMayBeInAnArchive) {
    files_.givenFile("game.zip", makeTestArchive(ETestArchiveFormat::Zip,
                                                 {{.path = "nocturne.toml",
                                                   .contents = manifestText("nocturne")}}));
    const SPackageDiscovery found = discover();
    ASSERT_EQ(found.packages.size(), 1U);
    EXPECT_THAT(found.packages[0].folder, StartsWith(".packages/game.zip-"));
    EXPECT_TRUE(found.notes.empty()) << found.notes.front();
}

TEST_F(CPackageDiscoveryTest, AnArchiveNotYetUnpackedCanBeLeftForLater) {
    files_.givenFile("hell.zip", makeTestArchive(ETestArchiveFormat::Zip,
                                                 {{.path = "HELL.POD", .contents = "POD one"}}));
    EXPECT_CALL(files_.file_system_, makeDirectory).Times(0);
    const SPackageDiscovery found =
        discoverPackages(files_.file_system_, releases_, EArchiveUnpacking::Later);
    EXPECT_EQ(folders(found), std::vector<std::string>{""});
    EXPECT_EQ(found.archives_left, std::vector<std::string>{"hell.zip"});
    EXPECT_TRUE(found.notes.empty()) << found.notes.front();
}

TEST_F(CPackageDiscoveryTest, AnArchiveUnpackedAlreadyIsntLeftForLater) {
    files_.givenFile("hell.zip", makeTestArchive(ETestArchiveFormat::Zip,
                                                 {{.path = "HELL.POD", .contents = "POD one"}}));
    const std::string unpacked = discover().packages[1].folder;
    const SPackageDiscovery found =
        discoverPackages(files_.file_system_, releases_, EArchiveUnpacking::Later);
    EXPECT_EQ(folders(found), (std::vector<std::string>{"", unpacked}));
    EXPECT_TRUE(found.archives_left.empty());
}

// It would never be unpacked, so there is nothing to wait for.
TEST_F(CPackageDiscoveryTest, AnArchiveThatIsntAPackageIsntLeftForLater) {
    files_.givenFile("saves.zip", makeTestArchive(ETestArchiveFormat::Zip,
                                                  {{.path = "a.sav", .contents = "x"}}));
    const SPackageDiscovery found =
        discoverPackages(files_.file_system_, releases_, EArchiveUnpacking::Later);
    EXPECT_TRUE(found.archives_left.empty());
    EXPECT_EQ(found.notes, std::vector<std::string>{"saves.zip holds no nocturne.toml and no "
                                                    "POD, so it isn't loaded"});
}

TEST_F(CPackageDiscoveryTest, AManifestIsWrittenLedByTheGamesLine) {
    const SPackage package{.manifest = {.id = "extra",
                                        .name = "extra",
                                        .version = {},
                                        .release = {},
                                        .dependencies = {},
                                        .required = {},
                                        .pods = {},
                                        .game = {}},
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

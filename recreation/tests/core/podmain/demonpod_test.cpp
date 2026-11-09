#include "common/error/fatalerror.h"
#include "core/podmain/demonpod.h"
#include "engine/dosio/dosio.h"
#include "engine/dosio/foundfileinfo.h"
#include "engine/package/packagedata.h"
#include "engine/package/packagediscovery.h"
#include "engine/package/podhash.h"
#include "engine/pod/podfile.h"
#include "platform/log.h"
#include "tests/mocks/engine/packagefiles.h"
#include "tests/mocks/engine/podimage.h"
#include "tests/mocks/engine/testarchive.h"
#include "tests/mocks/platform/mocklog.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <format>
#include <optional>
#include <string>
#include <string_view>
#include <type_traits>
#include <vector>

namespace nocturne::core {
namespace {

using engine::CPackageFiles;
using engine::makePod2;
using ::testing::_;
using ::testing::Contains;
using ::testing::EndsWith;
using ::testing::Not;
using ::testing::Return;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

TEST(CDemonPod, DerivesFromCPod) {
    static_assert(std::is_base_of_v<engine::CPod, CDemonPod>);
    static_assert(std::is_same_v<decltype(&CDemonPod::getGameContent),
                                 const engine::SGameContent &(CDemonPod::*)() const>);
}

// A release of STARTUP.POD and ACT1.POD, both holding data\shared.txt; the later, ACT1.POD,
// answers for it. Paths are the install's own, and each note goes to the file log.
class CDemonPodTest : public ::testing::Test {
protected:
    CDemonPodTest() {
        ON_CALL(files_.file_system_, getFullPath).WillByDefault([](std::string_view path) {
            return std::optional(std::string(path));
        });
        ON_CALL(log_, write).WillByDefault([this](platform::ELogSubsystem, std::string_view line) {
            notes_.emplace_back(line);
        });
        givenPod("STARTUP.POD", {{.name = "data\\menu.txt", .data = "menu"},
                                 {.name = "data\\shared.txt", .data = "startup"}});
        givenPod("ACT1.POD", {{.name = "world\\a.msn", .data = "act1"},
                              {.name = "data\\shared.txt", .data = "act1"}});
        releases_ = {{.id = "1999-en-nocturne",
                      .name = "English",
                      .game = "nocturne",
                      .required = {"STARTUP.POD"},
                      .pods = {shipped("STARTUP.POD"), shipped("ACT1.POD")},
                      .files = {},
                      .content = {}}};
    }

    // Another start of the game, over the same install.
    [[nodiscard]] CDemonPod restart() {
        return {files_.file_system_, dosio_, releases_, log_};
    }

    void givenPod(const std::string &path, const std::vector<engine::SPodImageFile> &files) {
        files_.givenFile(path, makePod2("", files));
    }

    // As the install has it now.
    engine::SReleaseFile shipped(const std::string &name) {
        return {.name = name,
                .size = files_.bytes(name).size(),
                .xxh3 = engine::hashFile(files_.file_system_, name).value_or("")};
    }

    // Turned on after those before it.
    void givenMod(const std::string &folder, const std::string &manifest) {
        files_.givenFile(folder + "/nocturne.toml", manifest);
        turned_on_ += engine::parsePackageManifest(manifest).value().id + "\n";
    }

    // The file that answers for the name: its pod, or itself on disk.
    std::optional<std::string> answer(const std::string &name) {
        engine::SFoundFileInfo info(name);
        if (!pod().findFile(info)) {
            return std::nullopt;
        }
        EXPECT_EQ(info.found_path, name);
        return info.target_path;
    }

    // The base game and each mod given turned on, unless the test lists its own.
    void load() {
        if (!files_.contents("loadorder.txt")) {
            files_.givenFile("loadorder.txt", turned_on_);
        }
        pod().load();
    }

    std::string turned_on_ = "nocturne\n";
    CPackageFiles files_;
    engine::CDosIo dosio_{files_.file_system_};
    ::testing::NiceMock<platform::MockLog> log_;
    std::vector<std::string> notes_;
    std::vector<engine::SRelease> releases_;
    // Made once the releases are.
    std::optional<CDemonPod> started_;

    CDemonPod &pod() {
        if (!started_) {
            started_.emplace(files_.file_system_, dosio_, releases_, log_);
        }
        return *started_;
    }
};

TEST_F(CDemonPodTest, TheBaseGamesPodsAnswerTheLaterFirst) {
    load();
    EXPECT_EQ(answer("data\\shared.txt"), "ACT1.POD");
    EXPECT_EQ(answer("data\\menu.txt"), "STARTUP.POD");
    EXPECT_EQ(answer("nothing.txt"), std::nullopt);
    EXPECT_EQ(pod().getPodFiles().size(), 2U);
    EXPECT_TRUE(notes_.empty()) << notes_.front();
}

// Those are the disk's, which the lookup after the pods' answers for.
TEST_F(CDemonPodTest, TheBaseGamesLooseFilesArentItsToAnswer) {
    files_.givenFile("data/loose.txt", "loose");
    load();
    EXPECT_EQ(answer("data/loose.txt"), std::nullopt);
}

// A mod's PODs win over the base game's, and its loose files over the base game's PODs, but not
// over its own PODs.
TEST_F(CDemonPodTest, AModsFilesWinOverTheBaseGames) {
    givenMod("mods/extra", "id = \"extra\"\n[[pod]]\npath = \"EXTRA.POD\"\n");
    givenPod("mods/extra/EXTRA.POD", {{.name = "data\\shared.txt", .data = "extra"}});
    files_.givenFile("mods/extra/data\\menu.txt", "loose menu");
    files_.givenFile("mods/extra/data\\shared.txt", "loose shared");
    load();
    EXPECT_EQ(answer("data\\shared.txt"), "mods/extra/EXTRA.POD");
    EXPECT_EQ(answer("data\\menu.txt"), "mods/extra/data\\menu.txt");
    EXPECT_EQ(answer("world\\a.msn"), "ACT1.POD");
}

TEST_F(CDemonPodTest, TheLaterPackageInTheLoadOrderWins) {
    for (const char *id : {"a", "b"}) {
        givenMod(std::format("mods/{}", id),
                 std::format("id = \"{}\"\n[[pod]]\npath = \"MOD.POD\"\n", id));
        givenPod(std::format("mods/{}/MOD.POD", id), {{.name = "data\\shared.txt", .data = id}});
    }
    files_.givenFile("loadorder.txt", "b\na\n");
    load();
    EXPECT_EQ(answer("data\\shared.txt"), "mods/a/MOD.POD");
}

// What discovery and the load order found wrong comes through too.
TEST_F(CDemonPodTest, WhatIsntLoadedIsNotedInTheFileLog) {
    EXPECT_CALL(log_, write(platform::ELogSubsystem::FileIo, _)).Times(::testing::AtLeast(1));
    files_.givenFile("STRAY.POD", "stray");
    files_.givenFile("loadorder.txt", "nocturne\ngone\nextra\n");
    givenMod("mods/extra", "id = \"extra\"\n[[pod]]\npath = \"GONE.POD\"\n");
    load();
    EXPECT_THAT(notes_, Contains(EndsWith("STRAY.POD isn't in a package's manifest, so it isn't "
                                          "loaded")));
    EXPECT_THAT(notes_, Contains(EndsWith("loadorder.txt names gone, which isn't installed")));
    EXPECT_THAT(notes_, Contains(EndsWith("mods/extra/GONE.POD is missing, so it isn't loaded")));
}

TEST_F(CDemonPodTest, APodThatIsntOneIsNotedAndTheRestLoaded) {
    givenMod("mods/extra",
             "id = \"extra\"\n[[pod]]\npath = \"BAD.POD\"\n[[pod]]\npath = \"GOOD.POD\"\n");
    files_.givenFile("mods/extra/BAD.POD", "not a pod");
    givenPod("mods/extra/GOOD.POD", {{.name = "data\\shared.txt", .data = "good"}});
    files_.givenUnreadableFile("mods/extra/LOCKED.POD", 4);
    load();
    EXPECT_THAT(notes_, Contains(EndsWith("mods/extra/BAD.POD isn't a POD, so it isn't loaded")));
    EXPECT_EQ(answer("data\\shared.txt"), "mods/extra/GOOD.POD");
}

// Found unreadable by its hash, or, with none recorded, by its mount.
TEST_F(CDemonPodTest, AnUnreadablePodIsNoted) {
    givenMod("mods/extra", std::format("id = \"extra\"\n[[pod]]\npath = \"LOCKED.POD\"\n"
                                       "[[pod]]\npath = \"HASHED.POD\"\nsize = 1\nxxh3 = \"{}\"\n",
                                       std::string(32, 'a')));
    files_.givenUnreadableFile("mods/extra/LOCKED.POD", 4);
    files_.givenUnreadableFile("mods/extra/HASHED.POD", 4);
    load();
    for (const char *pod : {"LOCKED.POD", "HASHED.POD"}) {
        EXPECT_THAT(notes_, Contains(EndsWith(std::format(
                                "mods/extra/{} can't be read, so it isn't loaded", pod))));
    }
}

// The 101st POD can't be mounted, whatever else is right with it.
TEST_F(CDemonPodTest, APodPastTheMostThatCanBeMountedIsNoted) {
    std::string manifest = "id = \"many\"\n";
    for (std::size_t i = 0; i < engine::CPod::kMaxPods; ++i) {
        manifest += std::format("[[pod]]\npath = \"P{}.POD\"\n", i);
        files_.givenFile(std::format("mods/many/P{}.POD", i), files_.bytes("ACT1.POD"));
    }
    givenMod("mods/many", manifest);
    load();
    EXPECT_THAT(notes_, Contains(EndsWith("isn't loaded: Too many .POD files at once!")));
}

// With nothing else to load, the game stops, saying what each package lacked.
TEST_F(CDemonPodTest, WithoutTheStartupDataNothingLoads) {
    files_.givenFile("STARTUP.POD", "not a pod");
    EXPECT_THAT([this] { load(); },
                ThrowsMessage<common::CFatalError>(StrEq(
                    "Nothing could be loaded: nocturne can't do without STARTUP.POD, which isn't a "
                    "POD")));
}

TEST_F(CDemonPodTest, AMissingStartupPodLeavesNothingToLoad) {
    files_.givenFile("nocturne.toml", "id = \"nocturne\"\nrequired = [\"STARTUP.POD\"]\n"
                                      "[[pod]]\npath = \"ACT1.POD\"\n");
    EXPECT_THAT([this] { load(); },
                ThrowsMessage<common::CFatalError>(StrEq(
                    "Nothing could be loaded: nocturne can't do without STARTUP.POD, which is "
                    "missing")));
}

TEST_F(CDemonPodTest, AnUnreadableStartupPodLeavesNothingToLoad) {
    files_.givenFile("nocturne.toml", "id = \"nocturne\"\nrequired = [\"STARTUP.POD\"]\n"
                                      "[[pod]]\npath = \"STARTUP.POD\"\n");
    files_.givenUnreadableFile("STARTUP.POD", 4);
    givenMod("mods/extra", "id = \"extra\"\nrequired = [\"CORE.POD\"]\n");
    EXPECT_THAT([this] { load(); },
                ThrowsMessage<common::CFatalError>(StrEq(
                    "Nothing could be loaded: nocturne can't do without STARTUP.POD, which can't "
                    "be read; extra can't do without mods/extra/CORE.POD, which is missing")));
}

// The base game is a package like any other: without it, a total conversion still runs.
TEST_F(CDemonPodTest, APackageLoadsWithoutTheBaseGame) {
    files_.givenFile("STARTUP.POD", "not a pod");
    givenMod("mods/game", "id = \"game\"\n[[pod]]\npath = \"GAME.POD\"\n");
    givenPod("mods/game/GAME.POD", {{.name = "data\\menu.txt", .data = "game"}});
    load();
    EXPECT_EQ(answer("data\\menu.txt"), "mods/game/GAME.POD");
    EXPECT_THAT(notes_, Contains(EndsWith("nocturne can't do without STARTUP.POD, which isn't a "
                                          "POD, so it isn't loaded")));
}

TEST_F(CDemonPodTest, ALoadOrderTurningNothingOnIsFatal) {
    files_.givenFile("loadorder.txt", "# nocturne\n");
    EXPECT_THAT([this] { load(); }, ThrowsMessage<common::CFatalError>(
                                        StrEq("loadorder.txt turns on no package to load")));
}

// The base game's content is its release's; a later mod's values win, and a mod left out
// gives nothing.
TEST_F(CDemonPodTest, TheLoadedPackagesContentIsMergedInLoadOrder) {
    releases_.front().content.front_end = "nocturne";
    releases_.front().content.copyright = "Base";
    givenMod("mods/extra", "id = \"extra\"\ncopyright = \"Extra\"\n"
                           "[[pod]]\npath = \"EXTRA.POD\"\n");
    givenPod("mods/extra/EXTRA.POD", {{.name = "data\\x.txt", .data = "x"}});
    givenMod("mods/broken", "id = \"broken\"\nfront_end = \"bw1\"\nrequired = [\"GONE.POD\"]\n");
    load();
    const engine::SGameContent &content = pod().getGameContent();
    EXPECT_EQ(content.front_end, "nocturne");
    EXPECT_EQ(content.copyright, "Extra");
}

TEST_F(CDemonPodTest, WhatTheMergedContentLacksIsNoted) {
    givenMod("mods/extra", "id = \"extra\"\n[[story]]\nid = \"s\"\nname = \"S\"\ntitle = \"T\"\n"
                           "loading = \"gone\"\n[[story.chapter]]\nname = \"C\"\n"
                           "mission = \"c.msn\"\n");
    load();
    EXPECT_THAT(notes_, Contains(EndsWith("the story s names a loading picture gone no package "
                                          "has")));
    EXPECT_EQ(pod().getGameContent().stories.size(), 1U);
}

// Its files aren't found, and the base game's still are.
TEST_F(CDemonPodTest, AModWithoutAPodItNeedsIsLeftOut) {
    givenMod("mods/extra", "id = \"extra\"\nrequired = [\"CORE.POD\"]\n"
                           "[[pod]]\npath = \"MORE.POD\"\n");
    givenPod("mods/extra/MORE.POD", {{.name = "data\\shared.txt", .data = "more"}});
    load();
    EXPECT_THAT(notes_, Contains(EndsWith("extra can't do without mods/extra/CORE.POD, which is "
                                          "missing, so it isn't loaded")));
    EXPECT_EQ(answer("data\\shared.txt"), "ACT1.POD");
}

// A copy that kept its bytes but not its time: the game's own manifest takes the new time.
TEST_F(CDemonPodTest, AManifestTheGameWroteTakesAPodsNewTime) {
    load();
    const std::string written = files_.bytes("nocturne.toml");
    files_.givenFile("ACT1.POD", files_.bytes("ACT1.POD"), CPackageFiles::kModified + 60);
    CDemonPod again = restart();
    again.load();
    EXPECT_NE(files_.contents("nocturne.toml"), written);
    EXPECT_THAT(files_.bytes("nocturne.toml"),
                ::testing::HasSubstr(std::format("modified = {}", CPackageFiles::kModified + 60)));
}

TEST_F(CDemonPodTest, APackagesOwnManifestIsNeverWritten) {
    const std::string manifest =
        std::format("id = \"extra\"\n[[pod]]\npath = \"MOD.POD\"\nsize = {}\nmodified = 1\n"
                    "xxh3 = \"{}\"\n",
                    files_.bytes("ACT1.POD").size(), shipped("ACT1.POD").xxh3);
    givenMod("mods/extra", manifest);
    files_.givenFile("mods/extra/MOD.POD", files_.bytes("ACT1.POD"));
    load();
    EXPECT_EQ(files_.contents("mods/extra/nocturne.toml"), manifest);
}

TEST_F(CDemonPodTest, APodChangedSinceItsManifestIsNoted) {
    load();
    givenPod("ACT1.POD", {{.name = "world\\b.msn", .data = "changed"}});
    files_.givenFile("ACT1.POD", files_.bytes("ACT1.POD"), CPackageFiles::kModified + 60);
    CDemonPod again = restart();
    again.load();
    EXPECT_THAT(notes_, Contains(EndsWith("ACT1.POD has changed since its manifest was written")));
}

TEST_F(CDemonPodTest, AManifestThatCantBeWrittenAgainIsNoted) {
    load();
    files_.givenFile("ACT1.POD", files_.bytes("ACT1.POD"), CPackageFiles::kModified + 60);
    ON_CALL(files_.file_system_, writeFile(_, _)).WillByDefault(Return(false));
    CDemonPod again = restart();
    again.load();
    EXPECT_THAT(notes_, Contains(EndsWith("nocturne.toml couldn't be written")));
}

// The first load leaves an archive not yet unpacked, and says nothing the load after it would.
TEST_F(CDemonPodTest, AnArchiveIsUnpackedOnlyWhenAsked) {
    files_.givenFile("STRAY.POD", "stray");
    files_.givenFile(
        "mods/hell.zip",
        engine::makeTestArchive(
            engine::ETestArchiveFormat::Zip,
            {{.path = "nocturne.toml", .contents = "id = \"hell\"\n[[pod]]\npath = \"HELL.POD\"\n"},
             {.path = "HELL.POD",
              .contents = makePod2("", {{.name = "data\\shared.txt", .data = "hell"}})}}));
    turned_on_ += "hell\n";
    load();
    EXPECT_TRUE(pod().hasArchivesToUnpack());
    EXPECT_EQ(answer("data\\shared.txt"), "ACT1.POD");
    EXPECT_TRUE(notes_.empty()) << notes_.front();
    pod().unpackArchives();
    EXPECT_FALSE(pod().hasArchivesToUnpack());
    EXPECT_THAT(answer("data\\shared.txt"), ::testing::Optional(EndsWith("/HELL.POD")));
    EXPECT_EQ(pod().getPodFiles().size(), 3U);
    EXPECT_THAT(notes_, Contains(EndsWith("STRAY.POD isn't in a package's manifest, so it isn't "
                                          "loaded")));
}

// What the archive holds may be all there is to load.
TEST_F(CDemonPodTest, NothingToLoadIsFatalOnlyOnceTheArchivesAreUnpacked) {
    files_.givenFile("STARTUP.POD", "not a pod");
    files_.givenFile("game.zip", engine::makeTestArchive(engine::ETestArchiveFormat::Zip,
                                                         {{.path = "readme.txt", .contents = ""},
                                                          {.path = "GAME.POD", .contents = ""}}));
    load();
    EXPECT_TRUE(pod().getPodFiles().empty());
    EXPECT_THAT(
        [this] { pod().unpackArchives(); },
        ThrowsMessage<common::CFatalError>(::testing::StartsWith("Nothing could be loaded")));
}

TEST_F(CDemonPodTest, WithNoArchiveLeftUnpackingLoadsNothingAgain) {
    load();
    EXPECT_FALSE(pod().hasArchivesToUnpack());
    const engine::CPodFile *first = pod().getPodFiles().front().get();
    pod().unpackArchives();
    EXPECT_EQ(pod().getPodFiles().front().get(), first);
}

// What is unmounted is no longer answered for, whichever way it went.
TEST_F(CDemonPodTest, APodUnmountedNoLongerAnswers) {
    load();
    pod().dismount("ACT1.POD");
    EXPECT_EQ(answer("data\\shared.txt"), "STARTUP.POD");
    pod().cleanup();
    EXPECT_EQ(answer("data\\menu.txt"), std::nullopt);
    EXPECT_THAT(notes_, Not(Contains(EndsWith("is missing"))));
}

} // namespace
} // namespace nocturne::core

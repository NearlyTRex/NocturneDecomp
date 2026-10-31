#include "common/error/fatalerror.h"
#include "core/game/chapterselectmode.h"
#include "core/game/game.h"
#include "core/inivar/inivar.h"
#include "core/level/levelloader.h"
#include "engine/ini/ini.h"
#include "engine/keys/inputcodetype.h"
#include "platform/filesystem.h"
#include "platform/mrgltexturebasic.h"
#include "shape/edittool/fileselection.h"
#include "shape/edittool/strlist.h"
#include "tests/mocks/core/gameparts.h"
#include "tests/mocks/core/missionfixture.h"
#include "tests/mocks/core/mockloadingscreen.h"
#include "tests/mocks/core/setfilefixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <ctime>
#include <deque>
#include <format>
#include <initializer_list>
#include <optional>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {
namespace {

using engine::EInputCodeType;
using ::testing::_;
using ::testing::Return;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

constexpr EInputCodeType kDown = EInputCodeType::DIK_DOWN;
constexpr EInputCodeType kEnd = EInputCodeType::DIK_END;
constexpr EInputCodeType kEscape = EInputCodeType::DIK_ESCAPE;
constexpr EInputCodeType kReturn = EInputCodeType::DIK_RETURN;

// A mission of that name in the set first.set, whose one actor is the place for the first hero.
std::string heroMission(std::string_view name) {
    return std::format("; mission\n7,4\n; name\n{}\n; sets\n1\nfirst.set\n; types\n0\n; actors\n1\n"
                       "; carried\n0\n; list\nCHeroPlaceholder \"Start\"\n; bodies\n"
                       "{{ CHeroPlaceholder \"Start\"\n0,0,0,0\n0,0,0\n0\n0\n}} "
                       "CHeroPlaceholder \"Start\"\n",
                       name);
}

// Every mission in world, each named after its file, in a whole install, with nocturne.ini's
// Game section as each test gives it. Each key a test gives is pressed once the one before it
// has been taken; a prompt is answered at once.
class CChapterSelectTest : public CMissionFixture {
protected:
    CChapterSelectTest() {
        givenFile("enemy.pod", "");
        givenFile("models\\first.set", SSetFile{}.text());
        ON_CALL(raw_input_, getNextKeypress(_)).WillByDefault(Return('x'));
        ON_CALL(models_, getDeformableModel(_))
            .WillByDefault([](std::string_view name) -> CDeformableModel & {
                throw common::CFatalError(std::format("no model {} here", name), "", 0, 0);
            });
        for (const char *mission :
             {"hq-act1", "gtown",    "forest",  "castle1",  "dungeon",  "train",    "town",
              "mine",    "trans",    "temple",  "town2",    "hq-act2b", "hq-act3",  "chicago1",
              "speak",   "chicago2", "wworks",  "chicago3", "theater",  "chicago4", "ware2",
              "factory", "intfact",  "hq-act4", "grave",    "mansion",  "hq-act4b", "hq-act5"}) {
            givenMission(mission);
        }
        ON_CALL(file_system_, readFile(kIniFilename)).WillByDefault([this](std::string_view) {
            return std::optional(ini_text_);
        });
        screen_.on_swap = [this] {
            const bool key_waiting =
                std::ranges::any_of(keyboard_, [](std::uint8_t key) { return key != 0; });
            if (!key_waiting && !keys_to_press_.empty()) {
                press(keys_to_press_.front());
                keys_to_press_.pop_front();
                return;
            }
            if (++idle_frames_ > kIdleFrameLimit) {
                ADD_FAILURE() << "a list was still open after the keys ran out";
                press(kEscape);
            }
        };
    }

    void givenMission(std::string_view name) {
        givenFile(std::format("world\\{}.msn", name), heroMission(name));
    }

    void givenMissingMission(std::string_view name) {
        ON_CALL(file_system_,
                getFileInfo(std::string_view(std::format("/game/world\\{}.msn", name))))
            .WillByDefault(Return(std::nullopt));
    }

    void givenUnlocked(std::initializer_list<std::string_view> lines) {
        ini_text_ = "[Game]\r\n";
        for (const std::string_view line : lines) {
            ini_text_ += std::format("{}\r\n", line);
        }
    }

    // Opens START's lists in that mode, pressing the keys one a frame.
    void choose(EChapterSelectMode mode, std::initializer_list<EInputCodeType> keys) {
        keys_to_press_.assign(keys);
        idle_frames_ = 0;
        press(keys_to_press_.front());
        keys_to_press_.pop_front();
        chapter_game_.showChapterSelect(owners_, mode);
    }

    // As choose, where the mission chosen is started, which stops as the hero's setup looks for
    // her model, which these tests haven't.
    void chooseToStart(EChapterSelectMode mode, std::initializer_list<EInputCodeType> keys) {
        EXPECT_THAT([&] { choose(mode, keys); },
                    ThrowsMessage<common::CFatalError>(StrEq("no model gabriela.dfm here")));
    }

    static std::tm localTime(std::time_t /*timestamp*/) {
        return {};
    }

    // Frames a list may stay open once the keys are pressed, before the test presses Cancel.
    static constexpr int kIdleFrameLimit = 6;

    std::deque<EInputCodeType> keys_to_press_;
    int idle_frames_ = 0;
    std::string ini_text_ = "[Game]\r\n";
    // Reading the fixture's files, where the mission's own game doesn't.
    CGameParts chapter_game_parts_{game_clock_, dosio_};
    CGame &chapter_game_ = chapter_game_parts_.getGame();
    ::testing::NiceMock<MockLoadingScreen> loading_screen_;
    engine::CIni ini_{file_system_};
    shape::CStrList::LocalTime local_time_ = &localTime;
    shape::SFileSelectionOwners file_selection_{.pick_list = pick_list_owners_,
                                                .pod = nullptr,
                                                .file_system = file_system_,
                                                .local_time = local_time_,
                                                .messages = messages_};
    SChapterSelectOwners owners_{.messages = messages_,
                                 .editor_tools = editor_tools_,
                                 .pick_list = pick_list_owners_,
                                 .file_selection = file_selection_,
                                 .ini = ini_,
                                 .loading_screen = loading_screen_,
                                 .mission = mission_};
};

// The loading screen shows the story's picture as its mission loads.
TEST_F(CChapterSelectTest, AStoryStartsAtItsFirstChapter) {
    EXPECT_CALL(loading_screen_, show(10, false, 0));
    chooseToStart(EChapterSelectMode::kStories, {kReturn});
    EXPECT_EQ(mission_.getMissionName(), "hq-act1");
    EXPECT_EQ(mission_.getHeroCount(), 1);
    EXPECT_EQ(chapter_game_.getCurrentSaveFile(), "hq-act1.msn");
}

TEST_F(CChapterSelectTest, TheLaterStoriesStartAtTheirFirstChapters) {
    EXPECT_CALL(loading_screen_, show(10, false, 3));
    chooseToStart(EChapterSelectMode::kStories, {kDown, kDown, kDown, kReturn});
    EXPECT_EQ(mission_.getMissionName(), "hq-act4");
}

TEST_F(CChapterSelectTest, CancellingLoadsNothing) {
    EXPECT_CALL(loading_screen_, show).Times(0);
    choose(EChapterSelectMode::kStories, {kEscape});
    EXPECT_EQ(mission_.getMissionVersionNum(), -1);
    EXPECT_EQ(chapter_game_.getCurrentSaveFile(), "");
}

// A story whose first mission is missing can't be chosen; the others still can.
TEST_F(CChapterSelectTest, AStoryWithoutItsFirstMissionIsGreyedOut) {
    givenMissingMission("hq-act1");
    EXPECT_CALL(loading_screen_, show).Times(0);
    choose(EChapterSelectMode::kStories, {kReturn, kEscape});
    EXPECT_EQ(mission_.getMissionVersionNum(), -1);
}

// Without its four act codes the list ends at Volume 4.
TEST_F(CChapterSelectTest, TheEpilogueIsListedOnlyOnceEveryActIsUnlocked) {
    givenUnlocked({"Act1Code=817", "Act2Code=972", "Act3Code=940"});
    chooseToStart(EChapterSelectMode::kStories, {kEnd, kReturn});
    EXPECT_EQ(mission_.getMissionName(), "hq-act4");
    givenUnlocked({"Act1Code=817", "Act2Code=972", "Act3Code=940", "Act4Code=214"});
    EXPECT_CALL(loading_screen_, show(10, false, 4));
    chooseToStart(EChapterSelectMode::kStories, {kEnd, kReturn});
    EXPECT_EQ(mission_.getMissionName(), "hq-act5");
}

// Volume 2's code opens its chapters, under its title.
TEST_F(CChapterSelectTest, AStoryWhoseActIsUnlockedOffersItsChapters) {
    givenUnlocked({"Act2Code=972"});
    EXPECT_CALL(loading_screen_, show(10, false, 1));
    chooseToStart(EChapterSelectMode::kStories, {kDown, kReturn, kDown, kReturn});
    EXPECT_EQ(mission_.getMissionName(), "town");
}

TEST_F(CChapterSelectTest, AWrongCodeLeavesTheStoryClosed) {
    givenUnlocked({"Act2Code=971"});
    chooseToStart(EChapterSelectMode::kStories, {kDown, kReturn});
    EXPECT_EQ(mission_.getMissionName(), "train");
}

// Once one story's chapters were offered, every story offers them until START is left.
TEST_F(CChapterSelectTest, BackingOutOfTheChaptersOffersTheStoriesAgain) {
    givenUnlocked({"Act1Code=817"});
    chooseToStart(EChapterSelectMode::kStories, {kReturn, kEscape, kDown, kReturn, kEnd, kReturn});
    EXPECT_EQ(mission_.getMissionName(), "hq-act2b");
}

TEST_F(CChapterSelectTest, ControlAndShiftOfferEveryStorysChapters) {
    chooseToStart(EChapterSelectMode::kChapters, {kDown, kDown, kReturn, kEnd, kReturn});
    EXPECT_EQ(mission_.getMissionName(), "intfact");
}

// The epilogue's one chapter is its own Headquarters.
TEST_F(CChapterSelectTest, TheEpiloguesChapterIsItsHeadquarters) {
    givenUnlocked({"Act1Code=817", "Act2Code=972", "Act3Code=940", "Act4Code=214"});
    chooseToStart(EChapterSelectMode::kStories, {kEnd, kReturn, kReturn});
    EXPECT_EQ(mission_.getMissionName(), "hq-act5");
}

TEST_F(CChapterSelectTest, AChapterWithoutItsMissionIsGreyedOut) {
    givenMissingMission("gtown");
    chooseToStart(EChapterSelectMode::kChapters, {kReturn, kDown, kReturn, kDown, kReturn});
    EXPECT_EQ(mission_.getMissionName(), "forest");
}

// Without enemy.pod every story offers its chapters, Volume 1 isn't greyed for its missing
// first mission, and Volume 2 ends at its Epilogue.
TEST_F(CChapterSelectTest, APartInstallOffersEveryChapterButFailure) {
    givenMissingMission("hq-act1");
    ON_CALL(file_system_, getFileInfo(std::string_view("/game/enemy.pod")))
        .WillByDefault(Return(std::nullopt));
    chooseToStart(EChapterSelectMode::kStories, {kReturn, kEscape, kDown, kReturn, kEnd, kReturn});
    EXPECT_EQ(mission_.getMissionName(), "town2");
}

// Picked again, the mission is the same file, so a texture loaded before stays loaded; another
// mission empties the cache, and the texture is read again.
TEST_F(CChapterSelectTest, StartingTheSameMissionAgainKeepsItsTextures) {
    givenFile("art\\T.RAW", std::string(std::size_t{32} * 32, '\x01'));
    textures_.initTextureCache();
    platform::SMRGLTextureBasic texture{.texture_name = "T.RAW"};
    chooseToStart(EChapterSelectMode::kStories, {kReturn});
    textures_.ensureTextureLoaded(texture);
    EXPECT_CALL(file_system_, getFileInfo(_)).Times(::testing::AnyNumber());
    EXPECT_CALL(file_system_, getFileInfo(::testing::EndsWith("T.RAW"))).Times(0);
    chooseToStart(EChapterSelectMode::kStories, {kReturn});
    textures_.ensureTextureLoaded(texture);
    ::testing::Mock::VerifyAndClearExpectations(&file_system_);
    EXPECT_CALL(file_system_, getFileInfo(_)).Times(::testing::AnyNumber());
    EXPECT_CALL(file_system_, getFileInfo(::testing::EndsWith("T.RAW")))
        .Times(::testing::AtLeast(1));
    chooseToStart(EChapterSelectMode::kStories, {kDown, kReturn});
    textures_.ensureTextureLoaded(texture);
    EXPECT_EQ(chapter_game_.getCurrentSaveFile(), "train.msn");
}

// With nowhere for the first hero the mission says so and goes no further.
TEST_F(CChapterSelectTest, AMissionWithNoPlaceForTheHeroIsNotStarted) {
    givenFile("world\\hq-act1.msn",
              "; mission\n7,4\n; name\nEmpty\n; sets\n1\nSET1\n; types\n0\n; actors\n0\n"
              "; carried\n0\n; list\n; bodies\n");
    choose(EChapterSelectMode::kStories, {kReturn});
    EXPECT_EQ(mission_.getMissionName(), "Empty");
    EXPECT_EQ(mission_.getHero(0), nullptr);
}

// The browser lists world's missions in capitals; the loading screen picks its own picture.
TEST_F(CChapterSelectTest, ControlBrowsesEveryMission) {
    ON_CALL(file_system_, findFiles(std::string_view("world\\*.msn")))
        .WillByDefault(Return(
            std::vector<platform::SFileInfo>{{.name = "speak.msn", .size = 1, .modified = 0},
                                             {.name = "town.msn", .size = 1, .modified = 0}}));
    givenFile("world\\TOWN.MSN", heroMission("Town"));
    EXPECT_CALL(loading_screen_, show(10, false, CLevelLoader::kRandomImage));
    chooseToStart(EChapterSelectMode::kMissionBrowser, {kDown, kReturn});
    EXPECT_EQ(mission_.getMissionName(), "Town");
    EXPECT_EQ(chapter_game_.getCurrentSaveFile(), "TOWN.MSN");
}

// The browser's capitals name the same file the story did.
TEST_F(CChapterSelectTest, TheSameMissionInOtherCapitalsIsStillTheSameFile) {
    ON_CALL(file_system_, findFiles(std::string_view("world\\*.msn")))
        .WillByDefault(Return(
            std::vector<platform::SFileInfo>{{.name = "hq-act1.msn", .size = 1, .modified = 0}}));
    givenFile("world\\HQ-ACT1.MSN", heroMission("Act1"));
    chooseToStart(EChapterSelectMode::kStories, {kReturn});
    chooseToStart(EChapterSelectMode::kMissionBrowser, {kReturn});
    EXPECT_EQ(chapter_game_.getCurrentSaveFile(), "hq-act1.msn");
}

TEST_F(CChapterSelectTest, CancellingTheBrowserLoadsNothing) {
    ON_CALL(file_system_, findFiles(std::string_view("world\\*.msn")))
        .WillByDefault(Return(
            std::vector<platform::SFileInfo>{{.name = "speak.msn", .size = 1, .modified = 0}}));
    EXPECT_CALL(loading_screen_, show).Times(0);
    choose(EChapterSelectMode::kMissionBrowser, {kEscape});
    EXPECT_EQ(mission_.getMissionVersionNum(), -1);
}

} // namespace
} // namespace nocturne::core

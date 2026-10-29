#include "common/error/fatalerror.h"
#include "core/game/game.h"
#include "core/game/herotype.h"
#include "core/menu/menu.h"
#include "engine/keys/inputcodetype.h"
#include "tests/mocks/core/menufixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <string>
#include <utility>
#include <vector>

namespace nocturne::core {
namespace {

using engine::EInputCodeType;
using ::testing::HasSubstr;
using ::testing::Return;

constexpr EInputCodeType kDown = EInputCodeType::DIK_DOWN;
constexpr EInputCodeType kReturn = EInputCodeType::DIK_RETURN;
constexpr EInputCodeType kEscape = EInputCodeType::DIK_ESCAPE;

// Options from the main menu, where the moon is already up; one press a frame.
class COptionsScreenTest : public CMenuFixture {
protected:
    COptionsScreenTest() {
        menu_.getMoon().init();
    }

    void pressEachFrame(std::vector<EInputCodeType> presses) {
        on_frame_ = [this, presses = std::move(presses)](int frame) {
            if (std::cmp_less_equal(frame, presses.size())) {
                press(presses[static_cast<std::size_t>(frame) - 1]);
            }
        };
    }
};

TEST_F(COptionsScreenTest, CancelLeavesAndTheSettingsAreSaved) {
    game_.always_run = 1;
    pressEachFrame({kEscape});
    menu_.showOptionsScreen(0);
    EXPECT_EQ(frames_, 1);
    EXPECT_THAT(ini_text_, HasSubstr("alwaysRun=1\r\n"));
}

TEST_F(COptionsScreenTest, ClosingTheWindowLeavesToo) {
    on_frame_ = [&](int /*frame*/) {
        ON_CALL(raw_input_, getInputDisabled()).WillByDefault(Return(true));
    };
    menu_.showOptionsScreen(0);
    EXPECT_EQ(frames_, 1);
}

TEST_F(COptionsScreenTest, WhoeverIsPlayingOptionsShowsTheStrangersControls) {
    game_.hero_number = EHeroType::HERO_TYPE_GABRIELLA;
    pressEachFrame({kEscape});
    menu_.showOptionsScreen(0);
    EXPECT_EQ(game_.hero_number, EHeroType::HERO_TYPE_STRANGER);
}

// From the main menu the music is the menu's to start and stop.
TEST_F(COptionsScreenTest, FromTheMainMenuTheMusicIsLeftAlone) {
    std::vector<int> playing;
    on_frame_ = [&](int /*frame*/) {
        playing.push_back(sound_main_.countActiveSfx());
        press(kEscape);
    };
    menu_.showOptionsScreen(0);
    EXPECT_EQ(playing, std::vector<int>{0});
}

TEST_F(COptionsScreenTest, FromAMissionTheMenuMusicPlaysOnlyWhileOptionsIsUp) {
    std::vector<int> playing;
    on_frame_ = [&](int /*frame*/) {
        playing.push_back(sound_main_.countActiveSfx());
        press(kEscape);
    };
    menu_.showOptionsScreen(1);
    EXPECT_EQ(playing, std::vector<int>{1});
    EXPECT_EQ(sound_main_.countActiveSfx(), 0);
}

// Credits come back to Options with the menu music started again; with no credits.txt they end
// as soon as the image is loaded.
TEST_F(COptionsScreenTest, CreditsRollThenTheMusicStartsAgain) {
    givenFile("art\\stats.raw", std::string(std::size_t{kWidth} * kHeight, '\x01'));
    givenFile("art\\stats.act", std::string(768, '\0'));
    std::vector<int> playing;
    on_frame_ = [&](int frame) {
        playing.push_back(sound_main_.countActiveSfx());
        if (frame <= 5) {
            press(kDown);
        } else if (frame == 6) {
            press(kReturn);
        } else if (frame == 8) {
            press(kEscape);
        }
    };
    menu_.showOptionsScreen(0);
    EXPECT_EQ(playing.back(), 1);
    EXPECT_EQ(playing.front(), 0);
}

// Always run is the Gameplay page's first line; Cancel there goes back to Options.
TEST_F(COptionsScreenTest, GameplayOpensItsPage) {
    pressEachFrame({kReturn, kReturn, kEscape, kEscape});
    menu_.showOptionsScreen(0);
    EXPECT_EQ(game_.always_run, 1);
    EXPECT_EQ(frames_, 4);
}

class COptionsScreenNotPortedTest
    : public COptionsScreenTest,
      public ::testing::WithParamInterface<std::pair<int, std::string>> {};

TEST_P(COptionsScreenNotPortedTest, AScreenNotPortedYetQuits) {
    const int downs = GetParam().first;
    on_frame_ = [&](int frame) { press(frame <= downs ? kDown : kReturn); };
    EXPECT_THAT([this] { menu_.showOptionsScreen(0); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq(GetParam().second + " is not ported yet")));
}

INSTANTIATE_TEST_SUITE_P(
    GraphicSoundControlAndCheats, COptionsScreenNotPortedTest,
    ::testing::Values(std::pair{1, std::string("CMenu::configureGraphicsOptions")},
                      std::pair{2, std::string("CMenu::configureSoundOptions")},
                      std::pair{3, std::string("CMenu::configureCustomKeys")},
                      std::pair{4, std::string("CMenu::showCheatsMenu")}));

} // namespace
} // namespace nocturne::core

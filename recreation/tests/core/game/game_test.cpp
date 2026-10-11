#include "core/game/game.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CGame, IsConcrete) {
    static_assert(!std::is_abstract_v<CGame>);
}

TEST(CGame, Constructors) {
    static_assert(std::is_constructible_v<CGame>);
}

TEST(CGame, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CGame::saveClockTime), void (CGame::*)()>);
    static_assert(std::is_same_v<decltype(&CGame::updateDT), void (CGame::*)()>);
    static_assert(std::is_same_v<decltype(&CGame::displayMessage), void (CGame::*)(char *, float)>);
    static_assert(std::is_same_v<decltype(&CGame::setFudgeTarget),
                                 void (CGame::*)(common::CVector3f *, float)>);
    static_assert(std::is_same_v<decltype(&CGame::runGameSession), int (CGame::*)()>);
    static_assert(std::is_same_v<decltype(&CGame::restoreDefaultControls), void (CGame::*)()>);
    static_assert(std::is_same_v<decltype(&CGame::resetKeyState), void (CGame::*)()>);
    static_assert(std::is_same_v<decltype(&CGame::resetInputAndCenterCursor), void (CGame::*)()>);
    static_assert(std::is_same_v<decltype(&CGame::beginFadeIn), void (CGame::*)()>);
    static_assert(std::is_same_v<decltype(&CGame::beginFadeOut), void (CGame::*)()>);
    static_assert(std::is_same_v<decltype(&CGame::fadeIn), std::uint32_t (CGame::*)()>);
    static_assert(std::is_same_v<decltype(&CGame::resetWeaponSwitchTimers), void (CGame::*)()>);
    static_assert(std::is_same_v<decltype(&CGame::resetInventoryDisplayTimer), void (CGame::*)()>);
    static_assert(
        std::is_same_v<decltype(&CGame::setStatusDisplay), void (CGame::*)(char *, float, float)>);
    static_assert(std::is_same_v<decltype(&CGame::loadGame), void (CGame::*)(char *, int)>);
    static_assert(std::is_same_v<decltype(&CGame::showChapterSelect), void (CGame::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CGame::displayBitmap), void (CGame::*)(char *, int, int)>);
    static_assert(std::is_same_v<decltype(&CGame::slamDT), void (CGame::*)(float)>);
    static_assert(std::is_same_v<decltype(&CGame::displayActStats), void (CGame::*)()>);
    static_assert(std::is_same_v<decltype(&CGame::finishAct), void (CGame::*)()>);
    static_assert(std::is_same_v<decltype(&CGame::rollCredits), void (CGame::*)()>);
}

// The values the original constructor gives the INI's settings before the INI is read.
TEST(CGame, StartsWithTheOriginalDefaults) {
    const CGame game;
    EXPECT_EQ(game.game_pixx, 640);
    EXPECT_EQ(game.game_pixy, 480);
    EXPECT_EQ(game.game_bpp, 32);
    EXPECT_EQ(game.gamma, 0x10000);
    EXPECT_EQ(game.hero_number, EHeroType::HERO_TYPE_GABRIELLA);
    EXPECT_EQ(game.subtitle_mode, 1);
    EXPECT_EQ(game.blood_flag, 1);
    EXPECT_EQ(game.quimby_flag, 0);
    EXPECT_EQ(game.game_control, EControlMode::CONTROL_MODE_KEYBOARD);
    EXPECT_EQ(game.map_zoom, 320);
}

TEST(CGame, StartsWithTheKeyboardControls) {
    const CGame game;
    EXPECT_THAT(game.controls.getBindings(EGameAction::Fire),
                ::testing::ElementsAre(engine::EInputCodeType::DIK_SPACE));
}

} // namespace
} // namespace nocturne::core

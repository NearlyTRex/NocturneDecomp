#include "core/game/chapterselectmode.h"
#include "core/game/game.h"
#include "engine/gameclock.h"
#include "tests/mocks/core/gameparts.h"
#include "tests/mocks/engine/mockgameclock.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <climits>
#include <string>
#include <type_traits>

namespace nocturne::core {
namespace {

using ::testing::Return;

TEST(CGame, IsConcrete) {
    static_assert(!std::is_abstract_v<CGame>);
}

TEST(CGame, Constructors) {
    static_assert(std::is_constructible_v<CGame, const SGameOwners &>);
    static_assert(!std::is_default_constructible_v<CGame>);
}

TEST(CGame, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CGame::saveClockTime), void (CGame::*)()>);
    static_assert(std::is_same_v<decltype(&CGame::updateDT), void (CGame::*)()>);
    static_assert(std::is_same_v<decltype(&CGame::getDeltaTimeInt), int (CGame::*)() const>);
    static_assert(std::is_same_v<decltype(&CGame::getDeltaTimeFloat), float (CGame::*)() const>);
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
    static_assert(
        std::is_same_v<decltype(&CGame::showChapterSelect),
                       void (CGame::*)(const SChapterSelectOwners &, EChapterSelectMode)>);
    static_assert(std::is_same_v<decltype(&CGame::getCurrentSaveFile),
                                 const std::string &(CGame::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CGame::displayBitmap), void (CGame::*)(char *, int, int)>);
    static_assert(std::is_same_v<decltype(&CGame::slamDT), void (CGame::*)(float)>);
    static_assert(std::is_same_v<decltype(&CGame::displayActStats), void (CGame::*)()>);
    static_assert(std::is_same_v<decltype(&CGame::finishAct), void (CGame::*)()>);
    static_assert(std::is_same_v<decltype(&CGame::rollCredits), void (CGame::*)()>);
}

class CGameTest : public ::testing::Test {
protected:
    // Saves the clock at start, then reads it at now.
    void stepTo(int start, int now) {
        EXPECT_CALL(clock_, getTime()).WillOnce(Return(start)).WillOnce(Return(now));
        game_.saveClockTime();
        game_.updateDT();
    }

    ::testing::StrictMock<engine::MockGameClock> clock_;
    CGameParts parts_{clock_};
    CGame &game_ = parts_.getGame();
};

// The values the original constructor gives the INI's settings before the INI is read.
TEST_F(CGameTest, StartsWithTheOriginalDefaults) {
    const CGame &game = game_;
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
    EXPECT_EQ(game.time_scale_factor, 1.0F);
    EXPECT_EQ(game.is_processing, 0);
}

TEST_F(CGameTest, StartsWithTheKeyboardControls) {
    EXPECT_THAT(game_.controls.getBindings(EGameAction::Fire),
                ::testing::ElementsAre(engine::EInputCodeType::DIK_SPACE));
}

// 18 clock ticks are one 16.16 unit: a tenth of a second is 117964 ticks.
TEST_F(CGameTest, UpdateDTTurnsTicksIntoSixteenSixteenSeconds) {
    stepTo(1000, 1000 + 117964);
    EXPECT_EQ(game_.getDeltaTimeInt(), 6553);
    EXPECT_EQ(game_.getDeltaTimeFloat(), 6553.0F / 65536.0F);
}

TEST_F(CGameTest, UpdateDTMeasuresFromTheLastUpdate) {
    stepTo(0, 180);
    EXPECT_CALL(clock_, getTime()).WillOnce(Return(540));
    game_.updateDT();
    EXPECT_EQ(game_.getDeltaTimeInt(), 20);
}

TEST_F(CGameTest, UpdateDTDropsTheTicksPastAWholeUnit) {
    stepTo(0, 35);
    EXPECT_EQ(game_.getDeltaTimeInt(), 1);
}

TEST_F(CGameTest, UpdateDTTreatsABackwardClockAsNoTime) {
    stepTo(1000, 0);
    EXPECT_EQ(game_.getDeltaTimeInt(), 0);
    EXPECT_EQ(game_.getDeltaTimeFloat(), 0.0F);
}

TEST_F(CGameTest, UpdateDTCapsAFrameAtAQuarterSecond) {
    stepTo(0, 18 * 0x4001);
    EXPECT_EQ(game_.getDeltaTimeInt(), 0x4000);
    EXPECT_EQ(game_.getDeltaTimeFloat(), 0.25F);
}

TEST_F(CGameTest, UpdateDTMeasuresAcrossTheClockWrapping) {
    stepTo(INT_MAX - 17, INT_MIN + 18);
    EXPECT_EQ(game_.getDeltaTimeInt(), 2);
}

// The scaled time is chopped, as the CRT round leaves it.
TEST_F(CGameTest, UpdateDTScalesAndChopsTheTime) {
    game_.time_scale_factor = 0.5F;
    stepTo(0, 18 * 6553);
    EXPECT_EQ(game_.getDeltaTimeInt(), 3276);
}

} // namespace
} // namespace nocturne::core

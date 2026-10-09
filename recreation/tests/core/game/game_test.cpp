#include "core/game/game.h"

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

} // namespace
} // namespace nocturne::core

#include "core/game/gameaction.h"

#include <gtest/gtest.h>

#include <set>
#include <string_view>

namespace nocturne::core {
namespace {

TEST(GameAction, EveryActionHasItsOwnIniKey) {
    std::set<std::string_view> keys;
    for (std::size_t index = 0; index < kGameActionCount; ++index) {
        const std::string_view key = getGameActionInfo(static_cast<EGameAction>(index)).ini_key;
        EXPECT_TRUE(key.starts_with("key")) << key;
        EXPECT_TRUE(keys.insert(key).second) << key;
    }
}

// The INI keys are frozen, so the rows must line up with the actions they name.
TEST(GameAction, RowsAreInActionOrder) {
    EXPECT_EQ(getGameActionInfo(EGameAction::Walk).ini_key, "keyWalk");
    EXPECT_EQ(getGameActionInfo(EGameAction::StrafeRight).ini_key, "keyStrafeRight");
    EXPECT_EQ(getGameActionInfo(EGameAction::PointDown).ini_key, "keyPointDown");
    EXPECT_EQ(getGameActionInfo(EGameAction::Weapon5).ini_key, "keyWeapon5");
    EXPECT_EQ(getGameActionInfo(EGameAction::NextAmmo).ini_key, "keyNextAmmo");
    EXPECT_EQ(getGameActionInfo(EGameAction::Map).ini_key, "keyMap");
}

// The pad codes are frozen once a player's INI holds them.
TEST(GameAction, PadButtonsStartAtTheReservedSpan) {
    EXPECT_EQ(static_cast<int>(engine::EInputCodeType::PAD_A), 0x160);
    EXPECT_EQ(static_cast<int>(engine::EInputCodeType::PAD_BACK), 0x164);
}

} // namespace
} // namespace nocturne::core

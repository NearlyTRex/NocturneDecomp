#include "core/game/gameaction.h"
#include "core/game/keychord.h"
#include "tests/mocks/core/keychords.h"

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

// The hotkeys follow the play actions, with processHotkeys' keys.
TEST(GameAction, TheHotkeysHaveTheOriginalsKeys) {
    using engine::EInputCodeType;
    const SGameActionInfo &mute = getGameActionInfo(EGameAction::Mute);
    EXPECT_EQ(mute.ini_key, "keyMute");
    EXPECT_EQ(mute.keyboard, (SKeyChord{.code = EInputCodeType::DIK_F5}));
    EXPECT_EQ(mute.also, (SKeyChord{.code = EInputCodeType::DIK_M, .control = true}));
    EXPECT_FALSE(mute.developer);
    EXPECT_TRUE(getGameActionInfo(EGameAction::MotionDebug).developer);
    const SGameActionInfo &ambient_down = getGameActionInfo(EGameAction::AmbientDown);
    EXPECT_EQ(ambient_down.keyboard,
              (SKeyChord{.code = EInputCodeType::DIK_A, .alt = true, .shift = true}));
    EXPECT_TRUE(ambient_down.developer);
    EXPECT_EQ(getGameActionInfo(EGameAction::ScriptResetDialog).ini_key, "keyScriptResetDialog");
}

// The keys the original reused in script debug and in edit mode are theirs there.
TEST(GameAction, ScriptDebugAndEditModeHaveContextsOfTheirOwn) {
    EXPECT_EQ(getGameActionInfo(EGameAction::Fire).context, EActionContext::Play);
    EXPECT_EQ(getGameActionInfo(EGameAction::Mute).context, EActionContext::Play);
    EXPECT_EQ(getGameActionInfo(EGameAction::NextCamera).context, EActionContext::EditMode);
    EXPECT_EQ(getGameActionInfo(EGameAction::PrevCamera).context, EActionContext::EditMode);
    EXPECT_EQ(getGameActionInfo(EGameAction::ScriptRun).context, EActionContext::ScriptDebug);
    EXPECT_EQ(getGameActionInfo(EGameAction::ScriptResume).context, EActionContext::ScriptDebug);
    EXPECT_EQ(getGameActionInfo(EGameAction::ScriptResetDialog).context,
              EActionContext::ScriptDebug);
}

// The pad codes are frozen once a player's INI holds them.
TEST(GameAction, PadButtonsStartAtTheReservedSpan) {
    EXPECT_EQ(static_cast<int>(engine::EInputCodeType::PAD_A), 0x160);
    EXPECT_EQ(static_cast<int>(engine::EInputCodeType::PAD_BACK), 0x164);
}

} // namespace
} // namespace nocturne::core

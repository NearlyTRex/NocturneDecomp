#pragma once

#include "core/game/keychord.h"
#include "engine/keys/inputcodetype.h"

#include <cstddef>
#include <cstdint>
#include <optional>
#include <string_view>

namespace nocturne::core {

// What the player can bind. Game code asks about these, never about the keys or buttons behind
// them; a new one is an entry here and a row in the table, and borrows no other action's binding.
// The play actions come first, then the hotkeys.
enum class EGameAction : std::uint8_t {
    Walk,
    Backup,
    Run,
    Strafe,
    StrafeLeft,
    StrafeRight,
    Right,
    Left,
    Fire,
    UseItem,
    Light,
    Infrared,
    Draw,
    Jump,
    PointUp,
    PointDown,
    Weapon1,
    Weapon2,
    Weapon3,
    Weapon4,
    Weapon5,
    NextWeapon,
    PrevWeapon,
    NextItem,
    PrevItem,
    ItemDesc,
    NextAmmo,
    Map,
    Mute,
    SaveGame,
    LoadGame,
    QuickSave,
    QuickLoad,
    KeysHelp,
    GammaDown,
    GammaUp,
    MotionDebug,
    EditMode,
    Pause,
    CameraDebug,
    ScriptView,
    DebugDisplay,
    Console,
    CameraToggle,
    AmbientUp,
    AmbientDown,
    NextCamera,
    PrevCamera,
    ScriptRun,
    ScriptResume,
    ScriptResetDialog,
    Count,
};

inline constexpr std::size_t kGameActionCount = static_cast<std::size_t>(EGameAction::Count);

// When an action is live. Play and the hotkeys are live together; the original reused their keys
// in script debug and edit mode, so a key is one action's only within its context.
enum class EActionContext : std::uint8_t {
    Play,
    ScriptDebug,
    EditMode,
};

// An action's INI key, its defaults per control mode, its context, and whether it is a
// developer's. A mouse or gamepad default, when present, replaces the keyboard ones; INPUT_NONE
// leaves the action unbound.
struct SGameActionInfo {
    std::string_view ini_key;
    SKeyChord keyboard;
    std::optional<engine::EInputCodeType> mouse = std::nullopt;
    std::optional<engine::EInputCodeType> gamepad = std::nullopt;
    // A second keyboard default beside the first, or none.
    SKeyChord also{};
    EActionContext context = EActionContext::Play;
    bool developer = false;
};

[[nodiscard]] const SGameActionInfo &getGameActionInfo(EGameAction action);

} // namespace nocturne::core

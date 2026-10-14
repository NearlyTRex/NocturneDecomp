#pragma once

#include "engine/keys/inputcodetype.h"

#include <cstddef>
#include <cstdint>
#include <optional>
#include <string_view>

namespace nocturne::core {

// What the player can bind. Game code asks about these, never about the keys or buttons behind
// them; a new one is an entry here and a row in the table, and borrows no other action's binding.
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
    Count,
};

inline constexpr std::size_t kGameActionCount = static_cast<std::size_t>(EGameAction::Count);

// An action's INI key and its default per control mode. A mouse or gamepad default, when
// present, replaces the keyboard one; INPUT_NONE leaves the action unbound.
struct SGameActionInfo {
    std::string_view ini_key;
    engine::EInputCodeType keyboard;
    std::optional<engine::EInputCodeType> mouse;
    std::optional<engine::EInputCodeType> gamepad;
};

[[nodiscard]] const SGameActionInfo &getGameActionInfo(EGameAction action);

} // namespace nocturne::core

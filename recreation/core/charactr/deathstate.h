#pragma once

#include <cstdint>

namespace nocturne::core {

// How far a character is through dying, from its motion state.
enum class EDeathState : std::uint8_t {
    DEATH_STATE_ALIVE = 0,
    DEATH_STATE_DYING = 1,
    DEATH_STATE_DEAD = 2,
};

} // namespace nocturne::core

#pragma once

#include <cstdint>

namespace nocturne::core {

// When a character's health bar shows; files save the number.
enum class EHealthBarMode : std::uint8_t {
    kNone = 0,
    kWhenHurt = 1,
    kAlways = 2,
};

} // namespace nocturne::core

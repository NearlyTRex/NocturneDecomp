#pragma once

#include <cstdint>

namespace nocturne::core {

// Who steers a hero; files save the number.
enum class EHeroControlType : std::uint8_t {
    kPlayer = 0,
    kAi = 2,
};

} // namespace nocturne::core

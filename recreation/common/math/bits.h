#pragma once

#include <cstdint>

namespace nocturne::common {

// Shifts as x86 does them, by the low five bits of the count: a count of 32 shifts by nothing.
[[nodiscard]] constexpr std::uint32_t shiftLeft(std::uint32_t value, int count) {
    return value << (static_cast<unsigned>(count) & 31U);
}

[[nodiscard]] constexpr std::uint32_t shiftRight(std::uint32_t value, int count) {
    return value >> (static_cast<unsigned>(count) & 31U);
}

} // namespace nocturne::common

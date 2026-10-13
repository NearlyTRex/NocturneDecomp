#pragma once

#include <cstdint>

namespace nocturne::common {

// a * b in 16.16 fixed point as IMUL and SHRD compute it: bits 16 to 47 of the 64-bit product.
[[nodiscard]] constexpr std::int32_t fixedMultiply(std::int32_t a, std::int32_t b) {
    return static_cast<std::int32_t>(
        static_cast<std::uint32_t>((static_cast<std::int64_t>(a) * b) >> 16U));
}

// a + b wrapping as the x86's 32-bit ADD does.
[[nodiscard]] constexpr std::int32_t wrappingAdd(std::int32_t a, std::int32_t b) {
    return static_cast<std::int32_t>(static_cast<std::uint32_t>(a) + static_cast<std::uint32_t>(b));
}

// a - b wrapping as the x86's 32-bit SUB does.
[[nodiscard]] constexpr std::int32_t wrappingSubtract(std::int32_t a, std::int32_t b) {
    return static_cast<std::int32_t>(static_cast<std::uint32_t>(a) - static_cast<std::uint32_t>(b));
}

} // namespace nocturne::common

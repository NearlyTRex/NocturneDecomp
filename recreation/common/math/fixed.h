#pragma once

#include <cmath>
#include <cstdint>
#include <limits>

namespace nocturne::common {

// value as the CRT round and FISTP leave it under the original's control word: chopped toward
// zero, and the x87's integer indefinite when no int holds it.
[[nodiscard]] inline std::int32_t truncateToInt(double value) {
    if (!std::isfinite(value) || value >= 2147483648.0 || value <= -2147483649.0) {
        return std::numeric_limits<std::int32_t>::min();
    }
    return static_cast<std::int32_t>(value);
}

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

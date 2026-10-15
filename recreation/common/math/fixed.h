#pragma once

#include <cmath>
#include <cstdint>
#include <limits>

namespace nocturne::common {

// value as the CRT round and then FISTP leave it: chopped toward zero, and the x87's integer
// indefinite when no int holds it. The CRT round sets chop around one FRNDINT; a FISTP without
// it rounds to nearest even under the original's control word.
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

// numerator over denominator in 1.31, as the clippers compute it with SAR, RCR and IDIV: the
// largest fraction once the numerator reaches the denominator, the most negative once it falls
// to minus the denominator.
[[nodiscard]] constexpr std::int32_t clipFraction(std::int32_t numerator,
                                                  std::int32_t denominator) {
    if (numerator >= denominator) {
        return std::numeric_limits<std::int32_t>::max();
    }
    if (numerator <= wrappingSubtract(0, denominator)) {
        return std::numeric_limits<std::int32_t>::min();
    }
    // Only a positive denominator larger than the numerator either way gets here.
    return static_cast<std::int32_t>((std::int64_t{numerator} * (std::int64_t{1} << 31U)) /
                                     denominator);
}

// from moved toward to by a 1.31 fraction, as SUB, IMUL, ADD/ADC and ADD compute it: bits 31
// to 62 of the difference times the fraction.
[[nodiscard]] constexpr std::int32_t interpolateFraction31(std::int32_t from, std::int32_t to,
                                                           std::int32_t fraction) {
    const auto product =
        static_cast<std::uint64_t>(std::int64_t{wrappingSubtract(to, from)} * fraction);
    return wrappingAdd(static_cast<std::int32_t>(static_cast<std::uint32_t>(product >> 31U)), from);
}

} // namespace nocturne::common

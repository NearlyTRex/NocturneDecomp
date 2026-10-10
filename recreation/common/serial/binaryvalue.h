#pragma once

#include <concepts>
#include <cstdint>
#include <limits>

namespace nocturne::common {

static_assert(std::numeric_limits<float>::is_iec559 && std::numeric_limits<double>::is_iec559,
              "serialised floats are IEEE 754");

// The fixed-width types the original's formats are built from. Callers spell the width the
// format uses (std::int32_t, not int or long, which differ between the 32-bit original and a
// 64-bit build even where this concept cannot tell them apart).
template <typename T>
concept BinaryValue = std::same_as<T, std::uint8_t> || std::same_as<T, std::int8_t> ||
                      std::same_as<T, std::uint16_t> || std::same_as<T, std::int16_t> ||
                      std::same_as<T, std::uint32_t> || std::same_as<T, std::int32_t> ||
                      std::same_as<T, std::uint64_t> || std::same_as<T, std::int64_t> ||
                      std::same_as<T, float> || std::same_as<T, double>;

} // namespace nocturne::common

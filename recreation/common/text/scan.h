#pragma once

#include <cstddef>
#include <optional>
#include <string_view>

namespace nocturne::common {

// What scanf counts as whitespace.
inline constexpr std::string_view kWhitespace = " \t\n\v\f\r";

// A number scanned from the front of some text, and how many characters it took.
template <typename T>
struct SScanned {
    T value{};
    std::size_t length = 0;

    bool operator==(const SScanned &) const = default;
};

// sscanf's "%d" and "%f": leading whitespace and a sign are taken, the number stops at the first
// character that can't continue it, and nothing comes back when no digits start the text.
[[nodiscard]] std::optional<int> scanInteger(std::string_view text);
[[nodiscard]] std::optional<float> scanFloat(std::string_view text);
// "%d" and "%f" with the length each took, leading whitespace included.
[[nodiscard]] std::optional<SScanned<int>> scanIntegerPrefix(std::string_view text);
[[nodiscard]] std::optional<SScanned<float>> scanFloatPrefix(std::string_view text);
// A count a file gave, as a size: none when it is negative.
[[nodiscard]] std::size_t toCount(int value);

} // namespace nocturne::common

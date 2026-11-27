#pragma once

#include <charconv>
#include <optional>
#include <string_view>
#include <system_error>
#include <vector>

namespace nocturne::common {

// The recreation's own data lines: comma-separated values, spaces and tabs around each ignored.

// The text without the spaces and tabs around it.
[[nodiscard]] std::string_view trimSpaces(std::string_view text);
// The line split at its commas, each part trimmed; a line without commas is one value.
[[nodiscard]] std::vector<std::string_view> splitValues(std::string_view line);
// The value at the index; empty past the last.
[[nodiscard]] std::string_view getValue(const std::vector<std::string_view> &values,
                                        std::size_t index);

// The whole of the text as a plain decimal number; none for anything else, empty included.
template <typename T>
[[nodiscard]] std::optional<T> parseNumber(std::string_view text) {
    T number{};
    const auto [end, error] = std::from_chars(text.data(), text.data() + text.size(), number);
    if (error != std::errc{} || end != text.data() + text.size()) {
        return std::nullopt;
    }
    return number;
}

} // namespace nocturne::common

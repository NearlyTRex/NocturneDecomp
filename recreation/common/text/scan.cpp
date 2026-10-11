#include "common/text/scan.h"

#include <charconv>
#include <cstddef>
#include <system_error>

namespace nocturne::common {
namespace {

// from_chars takes neither leading whitespace nor a '+', both of which scanf allows.
template <typename T, typename... Format>
std::optional<T> scan(std::string_view text, Format... format) {
    const std::size_t start = text.find_first_not_of(" \t\n\v\f\r");
    text.remove_prefix(start == std::string_view::npos ? text.size() : start);
    if (text.starts_with('+')) {
        text.remove_prefix(1);
        if (text.starts_with('-')) {
            return std::nullopt;
        }
    }
    T value{};
    const std::from_chars_result result =
        std::from_chars(text.data(), text.data() + text.size(), value, format...);
    if (result.ec != std::errc{}) {
        return std::nullopt;
    }
    return value;
}

} // namespace

std::optional<int> scanInteger(std::string_view text) {
    return scan<int>(text);
}

std::optional<float> scanFloat(std::string_view text) {
    return scan<float>(text, std::chars_format::general);
}

} // namespace nocturne::common

#include "common/text/scan.h"

#include <charconv>
#include <system_error>

namespace nocturne::common {
namespace {

// from_chars takes neither leading whitespace nor a '+', both of which scanf allows.
template <typename T, typename... Format>
std::optional<SScanned<T>> scan(std::string_view text, Format... format) {
    const char *const begin = text.data();
    const std::size_t start = text.find_first_not_of(kWhitespace);
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
    return SScanned<T>{.value = value, .length = static_cast<std::size_t>(result.ptr - begin)};
}

} // namespace

std::optional<int> scanInteger(std::string_view text) {
    const std::optional<SScanned<int>> scanned = scanIntegerPrefix(text);
    if (!scanned) {
        return std::nullopt;
    }
    return scanned->value;
}

std::optional<float> scanFloat(std::string_view text) {
    const std::optional<SScanned<float>> scanned = scanFloatPrefix(text);
    if (!scanned) {
        return std::nullopt;
    }
    return scanned->value;
}

std::optional<SScanned<int>> scanIntegerPrefix(std::string_view text) {
    return scan<int>(text);
}

std::optional<SScanned<float>> scanFloatPrefix(std::string_view text) {
    return scan<float>(text, std::chars_format::general);
}

std::size_t toCount(int value) {
    return value < 0 ? 0 : static_cast<std::size_t>(value);
}

} // namespace nocturne::common

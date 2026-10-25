#include "core/script/script_functions.h"

#include "common/text/scan.h"

#include <cstddef>
#include <string>
#include <string_view>

namespace nocturne::core {
namespace {

std::string_view trimTrailing(std::string_view text) {
    const std::size_t last = text.find_last_not_of(common::kWhitespace);
    return text.substr(0, last == std::string_view::npos ? 0 : last + 1);
}

} // namespace

// nocedit 0x005592c0
std::string trimLine(std::string_view line) {
    const std::string_view text = skipWhitespace(line);
    return std::string(trimTrailing(text.substr(0, text.find("//"))));
}

// nocedit 0x00559360
std::string_view trimString(std::string_view text) {
    return skipWhitespace(trimTrailing(text));
}

// nocedit 0x005593d0
std::string_view skipWhitespace(std::string_view text) {
    const std::size_t first = text.find_first_not_of(common::kWhitespace);
    return text.substr(first == std::string_view::npos ? text.size() : first);
}

} // namespace nocturne::core

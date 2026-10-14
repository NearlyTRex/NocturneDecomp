#pragma once

#include <string_view>

namespace nocturne::common {

// 'A'..'Z' to lower case; every other byte, Windows-1252 letters included, as it is.
[[nodiscard]] char foldAscii(char c);
[[nodiscard]] bool equalsIgnoringAsciiCase(std::string_view a, std::string_view b);
// _stricmp's order: negative, zero or positive, comparing folded bytes as unsigned.
[[nodiscard]] int compareIgnoringAsciiCase(std::string_view a, std::string_view b);

} // namespace nocturne::common

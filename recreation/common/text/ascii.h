#pragma once

#include <string>
#include <string_view>

namespace nocturne::common {

// 'A'..'Z' to lower case; every other byte, Windows-1252 letters included, as it is.
[[nodiscard]] char foldAscii(char c);
// 'a'..'z' to upper case, as the CRT's toupper; every other byte as it is.
[[nodiscard]] char upperAscii(char c);
[[nodiscard]] std::string toUpperAscii(std::string_view text);
// 'A'..'Z', 'a'..'z' and '0'..'9', as the CRT's isalnum; Windows-1252 letters are not.
[[nodiscard]] bool isAsciiAlnum(char c);
[[nodiscard]] bool equalsIgnoringAsciiCase(std::string_view a, std::string_view b);
// _stricmp's order: negative, zero or positive, comparing folded bytes as unsigned.
[[nodiscard]] int compareIgnoringAsciiCase(std::string_view a, std::string_view b);

} // namespace nocturne::common

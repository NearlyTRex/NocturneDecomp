#pragma once

#include <string>
#include <string_view>

namespace nocturne::common {

// UTF-8 to Windows-1252, the ANSI code page WM_CHAR delivers on a Western system. Code points
// it cannot encode and malformed sequences are dropped.
[[nodiscard]] std::string utf8ToWindows1252(std::string_view text);
// Windows-1252 to UTF-8, the game's text as TextOutA would draw it. The five bytes the code page
// leaves undefined (0x81, 0x8D, 0x8F, 0x90, 0x9D) are dropped.
[[nodiscard]] std::string windows1252ToUtf8(std::string_view text);

} // namespace nocturne::common

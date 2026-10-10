#pragma once

#include <string>
#include <string_view>

namespace nocturne::common {

// UTF-8 to Windows-1252, the ANSI code page WM_CHAR delivers on a Western system. Code points
// it cannot encode and malformed sequences are dropped.
[[nodiscard]] std::string utf8ToWindows1252(std::string_view text);

} // namespace nocturne::common

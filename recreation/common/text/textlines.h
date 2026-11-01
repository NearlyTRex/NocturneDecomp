#pragma once

#include <string>
#include <string_view>
#include <vector>

namespace nocturne::common {

// The lines of a file as Windows text mode reads them: without the newline, or the CR of a CRLF.
[[nodiscard]] std::vector<std::string_view> splitTextLines(std::string_view text);
// A file as Windows text mode reads it, each CRLF a newline.
[[nodiscard]] std::string toTextMode(std::string_view text);

} // namespace nocturne::common

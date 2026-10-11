#pragma once

#include <optional>
#include <string_view>

namespace nocturne::common {

// sscanf's "%d" and "%f": leading whitespace and a sign are taken, the number stops at the first
// character that can't continue it, and nothing comes back when no digits start the text.
[[nodiscard]] std::optional<int> scanInteger(std::string_view text);
[[nodiscard]] std::optional<float> scanFloat(std::string_view text);

} // namespace nocturne::common

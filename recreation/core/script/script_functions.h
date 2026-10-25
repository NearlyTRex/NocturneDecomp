#pragma once

#include <string>
#include <string_view>

namespace nocturne::core {

void staticInit();

// A script line without its leading whitespace, its "//" comment, and the whitespace before it.
[[nodiscard]] std::string trimLine(std::string_view line);
[[nodiscard]] std::string_view trimString(std::string_view text);
[[nodiscard]] std::string_view skipWhitespace(std::string_view text);

} // namespace nocturne::core

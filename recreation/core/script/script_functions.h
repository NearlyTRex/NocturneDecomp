#pragma once

#include <cstddef>
#include <expected>
#include <string>
#include <string_view>

namespace nocturne::core {

void staticInit();

// A script line without its leading whitespace, its "//" comment, and the whitespace before it.
[[nodiscard]] std::string trimLine(std::string_view line);
[[nodiscard]] std::string_view trimString(std::string_view text);
[[nodiscard]] std::string_view skipWhitespace(std::string_view text);
// A command's "( ... )", nested parentheses included, trimmed; the cursor moves past it and the
// whitespace after. The argument must be shorter than max_length.
[[nodiscard]] std::expected<std::string, std::string> parseArgument(std::string_view &cursor,
                                                                    std::size_t max_length);
// '@' then one or more letters, digits or underscores, 30 characters at most.
[[nodiscard]] std::expected<void, std::string>
validateActorVariableName(std::string_view variable_name);

} // namespace nocturne::core

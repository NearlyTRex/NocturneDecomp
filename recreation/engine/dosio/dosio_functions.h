#pragma once

#include <string>
#include <string_view>

namespace nocturne::engine {

// filename under directory, joined with the game's backslash; filename alone without one.
[[nodiscard]] std::string getRelativeFilePath(std::string_view directory,
                                              std::string_view filename);

} // namespace nocturne::engine

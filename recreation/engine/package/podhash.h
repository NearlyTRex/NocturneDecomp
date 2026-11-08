#pragma once

#include "platform/fwd.h"

#include <optional>
#include <string>
#include <string_view>

namespace nocturne::engine {

// The file's XXH3-128 in canonical hex, read a block at a time; nothing when it can't be opened.
[[nodiscard]] std::optional<std::string> hashFile(platform::IFileSystem &file_system,
                                                  std::string_view path);

} // namespace nocturne::engine

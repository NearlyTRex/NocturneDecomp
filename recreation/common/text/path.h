#pragma once

#include <string>
#include <string_view>

namespace nocturne::common {

// A path the game spelled with Windows separators, with '/' in their place.
[[nodiscard]] std::string toPortablePath(std::string_view path);
// The last component: everything after the last '\' or '/'.
[[nodiscard]] std::string_view pathLeaf(std::string_view path);

} // namespace nocturne::common

#pragma once

#include <functional>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::common {

// A path the game spelled with Windows separators, with '/' in their place.
[[nodiscard]] std::string toPortablePath(std::string_view path);
// The last component: everything after the last '\' or '/'.
[[nodiscard]] std::string_view pathLeaf(std::string_view path);

// What path resolution asks of a file system: whether a path exists, and a directory's entries
// ("" is the working directory; nothing when it can't be listed).
struct SPathLookup {
    std::function<bool(const std::string &)> exists;
    std::function<std::vector<std::string>(const std::string &)> list_directory;
};

// The name a case-sensitive file system has for a path Windows would open: each component the
// exact spelling doesn't find is matched among its directory's entries ignoring ASCII case, the
// exact spelling first. From the first component that matches nothing, the rest is kept as given
// so the open that follows fails on the path that was asked for.
[[nodiscard]] std::string resolvePathIgnoringCase(std::string_view path, const SPathLookup &lookup);

} // namespace nocturne::common

#pragma once

#include <string>
#include <string_view>

namespace nocturne::common {

struct SWildcardPath {
    // Uses '/' separators; empty when the pattern names no directory.
    std::string directory;
    std::string pattern;
};

// Splits "art\\*.raw" into "art" and "*.raw"; either separator is accepted.
[[nodiscard]] SWildcardPath splitWildcardPath(std::string_view path);
// FindFirstFile matching: '*' is any run, '?' one character, case folded in ASCII only.
[[nodiscard]] bool matchesWildcard(std::string_view pattern, std::string_view name);

} // namespace nocturne::common

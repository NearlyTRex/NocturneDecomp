#pragma once

#include "engine/package/packagediscovery.h"
#include "platform/fwd.h"

#include <string>
#include <string_view>
#include <vector>

namespace nocturne::engine {

// One package id a line, first loaded first, '#' starting a comment. The base game, always
// loaded first, isn't listed.
inline constexpr std::string_view kLoadOrderName = "loadorder.txt";

struct SLoadOrder {
    // First loaded first; a later package's files and stories win over an earlier one's.
    std::vector<SPackage> packages;
    std::vector<std::string> notes;
};

// The base game, then the packages loadorder.txt names in its order, then any it doesn't, which
// are added to its end. A line naming a package that isn't installed keeps its place and is
// noted. A package needing one that isn't loaded before it isn't loaded.
[[nodiscard]] SLoadOrder orderPackages(platform::IFileSystem &file_system,
                                       std::vector<SPackage> discovered);

} // namespace nocturne::engine

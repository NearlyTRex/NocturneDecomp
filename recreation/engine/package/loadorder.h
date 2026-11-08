#pragma once

#include "engine/package/packagediscovery.h"
#include "platform/fwd.h"

#include <string>
#include <string_view>
#include <vector>

namespace nocturne::engine {

// One package id a line, first loaded first. "# id" is a package turned off; any other line
// after a '#' is a comment. Without the file, the base game is turned on.
inline constexpr std::string_view kLoadOrderName = "loadorder.txt";

struct SLoadOrder {
    // First loaded first; a later package's files and stories win over an earlier one's.
    std::vector<SPackage> packages;
    std::vector<std::string> notes;
};

// The packages loadorder.txt turns on, in its order. A package it doesn't name is added to it
// turned off; a line naming one that isn't installed keeps its place and is noted. A package
// needing one that isn't loaded before it isn't loaded, and a POD that is a file an earlier
// package loads isn't loaded again.
[[nodiscard]] SLoadOrder orderPackages(platform::IFileSystem &file_system,
                                       std::vector<SPackage> discovered);

} // namespace nocturne::engine

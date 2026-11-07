#pragma once

#include "engine/package/packagedata.h"
#include "platform/fwd.h"

#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::engine {

inline constexpr std::string_view kManifestName = "nocturne.toml";
// The first line of a manifest the game wrote. Only such a manifest is written again, so a
// package's own isn't reformatted.
inline constexpr std::string_view kWrittenByGame =
    "# Written by Nocturne from the PODs it found. Delete this line to keep your own edits.";

// A package found in the install.
struct SPackage {
    SPackageManifest manifest;
    // Holding its nocturne.toml, relative to the install folder: "" for the base game.
    std::string folder;
    bool written_by_game = false;

    bool operator==(const SPackage &) const = default;
};

struct SPackageDiscovery {
    // The base game's first, then the rest by folder, ignoring case.
    std::vector<SPackage> packages;
    // What wasn't loaded, or couldn't be written, and why.
    std::vector<std::string> notes;
};

// The base game's package, from the install folder's nocturne.toml or one written from the known
// release the install matches; then every subfolder's. A folder holding a nocturne.toml is a
// package and isn't searched further; one holding PODs without one is given one. A POD in the
// install folder that the base game's manifest doesn't list isn't loaded.
[[nodiscard]] SPackageDiscovery discoverPackages(platform::IFileSystem &file_system,
                                                 std::span<const SRelease> releases);

// The package's nocturne.toml, led by kWrittenByGame. False when it can't be written.
bool writeManifest(platform::IFileSystem &file_system, const SPackage &package);

} // namespace nocturne::engine

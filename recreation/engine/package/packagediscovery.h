#pragma once

#include "engine/package/packagedata.h"
#include "platform/fwd.h"

#include <cstdint>
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
    // By folder, ignoring case, a base game's manifest the game wrote first.
    std::vector<SPackage> packages;
    // What wasn't loaded, or couldn't be written, and why.
    std::vector<std::string> notes;
    // The archives left to be unpacked, whose packages aren't among those found.
    std::vector<std::string> archives_left;
};

// Unpacking a large archive takes long enough to want a loading screen, which needs the packages
// already unpacked to draw it.
enum class EArchiveUnpacking : std::uint8_t { Now, Later };

// Every folder's nocturne.toml, each a package rooted at its folder. Without one whose id is the
// base game's, one is written from the known release the install matches, in the folder holding
// its PODs; one the game wrote that has lost a POD it needs is written again, as is one whose
// game content isn't its release's as this build has it. A subfolder's PODs
// that no manifest names, links followed, are given a manifest; those of the install folder or
// of a folder with a manifest are noted. A ZIP or 7z is searched as a folder where it lies, once
// unpacked into the archive cache, and the cache's folders for archives no longer there go; one
// not yet unpacked is left for later when asked.
[[nodiscard]] SPackageDiscovery
discoverPackages(platform::IFileSystem &file_system, std::span<const SRelease> releases,
                 EArchiveUnpacking unpacking = EArchiveUnpacking::Now);

// The package's nocturne.toml, led by kWrittenByGame. False when it can't be written.
bool writeManifest(platform::IFileSystem &file_system, const SPackage &package);

} // namespace nocturne::engine

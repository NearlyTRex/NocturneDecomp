#pragma once

#include "engine/package/packagedata.h"
#include "platform/fwd.h"

#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::engine {

// The game's own package.
inline constexpr std::string_view kBasePackageId = "nocturne";

// A base manifest written for an install, and how the install differs from the release it
// matched: a POD missing, unreadable, or not the release's copy.
struct SBaseManifest {
    SPackageManifest manifest;
    std::vector<std::string> notes;
};

// The install folder's manifest, from the known release whose PODs it has the most of: that
// release's PODs in the order the retail build mounts them, each with what it is on disk now.
// installed is the install's PODs, by path from the install folder, the first with a name taken.
// A POD the release didn't ship isn't the base game's. With no known release, fatal.
[[nodiscard]] SBaseManifest makeBaseManifest(platform::IFileSystem &file_system,
                                             std::span<const std::string> installed,
                                             std::span<const SRelease> releases);

} // namespace nocturne::engine

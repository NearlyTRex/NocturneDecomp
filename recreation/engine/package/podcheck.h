#pragma once

#include "engine/package/packagedata.h"
#include "platform/fwd.h"

#include <cstdint>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::engine {

enum class EPodState : std::uint8_t {
    // As recorded, or with nothing recorded to compare.
    Unchanged,
    Missing,
    Unreadable,
    // Its hash isn't the recorded one.
    Changed,
    // Its size or time moved but its hash is the recorded one; the manifest takes the new ones.
    Rehashed,
};

struct SPodCheck {
    std::string path;
    EPodState state = EPodState::Unchanged;

    bool operator==(const SPodCheck &) const = default;
};

// Each of the manifest's PODs, found under folder ("" for the install folder), against what it
// recorded: a POD whose size or time isn't the recorded one is hashed again.
[[nodiscard]] std::vector<SPodCheck> checkPackagePods(platform::IFileSystem &file_system,
                                                      std::string_view folder,
                                                      SPackageManifest &manifest);

} // namespace nocturne::engine

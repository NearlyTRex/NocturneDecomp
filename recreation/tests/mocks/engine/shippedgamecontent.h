#pragma once

#include "engine/package/gamecontent.h"
#include "engine/package/packagedata.h"

#include <vector>

namespace nocturne::engine {

// data/games/nocturne.toml as the catalogue's first release carries it, so what a test expects
// of the front end is the shipped game's.
inline const SGameContent &getShippedGameContent() {
    static const std::vector<SRelease> releases =
        loadReleaseCatalog(getReleaseCatalogText(), getEmbeddedGames());
    return releases.front().content;
}

} // namespace nocturne::engine

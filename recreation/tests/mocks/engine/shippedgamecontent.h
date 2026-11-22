#pragma once

#include "engine/package/gamecontent.h"
#include "engine/package/packagedata.h"

#include <algorithm>
#include <string_view>
#include <vector>

namespace nocturne::engine {

inline const std::vector<SRelease> &getShippedReleases() {
    static const std::vector<SRelease> releases =
        loadReleaseCatalog(getReleaseCatalogText(), getEmbeddedGames());
    return releases;
}

// data/games/nocturne.toml as the catalogue's first release carries it, so what a test expects
// of the front end is the shipped game's.
inline const SGameContent &getShippedGameContent() {
    return getShippedReleases().front().content;
}

// data/games/<game>.toml as the game's first release in the catalogue carries it.
inline const SGameContent &getShippedGameContent(std::string_view game) {
    const std::vector<SRelease> &releases = getShippedReleases();
    return std::ranges::find(releases, game, &SRelease::game)->content;
}

} // namespace nocturne::engine

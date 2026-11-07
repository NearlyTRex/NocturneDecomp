#pragma once

#include "engine/package/gamecontent.h"

#include <cstdint>
#include <ctime>
#include <expected>
#include <optional>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::engine {

// A POD a package mounts, and what it was when its manifest was written, so a later start can
// tell it has changed.
struct SPackagePod {
    // Relative to the package's folder.
    std::string path;
    std::optional<std::uint64_t> size;
    // Seconds since 1970, UTC.
    std::optional<std::time_t> modified;
    // XXH3-128, canonical hex.
    std::optional<std::string> xxh3;

    bool operator==(const SPackagePod &) const = default;
};

// A package's nocturne.toml: the id the load order names it by, the packages it needs, and its
// PODs, a later one answering a name before an earlier one. Without a required POD the package
// can't be used.
struct SPackageManifest {
    std::string id;
    std::string name;
    std::string version;
    // The known release a base manifest was written from.
    std::string release;
    std::vector<std::string> dependencies;
    std::vector<std::string> required;
    std::vector<SPackagePod> pods;
    SGameContent game;

    bool operator==(const SPackageManifest &) const = default;
};

// A POD a known release shipped.
struct SReleasePod {
    std::string name;
    std::uint64_t size = 0;
    std::string xxh3;

    bool operator==(const SReleasePod &) const = default;
};

// A release of the game, by the PODs it shipped. Its id is unique in the catalogue, and stays the
// same once a manifest has recorded it.
struct SRelease {
    std::string id;
    std::string name;
    // The game it is a release of, by its data/games/ file.
    std::string game;
    std::vector<std::string> required;
    std::vector<SReleasePod> pods;
    // From the game's file, for the base manifest written from the release.
    SGameContent content;

    bool operator==(const SRelease &) const = default;
};

// A game this build knows, as data/games/<id>.toml has it, compiled in.
struct SEmbeddedGame {
    std::string_view id;
    std::string_view text;
};

// What a package's or release's id may hold: letters, digits, '.', '_' and '-'.
[[nodiscard]] bool isIdCharacter(char c);

// The manifest, or what is wrong with it, naming the key.
[[nodiscard]] std::expected<SPackageManifest, std::string>
parsePackageManifest(std::string_view text);
// TOML that parsePackageManifest reads back as the same manifest.
[[nodiscard]] std::string formatPackageManifest(const SPackageManifest &manifest);
// The releases, or what is wrong with the catalogue, a release's id given twice included. Their
// content is the games' to give.
[[nodiscard]] std::expected<std::vector<SRelease>, std::string>
parseReleaseCatalog(std::string_view text);
// data/releases.toml, compiled in.
[[nodiscard]] std::string_view getReleaseCatalogText();
[[nodiscard]] std::span<const SEmbeddedGame> getEmbeddedGames();
// The catalogue's releases, each with its game's content; what is wrong with either is fatal.
[[nodiscard]] std::vector<SRelease> loadReleaseCatalog(std::string_view text,
                                                       std::span<const SEmbeddedGame> games);

} // namespace nocturne::engine

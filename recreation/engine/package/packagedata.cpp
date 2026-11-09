#include "engine/package/packagedata.h"

#include "common/error/error.h"
#include "engine/package/gamecontentfile.h"
#include "engine/package/tomlfields.h"

#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <ctime>
#include <expected>
#include <format>
#include <optional>
#include <span>
#include <string>
#include <string_view>
#include <toml++/toml.hpp>
#include <vector>

namespace nocturne::engine {
namespace {

constexpr std::size_t kHashDigits = 32;

TomlResult<std::optional<std::uint64_t>> readSize(const toml::table &table,
                                                  std::string_view where) {
    const TomlResult<std::optional<std::int64_t>> size = readInteger(table, where, "size");
    if (!size) {
        return std::unexpected(size.error());
    }
    if (!*size) {
        return std::nullopt;
    }
    if (**size < 0) {
        return std::unexpected(std::format("{}size: below zero", where));
    }
    return static_cast<std::uint64_t>(**size);
}

bool isHash(std::string_view hash) {
    return hash.size() == kHashDigits && std::ranges::all_of(hash, [](char c) {
               return (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f');
           });
}

// Inside the package: not absolute, no drive, no step up out of it. The path isn't empty.
bool isPackagePath(std::string_view path) {
    if (path.front() == '/' || path.front() == '\\' || path.contains(':')) {
        return false;
    }
    std::size_t start = 0;
    while (start <= path.size()) {
        const std::size_t end = std::min(path.find_first_of("/\\", start), path.size());
        if (path.substr(start, end - start) == "..") {
            return false;
        }
        start = end + 1;
    }
    return true;
}

TomlResult<std::string> readHash(const toml::table &table, std::string_view where) {
    TomlResult<std::optional<std::string>> hash = readString(table, where, "xxh3");
    if (!hash) {
        return std::unexpected(hash.error());
    }
    if (!*hash || !isHash(**hash)) {
        return std::unexpected(std::format("{}xxh3: not 32 lower-case hex digits", where));
    }
    return std::move(**hash);
}

TomlResult<SPackagePod> readPackagePod(const toml::table &table, std::string_view where) {
    if (TomlResult<void> keys =
            rejectUnknownKeys(table, where, {"path", "size", "modified", "xxh3"});
        !keys) {
        return std::unexpected(keys.error());
    }
    SPackagePod pod;
    TomlResult<std::string> path = readRequiredString(table, where, "path");
    if (!path) {
        return std::unexpected(path.error());
    }
    if (!isPackagePath(*path)) {
        return std::unexpected(std::format("{}path: not a path inside the package", where));
    }
    pod.path = std::move(*path);
    const TomlResult<std::optional<std::uint64_t>> size = readSize(table, where);
    if (!size) {
        return std::unexpected(size.error());
    }
    pod.size = *size;
    const TomlResult<std::optional<std::int64_t>> modified = readInteger(table, where, "modified");
    if (!modified) {
        return std::unexpected(modified.error());
    }
    if (*modified) {
        pod.modified = static_cast<std::time_t>(**modified);
    }
    if (table.contains("xxh3")) {
        TomlResult<std::string> hash = readHash(table, where);
        if (!hash) {
            return std::unexpected(hash.error());
        }
        pod.xxh3 = std::move(*hash);
    }
    return pod;
}

// The manifest's strings and lists of names, by key.
TomlResult<void> readManifestFields(const toml::table &table, SPackageManifest &manifest) {
    for (const auto &[key, field] :
         {std::pair{"name", &manifest.name}, std::pair{"version", &manifest.version},
          std::pair{"release", &manifest.release}}) {
        TomlResult<std::optional<std::string>> value = readString(table, "", key);
        if (!value) {
            return std::unexpected(value.error());
        }
        *field = value->value_or("");
    }
    for (const auto &[key, field] : {std::pair{"requires", &manifest.dependencies},
                                     std::pair{"required", &manifest.required}}) {
        TomlResult<std::vector<std::string>> values = readStrings(table, "", key);
        if (!values) {
            return std::unexpected(values.error());
        }
        *field = std::move(*values);
    }
    return {};
}

// A manifest without a name goes by its id.
TomlResult<SPackageManifest> readPackageManifest(const toml::table &table) {
    if (TomlResult<void> keys = rejectUnknownKeys(
            table, "", {"id", "name", "version", "release", "requires", "required", "pod"},
            kGameContentKeys);
        !keys) {
        return std::unexpected(keys.error());
    }
    SPackageManifest manifest;
    TomlResult<std::string> id = readId(table, "");
    if (!id) {
        return std::unexpected(id.error());
    }
    manifest.id = std::move(*id);
    if (TomlResult<void> fields = readManifestFields(table, manifest); !fields) {
        return std::unexpected(fields.error());
    }
    if (manifest.name.empty()) {
        manifest.name = manifest.id;
    }
    const TomlResult<std::vector<const toml::table *>> pods = readTables(table, "", "pod");
    if (!pods) {
        return std::unexpected(pods.error());
    }
    for (std::size_t i = 0; i < pods->size(); ++i) {
        TomlResult<SPackagePod> pod = readPackagePod(*(*pods)[i], std::format("pod {}: ", i + 1));
        if (!pod) {
            return std::unexpected(pod.error());
        }
        manifest.pods.push_back(std::move(*pod));
    }
    TomlResult<SGameContent> game = readGameContent(table);
    if (!game) {
        return std::unexpected(game.error());
    }
    manifest.game = std::move(*game);
    return manifest;
}

// A POD by its name, or with name_key "path" a loose file by its '/'-separated path in the install.
TomlResult<SReleaseFile> readReleaseFile(const toml::table &table, std::string_view where,
                                         std::string_view name_key) {
    if (TomlResult<void> keys = rejectUnknownKeys(table, where, {name_key, "size", "xxh3"});
        !keys) {
        return std::unexpected(keys.error());
    }
    TomlResult<std::string> name = readRequiredString(table, where, name_key);
    if (!name) {
        return std::unexpected(name.error());
    }
    if (name_key == "path" && (name->contains('\\') || !isPackagePath(*name))) {
        return std::unexpected(
            std::format("{}path: not a '/'-separated path inside the install", where));
    }
    const TomlResult<std::optional<std::uint64_t>> size = readSize(table, where);
    if (!size) {
        return std::unexpected(size.error());
    }
    if (!*size) {
        return std::unexpected(std::format("{}size: missing", where));
    }
    TomlResult<std::string> hash = readHash(table, where);
    if (!hash) {
        return std::unexpected(hash.error());
    }
    return SReleaseFile{.name = std::move(*name), .size = **size, .xxh3 = std::move(*hash)};
}

// The release's [[release.<kind>]] tables.
TomlResult<std::vector<SReleaseFile>> readReleaseFiles(const toml::table &table,
                                                       std::string_view where,
                                                       std::string_view kind,
                                                       std::string_view name_key) {
    const TomlResult<std::vector<const toml::table *>> tables = readTables(table, where, kind);
    if (!tables) {
        return std::unexpected(tables.error());
    }
    std::vector<SReleaseFile> files;
    for (std::size_t i = 0; i < tables->size(); ++i) {
        TomlResult<SReleaseFile> file =
            readReleaseFile(*(*tables)[i], std::format("{}{} {}: ", where, kind, i + 1), name_key);
        if (!file) {
            return std::unexpected(file.error());
        }
        files.push_back(std::move(*file));
    }
    return files;
}

TomlResult<SRelease> readRelease(const toml::table &table, std::string_view where) {
    if (TomlResult<void> keys =
            rejectUnknownKeys(table, where, {"id", "name", "game", "required", "pod", "file"});
        !keys) {
        return std::unexpected(keys.error());
    }
    TomlResult<std::string> id = readId(table, where);
    if (!id) {
        return std::unexpected(id.error());
    }
    TomlResult<std::string> name = readRequiredString(table, where, "name");
    if (!name) {
        return std::unexpected(name.error());
    }
    TomlResult<std::string> game = readRequiredString(table, where, "game");
    if (!game) {
        return std::unexpected(game.error());
    }
    TomlResult<std::vector<std::string>> required = readStrings(table, where, "required");
    if (!required) {
        return std::unexpected(required.error());
    }
    TomlResult<std::vector<SReleaseFile>> pods = readReleaseFiles(table, where, "pod", "name");
    if (!pods) {
        return std::unexpected(pods.error());
    }
    TomlResult<std::vector<SReleaseFile>> files = readReleaseFiles(table, where, "file", "path");
    if (!files) {
        return std::unexpected(files.error());
    }
    return SRelease{.id = std::move(*id),
                    .name = std::move(*name),
                    .game = std::move(*game),
                    .required = std::move(*required),
                    .pods = std::move(*pods),
                    .files = std::move(*files),
                    .content = {}};
}

// Each release's game content from the game it names.
TomlResult<void> attachGameContent(std::vector<SRelease> &releases,
                                   std::span<const SEmbeddedGame> games) {
    for (SRelease &release : releases) {
        const auto game = std::ranges::find(games, release.game, &SEmbeddedGame::id);
        if (game == games.end()) {
            return std::unexpected(
                std::format("release {}: game: no data/games/{}.toml", release.id, release.game));
        }
        std::expected<SGameContent, std::string> content = parseGameContent(game->text);
        if (!content) {
            return std::unexpected(std::format("games/{}.toml: {}", game->id, content.error()));
        }
        release.content = std::move(*content);
    }
    return {};
}

} // namespace

bool isIdCharacter(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') || c == '.' ||
           c == '_' || c == '-';
}

std::expected<SPackageManifest, std::string> parsePackageManifest(std::string_view text) {
    return parseToml(text).and_then(
        [](const toml::table &table) { return readPackageManifest(table); });
}

std::string formatPackageManifest(const SPackageManifest &manifest) {
    std::string text =
        std::format("id = {}\nname = {}\n", quoteToml(manifest.id), quoteToml(manifest.name));
    if (!manifest.version.empty()) {
        text += std::format("version = {}\n", quoteToml(manifest.version));
    }
    if (!manifest.release.empty()) {
        text += std::format("release = {}\n", quoteToml(manifest.release));
    }
    if (!manifest.dependencies.empty()) {
        text += std::format("requires = {}\n", formatTomlList(manifest.dependencies));
    }
    if (!manifest.required.empty()) {
        text += std::format("required = {}\n", formatTomlList(manifest.required));
    }
    text += formatGameContentKeys(manifest.game);
    for (const SPackagePod &pod : manifest.pods) {
        text += std::format("\n[[pod]]\npath = {}\n", quoteToml(pod.path));
        if (pod.size) {
            text += std::format("size = {}\n", *pod.size);
        }
        if (pod.modified) {
            text += std::format("modified = {}\n", *pod.modified);
        }
        if (pod.xxh3) {
            text += std::format("xxh3 = {}\n", quoteToml(*pod.xxh3));
        }
    }
    return text + formatGameContentTables(manifest.game);
}

std::expected<std::vector<SRelease>, std::string> parseReleaseCatalog(std::string_view text) {
    const TomlResult<toml::table> table = parseToml(text);
    if (!table) {
        return std::unexpected(table.error());
    }
    if (TomlResult<void> keys = rejectUnknownKeys(*table, "", {"release"}); !keys) {
        return std::unexpected(keys.error());
    }
    const TomlResult<std::vector<const toml::table *>> tables = readTables(*table, "", "release");
    if (!tables) {
        return std::unexpected(tables.error());
    }
    std::vector<SRelease> releases;
    for (std::size_t i = 0; i < tables->size(); ++i) {
        TomlResult<SRelease> release =
            readRelease(*(*tables)[i], std::format("release {}: ", i + 1));
        if (!release) {
            return std::unexpected(release.error());
        }
        if (std::ranges::contains(releases, release->id, &SRelease::id)) {
            return std::unexpected(
                std::format("release {}: id: {} is another release's", i + 1, release->id));
        }
        releases.push_back(std::move(*release));
    }
    return releases;
}

std::vector<SRelease> loadReleaseCatalog(std::string_view text,
                                         std::span<const SEmbeddedGame> games) {
    std::expected<std::vector<SRelease>, std::string> releases = parseReleaseCatalog(text);
    if (!releases) {
        common::displayErrorAndQuit(std::format("releases.toml: {}", releases.error()));
    }
    if (TomlResult<void> attached = attachGameContent(*releases, games); !attached) {
        common::displayErrorAndQuit(attached.error());
    }
    return std::move(*releases);
}

} // namespace nocturne::engine

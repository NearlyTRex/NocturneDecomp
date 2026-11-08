#pragma once

#include "platform/fwd.h"

#include <expected>
#include <optional>
#include <span>
#include <string>
#include <string_view>

namespace nocturne::engine {

// Where archives are unpacked in the install folder when the user's cache can't be had. Hidden,
// so it isn't searched as a folder of the install; each archive's folder in it is searched as
// the archive.
inline constexpr std::string_view kArchiveCacheName = ".packages";
// The folder in the game's own folder of the user's cache holding each install's archive cache.
inline constexpr std::string_view kUserArchiveCacheName = "packages";

// The folder archives are unpacked in: the install's own in the titled game's folder of the
// user's cache, since the install folder may be one the game can't write to, named after the
// install and a hash of its real path so two installs never prune each other's;
// kArchiveCacheName in the install when there is no title or the host names no cache. It is made
// with the first archive unpacked in it.
[[nodiscard]] std::string findArchiveCache(platform::IFileSystem &file_system,
                                           const std::optional<std::string> &title);

// The folder in the cache the archive's files are in, when it has been unpacked whole and hasn't
// changed since.
[[nodiscard]] std::optional<std::string> findUnpacked(platform::IFileSystem &file_system,
                                                      std::string_view cache,
                                                      std::string_view archive_path);

// Why the archive won't be unpacked: it can't be read whole, or holds no package.
[[nodiscard]] std::expected<void, std::string> checkUnpackable(platform::IFileSystem &file_system,
                                                               std::string_view archive_path);

// The folder in the cache the archive's files are in, unpacked unless they already are, or why
// they can't be. The folder is named after the archive and a hash of its path, size and time, so
// an archive changed or moved is unpacked afresh; a record beside it, written last, says it was
// unpacked whole, so one cut short is unpacked again. An archive holding no nocturne.toml and no
// POD isn't a package and isn't unpacked.
[[nodiscard]] std::expected<std::string, std::string>
unpackToCache(platform::IFileSystem &file_system, std::string_view cache,
              std::string_view archive_path);

// Removes what the cache holds for archives other than those whose folders are kept, and the
// install's own cache when this one isn't it.
void pruneArchiveCache(platform::IFileSystem &file_system, std::string_view cache,
                       std::span<const std::string> kept);

} // namespace nocturne::engine

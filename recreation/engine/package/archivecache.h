#pragma once

#include "platform/fwd.h"

#include <expected>
#include <span>
#include <string>
#include <string_view>

namespace nocturne::engine {

// Where archives are unpacked, in the install folder. Hidden, so it isn't searched as a folder
// of the install; each archive's folder in it is searched as the archive.
inline constexpr std::string_view kArchiveCacheName = ".packages";

// The folder the archive's files are in, unpacked unless they already are, or why they can't
// be. The folder is named after the archive and a hash of its path, size and time, so an archive
// changed or moved is unpacked afresh; a record beside it, written last, says it was unpacked
// whole, so one cut short is unpacked again. An archive holding no nocturne.toml and no POD
// isn't a package and isn't unpacked.
[[nodiscard]] std::expected<std::string, std::string>
unpackToCache(platform::IFileSystem &file_system, std::string_view archive_path);

// Removes what the cache holds for archives other than those whose folders are kept.
void pruneArchiveCache(platform::IFileSystem &file_system, std::span<const std::string> kept);

} // namespace nocturne::engine

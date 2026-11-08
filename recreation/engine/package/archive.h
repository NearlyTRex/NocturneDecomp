#pragma once

#include "platform/fwd.h"

#include <expected>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::engine {

// A file or folder in an archive, by its path inside it with '/' between folders.
struct SArchiveEntry {
    std::string path;
    bool is_folder = false;

    bool operator==(const SArchiveEntry &) const = default;
};

// Whether the file begins as a ZIP or a 7z does; its name doesn't matter.
[[nodiscard]] bool isArchive(platform::IFileSystem &file_system, std::string_view path);

// The archive's files and folders, or why it can't be unpacked: it can't be read, or an entry
// is a link, or its path leads out of the folder it would be unpacked in.
[[nodiscard]] std::expected<std::vector<SArchiveEntry>, std::string>
listArchive(platform::IFileSystem &file_system, std::string_view path);

// The archive's files and folders, written in the folder, which is made. Why not when it can't
// be, what was written by then left for the caller to remove.
[[nodiscard]] std::expected<void, std::string>
unpackArchive(platform::IFileSystem &file_system, std::string_view path, std::string_view folder);

} // namespace nocturne::engine

#include "engine/package/archivecache.h"

#include "common/text/ascii.h"
#include "common/text/path.h"
#include "engine/package/archive.h"
#include "engine/package/packagediscovery.h"
#include "platform/filesystem.h"

#include <algorithm>
#include <expected>
#include <format>
#include <optional>
#include <span>
#include <string>
#include <string_view>
#include <utility>
#include <vector>
#include <xxhash.h>

namespace nocturne::engine {
namespace {

constexpr std::string_view kRecordSuffix = ".unpacked";

std::string recordOf(std::string_view folder) {
    return std::format("{}{}", folder, kRecordSuffix);
}

// A package's files: its manifest or a POD.
bool holdsPackage(std::span<const SArchiveEntry> entries) {
    return std::ranges::any_of(entries, [](const SArchiveEntry &entry) {
        const std::string_view leaf = common::pathLeaf(entry.path);
        return !entry.is_folder &&
               (common::equalsIgnoringAsciiCase(leaf, kManifestName) ||
                common::equalsIgnoringAsciiCase(common::pathExtension(leaf), ".pod"));
    });
}

// The text's leaf and a hash of the text, so like-named things don't share a name.
std::string hashedName(std::string_view leaf, std::string_view text) {
    return std::format("{}-{:016x}", leaf, XXH3_64bits(text.data(), text.size()));
}

// The archive's folder in the cache, unpacked or not; nothing when the archive is missing.
std::optional<std::string> cacheFolderOf(platform::IFileSystem &file_system, std::string_view cache,
                                         std::string_view archive_path) {
    const std::optional<platform::SFileInfo> info = file_system.getFileInfo(archive_path);
    if (!info) {
        return std::nullopt;
    }
    return common::joinPath(
        cache, hashedName(common::pathLeaf(archive_path),
                          std::format("{}\n{}\n{}", archive_path, info->size, info->modified)));
}

} // namespace

std::string findArchiveCache(platform::IFileSystem &file_system,
                             const std::optional<std::string> &title) {
    if (!title) {
        return std::string(kArchiveCacheName);
    }
    const std::optional<std::string> user_cache = file_system.getCacheFolder(*title);
    const std::optional<std::string> install = file_system.getRealPath(".");
    if (!user_cache || !install) {
        return std::string(kArchiveCacheName);
    }
    return common::joinPath(common::joinPath(*user_cache, kUserArchiveCacheName),
                            hashedName(common::pathLeaf(*install), *install));
}

std::optional<std::string> findUnpacked(platform::IFileSystem &file_system, std::string_view cache,
                                        std::string_view archive_path) {
    std::optional<std::string> folder = cacheFolderOf(file_system, cache, archive_path);
    if (!folder || !file_system.getFileInfo(recordOf(*folder))) {
        return std::nullopt;
    }
    return folder;
}

std::expected<void, std::string> checkUnpackable(platform::IFileSystem &file_system,
                                                 std::string_view archive_path) {
    const std::expected<std::vector<SArchiveEntry>, std::string> entries =
        listArchive(file_system, archive_path);
    if (!entries) {
        return std::unexpected(entries.error());
    }
    if (!holdsPackage(*entries)) {
        return std::unexpected(
            std::format("{} holds no {} and no POD", archive_path, kManifestName));
    }
    return {};
}

std::expected<std::string, std::string> unpackToCache(platform::IFileSystem &file_system,
                                                      std::string_view cache,
                                                      std::string_view archive_path) {
    if (std::optional<std::string> unpacked = findUnpacked(file_system, cache, archive_path)) {
        return std::move(*unpacked);
    }
    if (std::expected<void, std::string> checked = checkUnpackable(file_system, archive_path);
        !checked) {
        return std::unexpected(std::move(checked.error()));
    }
    // It was listed, so it is there to be named.
    std::string folder = cacheFolderOf(file_system, cache, archive_path).value_or("");
    static_cast<void>(file_system.removeDirectory(folder));
    std::expected<void, std::string> unpacked = unpackArchive(file_system, archive_path, folder);
    if (unpacked && !file_system.writeFile(recordOf(folder), archive_path)) {
        unpacked = std::unexpected(std::format("{} couldn't be written", recordOf(folder)));
    }
    if (!unpacked) {
        static_cast<void>(file_system.removeDirectory(folder));
        return std::unexpected(std::move(unpacked.error()));
    }
    return folder;
}

void pruneArchiveCache(platform::IFileSystem &file_system, std::string_view cache,
                       std::span<const std::string> kept) {
    if (cache != kArchiveCacheName) {
        static_cast<void>(file_system.removeDirectory(kArchiveCacheName));
    }
    for (const platform::SFileInfo &entry : file_system.findFiles(common::joinPath(cache, "*"))) {
        const std::string path = common::joinPath(cache, entry.name);
        if (std::ranges::any_of(kept, [&path](const std::string &folder) {
                return path == folder || path == recordOf(folder);
            })) {
            continue;
        }
        static_cast<void>(entry.is_directory ? file_system.removeDirectory(path)
                                             : file_system.removeFile(path));
    }
}

} // namespace nocturne::engine

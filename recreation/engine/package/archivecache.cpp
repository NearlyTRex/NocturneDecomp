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

} // namespace

std::expected<std::string, std::string> unpackToCache(platform::IFileSystem &file_system,
                                                      std::string_view archive_path) {
    const std::optional<platform::SFileInfo> info = file_system.getFileInfo(archive_path);
    if (!info) {
        return std::unexpected(std::format("{} is missing", archive_path));
    }
    const std::string identity =
        std::format("{}\n{}\n{}", archive_path, info->size, info->modified);
    std::string folder = common::joinPath(
        kArchiveCacheName, std::format("{}-{:016x}", common::pathLeaf(archive_path),
                                       XXH3_64bits(identity.data(), identity.size())));
    if (file_system.getFileInfo(recordOf(folder))) {
        return folder;
    }
    const std::expected<std::vector<SArchiveEntry>, std::string> entries =
        listArchive(file_system, archive_path);
    if (!entries) {
        return std::unexpected(entries.error());
    }
    if (!holdsPackage(*entries)) {
        return std::unexpected(
            std::format("{} holds no {} and no POD", archive_path, kManifestName));
    }
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

void pruneArchiveCache(platform::IFileSystem &file_system, std::span<const std::string> kept) {
    for (const platform::SFileInfo &entry :
         file_system.findFiles(common::joinPath(kArchiveCacheName, "*"))) {
        const std::string path = common::joinPath(kArchiveCacheName, entry.name);
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

#include "platform/sdl/sdlfilesystem.h"

#include "common/text/wildcard.h"

#include <algorithm>
#include <chrono>
#include <filesystem>
#include <system_error>

namespace nocturne::platform::sdl {
namespace {

SFileInfo describe(const std::filesystem::directory_entry &entry, std::string name) {
    std::error_code error;
    SFileInfo info{.name = std::move(name)};
    info.is_directory = entry.is_directory(error);
    info.is_hidden = info.name.starts_with('.');
    const std::filesystem::perms permissions = entry.status(error).permissions();
    info.is_read_only =
        (permissions & std::filesystem::perms::owner_write) == std::filesystem::perms::none;
    if (!info.is_directory) {
        const std::uintmax_t size = entry.file_size(error);
        info.size = error ? 0 : size;
    }
    const std::filesystem::file_time_type modified = entry.last_write_time(error);
    if (!error) {
        info.modified = std::chrono::system_clock::to_time_t(
            std::chrono::time_point_cast<std::chrono::system_clock::duration>(
                std::chrono::file_clock::to_sys(modified)));
    }
    return info;
}

} // namespace

std::vector<SFileInfo> CSdlFileSystem::findFiles(std::string_view pattern) {
    const common::SWildcardPath path = common::splitWildcardPath(pattern);
    const std::filesystem::path directory = path.directory.empty() ? "." : path.directory;
    std::vector<SFileInfo> files;
    // A directory that is missing or unreadable has no matches, as FindFirstFile reports it.
    std::error_code error;
    for (std::filesystem::directory_iterator it(directory, error), end; !error && it != end;
         it.increment(error)) {
        std::string name = it->path().filename().string();
        if (common::matchesWildcard(path.pattern, name)) {
            files.push_back(describe(*it, std::move(name)));
        }
    }
    std::ranges::sort(files, {}, &SFileInfo::name);
    return files;
}

} // namespace nocturne::platform::sdl

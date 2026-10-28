#include "platform/sdl/sdlfilesystem.h"

#include "common/text/path.h"
#include "common/text/wildcard.h"
#include "platform/sdl/sdlfile.h"

#include <algorithm>
#include <array>
#include <chrono>
#include <cstdio>
#include <filesystem>
#include <fstream>
#include <ios>
#include <iterator>
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

std::vector<std::string> listDirectory(const std::string &directory) {
    std::vector<std::string> names;
    std::error_code error;
    for (std::filesystem::directory_iterator it(directory.empty() ? "." : directory, error), end;
         !error && it != end; it.increment(error)) {
        names.push_back(it->path().filename().string());
    }
    return names;
}

// The game's paths name files the way Windows matched them: either separator, any case.
std::string resolve(std::string_view path) {
    static const common::SPathLookup kLookup{
        .exists =
            [](const std::string &candidate) {
                std::error_code error;
                return std::filesystem::exists(candidate, error);
            },
        .list_directory = listDirectory,
    };
    return common::resolvePathIgnoringCase(path, kLookup);
}

} // namespace

std::vector<SFileInfo> CSdlFileSystem::findFiles(std::string_view pattern) {
    const common::SWildcardPath path = common::splitWildcardPath(pattern);
    const std::filesystem::path directory = path.directory.empty() ? "." : resolve(path.directory);
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

std::optional<std::string> CSdlFileSystem::readFile(std::string_view path) {
    std::ifstream file(resolve(path), std::ios::binary);
    if (!file) {
        return std::nullopt;
    }
    return std::string(std::istreambuf_iterator<char>(file), std::istreambuf_iterator<char>());
}

bool CSdlFileSystem::appendFile(std::string_view path, std::string_view text) {
    std::ofstream file(resolve(path), std::ios::binary | std::ios::app);
    file.write(text.data(), static_cast<std::streamsize>(text.size()));
    return static_cast<bool>(file);
}

bool CSdlFileSystem::writeFile(std::string_view path, std::string_view text) {
    std::ofstream file(resolve(path), std::ios::binary | std::ios::trunc);
    file.write(text.data(), static_cast<std::streamsize>(text.size()));
    return static_cast<bool>(file);
}

bool CSdlFileSystem::removeFile(std::string_view path) {
    std::error_code error;
    return std::filesystem::remove(resolve(path), error);
}

std::unique_ptr<IFile> CSdlFileSystem::openFile(std::string_view path, EFileMode mode) {
    static constexpr std::array<const char *, 4> kModes = {"rb", "wb", "ab", "r+b"};
    std::FILE *file = std::fopen(resolve(path).c_str(), kModes.at(static_cast<std::size_t>(mode)));
    if (file == nullptr) {
        return nullptr;
    }
    return std::make_unique<CSdlFile>(file);
}

std::optional<std::string> CSdlFileSystem::getFullPath(std::string_view path) {
    std::error_code error;
    const std::filesystem::path full = std::filesystem::absolute(resolve(path), error);
    if (error) {
        return std::nullopt;
    }
    return full.lexically_normal().string();
}

std::optional<SFileInfo> CSdlFileSystem::getFileInfo(std::string_view path) {
    const std::filesystem::directory_entry entry(resolve(path));
    std::error_code error;
    if (!entry.exists(error)) {
        return std::nullopt;
    }
    return describe(entry, entry.path().filename().string());
}

bool CSdlFileSystem::makeDirectory(std::string_view path) {
    const std::string resolved = resolve(path);
    std::error_code error;
    std::filesystem::create_directories(resolved, error);
    return std::filesystem::is_directory(resolved, error);
}

bool CSdlFileSystem::setModifiedTime(std::string_view path, std::time_t modified) {
    std::error_code error;
    std::filesystem::last_write_time(
        resolve(path),
        std::chrono::file_clock::from_sys(std::chrono::system_clock::from_time_t(modified)), error);
    return !error;
}

bool CSdlFileSystem::setReadOnly(std::string_view path, bool read_only) {
    constexpr std::filesystem::perms kWrite = std::filesystem::perms::owner_write |
                                              std::filesystem::perms::group_write |
                                              std::filesystem::perms::others_write;
    std::error_code error;
    std::filesystem::permissions(resolve(path), kWrite,
                                 read_only ? std::filesystem::perm_options::remove
                                           : std::filesystem::perm_options::add,
                                 error);
    return !error;
}

} // namespace nocturne::platform::sdl

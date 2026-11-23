#include "platform/layeredfilesystem.h"

#include "common/text/path.h"
#include "platform/file.h"

#include <algorithm>
#include <cctype>
#include <map>
#include <ranges>
#include <utility>

namespace nocturne::platform {
namespace {

bool isAbsolute(std::string_view path) {
    return path.starts_with('/') || path.starts_with('\\') || (path.size() > 1 && path[1] == ':');
}

// The path with '/' between its components and no leading "./".
std::string normalise(std::string_view path) {
    const std::string portable = common::toPortablePath(path);
    std::string_view rest = portable;
    while (rest.starts_with("./")) {
        rest.remove_prefix(2);
    }
    return std::string(rest);
}

std::string lowerCase(std::string_view name) {
    std::string lower(name);
    std::ranges::transform(lower, lower.begin(), [](char c) {
        return static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
    });
    return lower;
}

} // namespace

CLayeredFileSystem::CLayeredFileSystem(IFileSystem &host, std::vector<std::string> folders)
    : host_(host), folders_(std::move(folders)) {}

void CLayeredFileSystem::setFolders(std::vector<std::string> folders) {
    folders_ = std::move(folders);
}

const std::vector<std::string> &CLayeredFileSystem::getFolders() const {
    return folders_;
}

bool CLayeredFileSystem::isLayered(std::string_view path) const {
    return !folders_.empty() && !isAbsolute(path);
}

std::string CLayeredFileSystem::inFolder(const std::string &folder, std::string_view path) {
    if (folder.empty()) {
        return std::string(path);
    }
    return common::joinPath(folder, normalise(path));
}

std::string CLayeredFileSystem::findPath(std::string_view path) {
    if (!isLayered(path)) {
        return std::string(path);
    }
    for (const std::string &folder : folders_) {
        std::string candidate = inFolder(folder, path);
        if (host_.getFileInfo(candidate)) {
            return candidate;
        }
    }
    return inFolder(folders_.front(), path);
}

std::string CLayeredFileSystem::makeWritePath(std::string_view path) {
    if (!isLayered(path)) {
        return std::string(path);
    }
    std::string target = inFolder(folders_.front(), path);
    const std::string portable = common::toPortablePath(target);
    if (const std::size_t slash = portable.rfind('/'); slash != std::string::npos) {
        const std::string parent = portable.substr(0, slash);
        if (!host_.getFileInfo(parent)) {
            host_.makeDirectory(parent);
        }
    }
    return target;
}

std::string CLayeredFileSystem::copyForChange(std::string_view path) {
    if (!isLayered(path)) {
        return std::string(path);
    }
    std::string target = makeWritePath(path);
    if (host_.getFileInfo(target)) {
        return target;
    }
    for (const std::string &folder : folders_ | std::views::drop(1)) {
        const std::string source = inFolder(folder, path);
        if (const std::optional<std::string> bytes = host_.readFile(source)) {
            host_.writeFile(target, *bytes);
            if (const std::optional<SFileInfo> info = host_.getFileInfo(source)) {
                host_.setModifiedTime(target, info->modified);
            }
            break;
        }
    }
    return target;
}

// Ignoring case, as the game's lookups do.
std::vector<SFileInfo> CLayeredFileSystem::findFiles(std::string_view pattern) {
    if (!isLayered(pattern)) {
        return host_.findFiles(pattern);
    }
    std::map<std::string, SFileInfo> found;
    for (const std::string &folder : folders_) {
        for (SFileInfo &file : host_.findFiles(inFolder(folder, pattern))) {
            found.try_emplace(lowerCase(file.name), std::move(file));
        }
    }
    std::vector<SFileInfo> files;
    files.reserve(found.size());
    for (auto &[name, file] : found) {
        files.push_back(std::move(file));
    }
    std::ranges::sort(files, {}, &SFileInfo::name);
    return files;
}

std::optional<std::string> CLayeredFileSystem::readFile(std::string_view path) {
    return host_.readFile(findPath(path));
}

bool CLayeredFileSystem::appendFile(std::string_view path, std::string_view text) {
    return host_.appendFile(copyForChange(path), text);
}

bool CLayeredFileSystem::writeFile(std::string_view path, std::string_view text) {
    return host_.writeFile(makeWritePath(path), text);
}

bool CLayeredFileSystem::removeFile(std::string_view path) {
    return host_.removeFile(isLayered(path) ? inFolder(folders_.front(), path) : std::string(path));
}

bool CLayeredFileSystem::removeDirectory(std::string_view path) {
    return host_.removeDirectory(isLayered(path) ? inFolder(folders_.front(), path)
                                                 : std::string(path));
}

std::unique_ptr<IFile> CLayeredFileSystem::openFile(std::string_view path, EFileMode mode) {
    if (mode == EFileMode::Read) {
        return host_.openFile(findPath(path), mode);
    }
    if (mode == EFileMode::Write) {
        return host_.openFile(makeWritePath(path), mode);
    }
    // Appending and updating change the file, so they work on the writable layer's copy.
    return host_.openFile(copyForChange(path), mode);
}

std::optional<std::string> CLayeredFileSystem::getFullPath(std::string_view path) {
    return host_.getFullPath(findPath(path));
}

std::optional<std::string> CLayeredFileSystem::getRealPath(std::string_view path) {
    return host_.getRealPath(findPath(path));
}

std::optional<SFileInfo> CLayeredFileSystem::getFileInfo(std::string_view path) {
    return host_.getFileInfo(findPath(path));
}

bool CLayeredFileSystem::makeDirectory(std::string_view path) {
    return host_.makeDirectory(isLayered(path) ? inFolder(folders_.front(), path)
                                               : std::string(path));
}

std::optional<std::string> CLayeredFileSystem::getCacheFolder(std::string_view title) {
    return host_.getCacheFolder(title);
}

bool CLayeredFileSystem::setModifiedTime(std::string_view path, std::time_t modified) {
    return host_.setModifiedTime(copyForChange(path), modified);
}

bool CLayeredFileSystem::setReadOnly(std::string_view path, bool read_only) {
    return host_.setReadOnly(copyForChange(path), read_only);
}

} // namespace nocturne::platform

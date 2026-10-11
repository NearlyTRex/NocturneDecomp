#include "engine/dosio/dosio.h"

#include "common/error/error.h"
#include "engine/dosio/dosio_functions.h"
#include "engine/dosio/filefinder.h"
#include "engine/dosio/foundfileinfo.h"
#include "platform/file.h"
#include "platform/filesystem.h"

#include <algorithm>
#include <optional>
#include <string>
#include <utility>

namespace nocturne::engine {
namespace {

constexpr std::size_t kMaxHooks = 5;
constexpr std::uint8_t kReadOnlyAttribute = 8;

} // namespace

CDosIo::CDosIo(platform::IFileSystem &file_system) : file_system_(file_system) {}

// nocedit 0x00481710
void CDosIo::addGetFileInfoHook(FileSearchHandlerFunc handler) {
    if (hooks_.size() >= kMaxHooks) {
        common::displayErrorAndQuit("addGetFileInfoHook - too many!");
    }
    hooks_.push_back(std::move(handler));
}

// nocedit 0x00481760
bool CDosIo::findFile(SFoundFileInfo &context) const {
    if (hooks_.empty()) {
        return findFileNormally(context);
    }
    return std::ranges::any_of(
        hooks_, [&context](const FileSearchHandlerFunc &hook) { return hook(context); });
}

// nocedit 0x004817c0
bool CDosIo::findFileNormally(SFoundFileInfo &info) const {
    if (info.found_path.empty()) {
        return false;
    }
    const std::optional<std::string> full_path = file_system_.getFullPath(info.found_path);
    if (!full_path) {
        return false;
    }
    const std::optional<platform::SFileInfo> status = file_system_.getFileInfo(*full_path);
    if (!status) {
        return false;
    }
    info.file_size = static_cast<std::int64_t>(status->size);
    info.file_offset = 0;
    info.timestamp = status->modified;
    info.container_timestamp = status->modified;
    info.target_path = *full_path;
    info.is_archive = false;
    return true;
}

// nocedit 0x00481880
std::int64_t CDosIo::getFileSize(std::string_view directory, std::string_view filename) const {
    SFoundFileInfo info{getRelativeFilePath(directory, filename)};
    return findFile(info) ? info.file_size : -1;
}

// nocedit 0x004818d0
std::time_t CDosIo::getFileTimestamp(std::string_view directory_path,
                                     std::string_view filename) const {
    SFoundFileInfo info{getRelativeFilePath(directory_path, filename)};
    return findFile(info) ? info.timestamp : 0;
}

// nocedit 0x00481910
bool CDosIo::copyFileTimestamp(std::string_view filename, std::time_t modtime) {
    return file_system_.setModifiedTime(filename, modtime);
}

// nocedit 0x00481960
int CDosIo::getFileAttributes(std::string_view directory, std::string_view filename) const {
    CFileFinder finder(file_system_);
    if (!finder.openSearch(getRelativeFilePath(directory, filename))) {
        return -1;
    }
    return finder.getAttributes();
}

// nocedit 0x004819f0
bool CDosIo::setFileAttributes(std::string_view filename, std::uint8_t flags) {
    return file_system_.setReadOnly(filename, (flags & kReadOnlyAttribute) != 0);
}

// reopenFileStream did the same for an iostream; both are this.
// nocedit 0x00481a50
// nocedit 0x00481b50
std::unique_ptr<platform::IFile> CDosIo::getFile(std::string_view directory,
                                                 std::string_view filename,
                                                 platform::EFileMode mode) const {
    SFoundFileInfo info{getRelativeFilePath(directory, filename)};
    if (mode == platform::EFileMode::Write) {
        if (!directory.empty()) {
            file_system_.makeDirectory(directory);
        }
        return file_system_.openFile(info.found_path, mode);
    }
    if (!findFile(info)) {
        return nullptr;
    }
    std::unique_ptr<platform::IFile> file = file_system_.openFile(info.target_path, mode);
    if (file != nullptr && info.file_offset != 0) {
        file->seek(info.file_offset);
    }
    return file;
}

} // namespace nocturne::engine

#pragma once

#include "engine/fwd.h"
#include "platform/fwd.h"

#include <cstdint>
#include <ctime>
#include <functional>
#include <memory>
#include <optional>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::engine {

// Answers a lookup by filling in where the file is; false when it doesn't know the file.
using FileSearchHandlerFunc = std::function<bool(SFoundFileInfo &)>;

// The game's file access: lookups go through the hooks startup registers, the pods' first and
// then the disk, and opens go to whatever a lookup found.
class CDosIo {
public:
    explicit CDosIo(platform::IFileSystem &file_system);

    void addGetFileInfoHook(FileSearchHandlerFunc handler);
    // Asks each hook in turn; with none registered, the disk.
    [[nodiscard]] bool findFile(SFoundFileInfo &context) const;
    [[nodiscard]] bool findFileNormally(SFoundFileInfo &info) const;
    // -1 when the file isn't found.
    [[nodiscard]] std::int64_t getFileSize(std::string_view directory,
                                           std::string_view filename) const;
    // 0 when the file isn't found.
    [[nodiscard]] std::time_t getFileTimestamp(std::string_view directory_path,
                                               std::string_view filename) const;
    bool copyFileTimestamp(std::string_view filename, std::time_t modtime);
    // CFileFinder's attribute bits, or -1 when nothing matches.
    [[nodiscard]] int getFileAttributes(std::string_view directory,
                                        std::string_view filename) const;
    // CFileFinder's read-only bit (8) makes the file read-only; without it, writable.
    bool setFileAttributes(std::string_view filename, std::uint8_t flags);
    // Write mode creates directory and the file in it. Every other mode opens what a lookup
    // finds, positioned at its start: a file in a pod is its pod, at the file's offset.
    [[nodiscard]] std::unique_ptr<platform::IFile>
    getFile(std::string_view directory, std::string_view filename, platform::EFileMode mode) const;
    // The whole file, as its size and an open for reading find it: empty when either fails, and
    // short when the file ends before its size.
    [[nodiscard]] std::optional<std::string> readFile(std::string_view directory,
                                                      std::string_view filename) const;

private:
    platform::IFileSystem &file_system_;
    std::vector<FileSearchHandlerFunc> hooks_;
};

} // namespace nocturne::engine

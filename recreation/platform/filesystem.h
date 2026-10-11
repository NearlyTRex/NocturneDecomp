#pragma once

#include "platform/fwd.h"

#include <cstdint>
#include <ctime>
#include <memory>
#include <optional>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::platform {

struct SFileInfo {
    std::string name;
    std::uint64_t size = 0;
    std::time_t modified = 0;
    bool is_directory = false;
    bool is_hidden = false;
    bool is_read_only = false;
};

// fopen's "r", "w", "a" and "r+".
enum class EFileMode : std::uint8_t { Read, Write, Append, Update };

// Paths are the game's: either separator, and any case, as Windows matched them.
class IFileSystem {
public:
    virtual ~IFileSystem() = default;

    // '*' and '?' match within the last path component, as FindFirstFile does.
    [[nodiscard]] virtual std::vector<SFileInfo> findFiles(std::string_view pattern) = 0;
    // The file's bytes as stored, or nothing when it can't be opened.
    [[nodiscard]] virtual std::optional<std::string> readFile(std::string_view path) = 0;
    // Creates the file when it's missing. False when it can't be written.
    virtual bool appendFile(std::string_view path, std::string_view text) = 0;
    // False when there was nothing to remove or it couldn't be removed.
    virtual bool removeFile(std::string_view path) = 0;
    // Null when the file can't be opened in that mode.
    [[nodiscard]] virtual std::unique_ptr<IFile> openFile(std::string_view path,
                                                          EFileMode mode) = 0;
    // As _fullpath gives it: absolute, whether or not the file exists.
    [[nodiscard]] virtual std::optional<std::string> getFullPath(std::string_view path) = 0;
    // As stat gives it, the name being the last component; nothing when the path doesn't exist.
    [[nodiscard]] virtual std::optional<SFileInfo> getFileInfo(std::string_view path) = 0;
    // False when it doesn't exist afterwards.
    virtual bool makeDirectory(std::string_view path) = 0;
    virtual bool setModifiedTime(std::string_view path, std::time_t modified) = 0;
    virtual bool setReadOnly(std::string_view path, bool read_only) = 0;
};

} // namespace nocturne::platform

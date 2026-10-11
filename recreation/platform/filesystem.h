#pragma once

#include <cstdint>
#include <ctime>
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

class IFileSystem {
public:
    virtual ~IFileSystem() = default;

    // '*' and '?' match within the last path component, as FindFirstFile does.
    [[nodiscard]] virtual std::vector<SFileInfo> findFiles(std::string_view pattern) = 0;
    // The file's bytes as stored, or nothing when it can't be opened. Paths take either separator.
    [[nodiscard]] virtual std::optional<std::string> readFile(std::string_view path) = 0;
    // Creates the file when it's missing. False when it can't be written.
    virtual bool appendFile(std::string_view path, std::string_view text) = 0;
    // False when there was nothing to remove or it couldn't be removed.
    virtual bool removeFile(std::string_view path) = 0;
};

} // namespace nocturne::platform

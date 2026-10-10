#pragma once

#include <cstdint>
#include <ctime>
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
};

} // namespace nocturne::platform

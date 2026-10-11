#pragma once

#include "platform/filesystem.h"

namespace nocturne::platform::sdl {

// Built on std::filesystem. Results are sorted by name, which FindFirstFile only gave on NTFS.
class CSdlFileSystem final : public IFileSystem {
public:
    [[nodiscard]] std::vector<SFileInfo> findFiles(std::string_view pattern) override;
    [[nodiscard]] std::optional<std::string> readFile(std::string_view path) override;
    bool appendFile(std::string_view path, std::string_view text) override;
    bool removeFile(std::string_view path) override;
};

} // namespace nocturne::platform::sdl

#pragma once

#include "platform/filesystem.h"

namespace nocturne::platform::sdl {

// Built on std::filesystem. Results are sorted by name, which FindFirstFile only gave on NTFS.
class CSdlFileSystem final : public IFileSystem {
public:
    [[nodiscard]] std::vector<SFileInfo> findFiles(std::string_view pattern) override;
};

} // namespace nocturne::platform::sdl

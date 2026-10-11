#pragma once

#include "platform/fwd.h"

#include <cstddef>
#include <optional>
#include <string>
#include <string_view>

namespace nocturne::engine {

// The game's own INI reader. It reads the file afresh on every call, as the original does.
class CIni {
public:
    explicit CIni(platform::IFileSystem &file_system);

    // The key's value in section, or default_value when the key is missing. Nothing when the one
    // chosen has buffer_size characters or more, which the caller's buffer couldn't hold.
    [[nodiscard]] std::optional<std::string>
    getProfileString(std::string_view section, std::string_view key, std::string_view default_value,
                     std::size_t buffer_size, std::string_view filename);
    int writeProfileString(char *section, char *key, char *value, char *filename);

private:
    platform::IFileSystem &file_system_;
};

} // namespace nocturne::engine

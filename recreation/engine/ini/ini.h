#pragma once

#include "platform/fwd.h"

#include <cstddef>
#include <optional>
#include <span>
#include <string>
#include <string_view>

namespace nocturne::engine {

// The game's own INI reader and writer. It reads the file afresh on every call, as the original
// does.
class CIni {
public:
    explicit CIni(platform::IFileSystem &file_system);

    // The key's value in section, or default_value when the key is missing. Nothing when the one
    // chosen has buffer_size characters or more, which the caller's buffer couldn't hold.
    [[nodiscard]] std::optional<std::string>
    getProfileString(std::string_view section, std::string_view key, std::string_view default_value,
                     std::size_t buffer_size, std::string_view filename);
    // Replaces the key's line, or adds one under the section's header, adding the header at the
    // end when there is none. The file is left alone when the key already holds value.
    void writeProfileString(std::string_view section, std::string_view key, std::string_view value,
                            std::string_view filename);

private:
    struct SVariableLine {
        std::size_t line_number;
        bool unchanged;
    };

    [[nodiscard]] static std::optional<SVariableLine>
    findLineNumberOfVariable(std::span<const std::string_view> lines, std::string_view section,
                             std::string_view key, std::string_view value);

    platform::IFileSystem &file_system_;
};

} // namespace nocturne::engine

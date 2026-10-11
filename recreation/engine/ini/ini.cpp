#include "engine/ini/ini.h"

#include "common/error/error.h"
#include "platform/filesystem.h"

#include <format>

namespace nocturne::engine {
namespace {

// Past the section's header every line is a candidate: like the original, the search doesn't
// stop at the next header. A line ending CRLF reads as text mode gives it, without the CR.
std::optional<std::string_view> findValue(std::string_view text, std::string_view header,
                                          std::string_view key) {
    bool in_section = false;
    while (!text.empty()) {
        const std::size_t end = text.find('\n');
        std::string_view line = text.substr(0, end);
        text.remove_prefix(end == std::string_view::npos ? text.size() : end + 1);
        if (line.ends_with('\r')) {
            line.remove_suffix(1);
        }
        if (!in_section) {
            in_section = line == header;
            continue;
        }
        const std::size_t equals = line.find('=');
        if (equals != std::string_view::npos && line.substr(0, equals) == key) {
            // The original cut the value's last character as its newline, even when the last
            // line had none.
            return line.substr(equals + 1);
        }
    }
    return std::nullopt;
}

} // namespace

CIni::CIni(platform::IFileSystem &file_system) : file_system_(file_system) {}

// The free getProfileString forwarded to the one CIni instance; both are this.
// nocedit 0x004fb250
// nocedit 0x004fb960
std::optional<std::string> CIni::getProfileString(std::string_view section, std::string_view key,
                                                  std::string_view default_value,
                                                  std::size_t buffer_size,
                                                  std::string_view filename) {
    const std::optional<std::string> text = file_system_.readFile(filename);
    if (!text) {
        common::displayErrorAndQuit("cIni::getProfileString: Unable to open input");
    }
    const std::string_view value =
        findValue(*text, std::format("[{}]", section), key).value_or(default_value);
    if (value.size() >= buffer_size) {
        return std::nullopt;
    }
    return std::string(value);
}

} // namespace nocturne::engine

#include "engine/ini/ini.h"

#include "common/error/error.h"
#include "common/text/textlines.h"
#include "platform/filesystem.h"

#include <algorithm>
#include <format>
#include <iterator>
#include <vector>

namespace nocturne::engine {
namespace {

// Each line ending CRLF, as Windows text mode wrote them.
std::string joinLines(std::span<const std::string_view> lines) {
    std::string text;
    for (const std::string_view line : lines) {
        text.append(line).append("\r\n");
    }
    return text;
}

std::string getHeader(std::string_view section) {
    return std::format("[{}]", section);
}

std::string_view getValue(std::string_view line) {
    return line.substr(line.find('=') + 1);
}

// Past the section's header every line is a candidate: like the original, the search doesn't
// stop at the next header.
std::optional<std::size_t> findKey(std::span<const std::string_view> lines,
                                   std::string_view section, std::string_view key) {
    const auto header = std::ranges::find(lines, getHeader(section));
    if (header == lines.end()) {
        return std::nullopt;
    }
    const auto line = std::find_if(std::next(header), lines.end(), [key](std::string_view text) {
        const std::size_t equals = text.find('=');
        return equals != std::string_view::npos && text.substr(0, equals) == key;
    });
    if (line == lines.end()) {
        return std::nullopt;
    }
    return static_cast<std::size_t>(std::distance(lines.begin(), line));
}

} // namespace

CIni::CIni(platform::IFileSystem &file_system) : file_system_(file_system) {}

// The free getProfileString forwarded to the one CIni instance; both are this. The original
// dropped the last character of a final line with no newline.
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
    const std::vector<std::string_view> lines = common::splitTextLines(*text);
    const std::optional<std::size_t> line = findKey(lines, section, key);
    const std::string_view value = line ? getValue(lines[*line]) : default_value;
    if (value.size() >= buffer_size) {
        return std::nullopt;
    }
    return std::string(value);
}

// The original counted every line but the header, so a key just under a header on the first
// line came back as line 0, which read as missing, and every write added another copy of it.
// nocedit 0x004fb470
std::optional<CIni::SVariableLine>
CIni::findLineNumberOfVariable(std::span<const std::string_view> lines, std::string_view section,
                               std::string_view key, std::string_view value) {
    const std::optional<std::size_t> line = findKey(lines, section, key);
    if (!line) {
        return std::nullopt;
    }
    return SVariableLine{.line_number = *line, .unchanged = getValue(lines[*line]) == value};
}

// The free writeProfileString forwarded to the one CIni instance; both are this. The original
// wrote a copy beside the file and renamed it over, and passed each copied line to fprintf as its
// format.
// nocedit 0x004fb660
// nocedit 0x004fba40
void CIni::writeProfileString(std::string_view section, std::string_view key,
                              std::string_view value, std::string_view filename) {
    const std::optional<std::string> text = file_system_.readFile(filename);
    if (!text) {
        common::displayErrorAndQuit("cIni::writeProfileString: Unable to open input");
    }
    std::vector<std::string_view> lines = common::splitTextLines(*text);
    const std::optional<SVariableLine> variable =
        findLineNumberOfVariable(lines, section, key, value);
    if (variable && variable->unchanged) {
        return;
    }
    const std::string entry = std::format("{}={}", key, value);
    const std::string header = getHeader(section);
    if (variable) {
        lines[variable->line_number] = entry;
    } else if (const auto found = std::ranges::find(lines, header); found != lines.end()) {
        lines.insert(std::next(found), entry);
    } else {
        lines.insert(lines.end(), {header, entry});
    }
    if (!file_system_.writeFile(filename, joinLines(lines))) {
        common::displayErrorAndQuit("cIni::writeProfileString: Unable to open output");
    }
}

} // namespace nocturne::engine

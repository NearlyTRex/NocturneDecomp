#include "common/text/textlines.h"

#include <cstddef>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::common {

std::vector<std::string_view> splitTextLines(std::string_view text) {
    std::vector<std::string_view> lines;
    while (!text.empty()) {
        const std::size_t end = text.find('\n');
        std::string_view line = text.substr(0, end);
        text.remove_prefix(end == std::string_view::npos ? text.size() : end + 1);
        if (line.ends_with('\r')) {
            line.remove_suffix(1);
        }
        lines.push_back(line);
    }
    return lines;
}

std::string toTextMode(std::string_view text) {
    std::string read;
    read.reserve(text.size());
    for (std::size_t i = 0; i < text.size(); ++i) {
        if (text[i] != '\r' || i + 1 == text.size() || text[i + 1] != '\n') {
            read.push_back(text[i]);
        }
    }
    return read;
}

} // namespace nocturne::common

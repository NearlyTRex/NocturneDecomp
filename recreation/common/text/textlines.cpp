#include "common/text/textlines.h"

#include <cstddef>
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

} // namespace nocturne::common

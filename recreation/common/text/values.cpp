#include "common/text/values.h"

#include <cstddef>
#include <string_view>
#include <vector>

namespace nocturne::common {

std::string_view trimSpaces(std::string_view text) {
    constexpr std::string_view kSpaces = " \t";
    const std::size_t first = text.find_first_not_of(kSpaces);
    if (first == std::string_view::npos) {
        return {};
    }
    return text.substr(first, text.find_last_not_of(kSpaces) - first + 1);
}

std::vector<std::string_view> splitValues(std::string_view line) {
    std::vector<std::string_view> values;
    std::size_t start = 0;
    for (std::size_t comma = line.find(','); comma != std::string_view::npos;
         comma = line.find(',', start)) {
        values.push_back(trimSpaces(line.substr(start, comma - start)));
        start = comma + 1;
    }
    values.push_back(trimSpaces(line.substr(start)));
    return values;
}

std::string_view getValue(const std::vector<std::string_view> &values, std::size_t index) {
    return index < values.size() ? values[index] : std::string_view{};
}

} // namespace nocturne::common

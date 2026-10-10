#include "common/text/wildcard.h"

#include <algorithm>
#include <cstddef>

namespace nocturne::common {
namespace {

char foldAscii(char c) {
    return c >= 'A' && c <= 'Z' ? static_cast<char>(c - 'A' + 'a') : c;
}

bool matchesCharacter(char pattern, char name) {
    return pattern == '?' || foldAscii(pattern) == foldAscii(name);
}

} // namespace

SWildcardPath splitWildcardPath(std::string_view path) {
    std::string normalised(path);
    std::ranges::replace(normalised, '\\', '/');
    const std::size_t separator = normalised.rfind('/');
    if (separator == std::string::npos) {
        return {.directory = {}, .pattern = normalised};
    }
    return {.directory = normalised.substr(0, separator),
            .pattern = normalised.substr(separator + 1)};
}

bool matchesWildcard(std::string_view pattern, std::string_view name) {
    // Iterative backtracking: a '*' that took too little gives the name one more character.
    std::size_t p = 0;
    std::size_t n = 0;
    std::size_t star = std::string_view::npos;
    std::size_t retry = 0;
    while (n < name.size()) {
        if (p < pattern.size() && pattern[p] == '*') {
            star = p++;
            retry = n;
        } else if (p < pattern.size() && matchesCharacter(pattern[p], name[n])) {
            ++p;
            ++n;
        } else if (star != std::string_view::npos) {
            p = star + 1;
            n = ++retry;
        } else {
            return false;
        }
    }
    return pattern.find_first_not_of('*', p) == std::string_view::npos;
}

} // namespace nocturne::common

#include "common/text/wildcard.h"

#include "common/text/ascii.h"
#include "common/text/path.h"

#include <cstddef>

namespace nocturne::common {
namespace {

bool matchesCharacter(char pattern, char name, bool case_sensitive) {
    if (pattern == '?') {
        return true;
    }
    return case_sensitive ? pattern == name : foldAscii(pattern) == foldAscii(name);
}

} // namespace

SWildcardPath splitWildcardPath(std::string_view path) {
    const std::string normalised = toPortablePath(path);
    const std::size_t separator = normalised.rfind('/');
    if (separator == std::string::npos) {
        return {.directory = {}, .pattern = normalised};
    }
    return {.directory = normalised.substr(0, separator),
            .pattern = normalised.substr(separator + 1)};
}

// The original's shape/edittool.cpp wildcardStringMatch; the pods and the file finder share it.
// nocedit 0x004a6e20
bool matchesWildcard(std::string_view pattern, std::string_view name, bool case_sensitive) {
    // Iterative backtracking: a '*' that took too little gives the name one more character.
    std::size_t p = 0;
    std::size_t n = 0;
    std::size_t star = std::string_view::npos;
    std::size_t retry = 0;
    while (n < name.size()) {
        if (p < pattern.size() && pattern[p] == '*') {
            star = p++;
            retry = n;
        } else if (p < pattern.size() && matchesCharacter(pattern[p], name[n], case_sensitive)) {
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

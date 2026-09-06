// =============================================================================
// FILE SEARCH — implementation
// =============================================================================
//
// See file_search.h.

#include "core/file_search.h"
#include "core/ascii_case.h"

#include <algorithm>
#include <filesystem>
#include <string>
#include <system_error>
#include <vector>

namespace {

// Wildcard matching without recursion. `star` remembers where the last `*` was
// and `retry` where the name had reached when it was taken, so a `*` that
// swallowed too little can give a character back and carry on. Recursing instead
// costs a frame per `*` and, on a pattern of nothing but stars, as many frames
// as the name is long.
bool matches(const char *pattern, const char *name) {
    const char *star = nullptr;
    const char *retry = nullptr;

    while (*name != '\0') {
        if (*pattern == '?' ||
            nocturne_ascii_lower(*pattern) == nocturne_ascii_lower(*name)) {
            ++pattern;
            ++name;
        } else if (*pattern == '*') {
            star = pattern++;
            retry = name;
        } else if (star != nullptr) {
            // The last `*` took too little. Give it one more character.
            pattern = star + 1;
            name = ++retry;
        } else {
            return false;
        }
    }
    // Trailing stars match nothing, which is still a match.
    while (*pattern == '*') ++pattern;
    return *pattern == '\0';
}

// Splits "art\\*.raw" into "art" and "*.raw". A spec with no separator searches
// the working directory, which is reported as an empty directory so the caller
// can tell the two apart and return bare names.
void split(const std::string &filespec, std::string *directory, std::string *pattern) {
    std::string spec = filespec;
    for (char &c : spec) {
        if (c == '\\') c = '/';
    }
    const size_t separator = spec.rfind('/');
    if (separator == std::string::npos) {
        directory->clear();
        *pattern = spec;
    } else {
        *directory = spec.substr(0, separator);
        *pattern = spec.substr(separator + 1);
    }
}

}  // namespace

bool nocturne_name_matches(const char *pattern, const char *name) {
    if (pattern == nullptr || name == nullptr) return false;
    return matches(pattern, name);
}

std::vector<std::string> nocturne_find_files(const char *filespec) {
    std::vector<std::string> found;
    if (filespec == nullptr) return found;

    std::string directory, pattern;
    split(filespec, &directory, &pattern);

    std::error_code ignored;
    const std::filesystem::path where(directory.empty() ? "." : directory);
    // The non-throwing iterator: a directory that is not there, or cannot be
    // read, means no matches rather than an error to propagate. Both callers
    // report that as their own API's "nothing found".
    std::filesystem::directory_iterator it(where, ignored), end;
    if (ignored) return found;

    for (; it != end; it.increment(ignored)) {
        if (ignored) return found;
        const std::string name = it->path().filename().string();
        if (!matches(pattern.c_str(), name.c_str())) continue;
        found.push_back(directory.empty() ? name : directory + "/" + name);
    }

    std::sort(found.begin(), found.end());
    return found;
}

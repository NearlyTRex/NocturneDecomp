#include "common/text/path.h"

#include "common/text/ascii.h"

#include <algorithm>
#include <cstddef>

namespace nocturne::common {
namespace {

// The entry of directory spelled like name ignoring case, or empty when there is none.
std::string matchIgnoringCase(const std::string &directory, std::string_view name,
                              const SPathLookup &lookup) {
    for (const std::string &entry : lookup.list_directory(directory)) {
        if (equalsIgnoringAsciiCase(entry, name)) {
            return entry;
        }
    }
    return {};
}

} // namespace

std::string toPortablePath(std::string_view path) {
    std::string portable(path);
    std::ranges::replace(portable, '\\', '/');
    return portable;
}

std::string_view pathLeaf(std::string_view path) {
    const std::size_t separator = path.find_last_of("\\/");
    return separator == std::string_view::npos ? path : path.substr(separator + 1);
}

std::string resolvePathIgnoringCase(std::string_view path, const SPathLookup &lookup) {
    std::string portable = toPortablePath(path);
    if (portable.empty() || lookup.exists(portable)) {
        return portable;
    }
    std::string_view rest = portable;
    // A leading "/" or "./" is kept, so the path stays absolute or relative as it was spelled.
    std::string resolved;
    for (const std::string_view prefix : {"/", "./"}) {
        if (rest.starts_with(prefix)) {
            resolved = prefix;
            rest.remove_prefix(prefix.size());
            break;
        }
    }
    while (!rest.empty()) {
        const std::size_t separator = rest.find('/');
        const std::string_view component = rest.substr(0, separator);
        rest.remove_prefix(separator == std::string_view::npos ? rest.size() : separator + 1);
        if (component.empty() || component == ".") {
            continue;
        }
        const std::string tail = rest.empty() ? "" : "/";
        std::string spelled = resolved + std::string(component);
        if (!lookup.exists(spelled)) {
            // What's resolved ends in its separator, except the root, which is one.
            const std::string parent =
                resolved.size() > 1 ? resolved.substr(0, resolved.size() - 1) : resolved;
            const std::string match = matchIgnoringCase(parent, component, lookup);
            if (match.empty()) {
                return spelled + tail + std::string(rest);
            }
            spelled = resolved + match;
        }
        resolved = spelled + tail;
    }
    return resolved;
}

} // namespace nocturne::common

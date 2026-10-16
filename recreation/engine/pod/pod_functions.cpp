#include "engine/pod/pod_functions.h"

#include "common/text/ascii.h"
#include "engine/pod/pod.h"
#include "engine/pod/podfile.h"

#include <algorithm>
#include <memory>

namespace nocturne::engine {

// The tail is compared case-sensitively, as the original did.
// nocedit 0x00550ce0
std::vector<std::string> findFilesByExtension(const CPod &pod, std::string_view extension,
                                              std::size_t max_results,
                                              std::size_t result_string_length) {
    const std::string wanted = common::toUpperAscii(extension);
    const std::vector<std::unique_ptr<CPodFile>> &pods = pod.getPodFiles();
    std::vector<std::string> names;
    for (auto current = pods.begin(); current != pods.end(); ++current) {
        for (const CPodDirectoryEntry &entry : (*current)->getEntries()) {
            if (!entry.name.ends_with(wanted)) {
                continue;
            }
            const bool earlier = std::any_of(pods.begin(), current, [&entry](const auto &other) {
                return other->findFileIndex(entry.name) >= 0;
            });
            if (earlier) {
                continue;
            }
            names.push_back(entry.name.substr(0, result_string_length - 1));
            if (names.size() >= max_results) {
                return names;
            }
        }
    }
    return names;
}

} // namespace nocturne::engine

#include "engine/package/basemanifest.h"

#include "common/error/error.h"
#include "common/text/ascii.h"
#include "common/text/path.h"
#include "engine/package/packagedata.h"
#include "engine/package/podcheck.h"
#include "platform/filesystem.h"

#include <algorithm>
#include <compare>
#include <cstddef>
#include <format>
#include <optional>
#include <ranges>
#include <span>
#include <string>
#include <vector>

namespace nocturne::engine {
namespace {

// The first of the install's PODs with the name, ignoring case, as its path.
std::optional<std::string> findPod(std::span<const std::string> installed, std::string_view name) {
    const auto found = std::ranges::find_if(installed, [name](const std::string &path) {
        return common::equalsIgnoringAsciiCase(common::pathLeaf(path), name);
    });
    if (found == installed.end()) {
        return std::nullopt;
    }
    return *found;
}

// How many of a release's PODs the install has at their shipped size, then how many by name only.
// Games on the engine share POD names, so the size tells them apart; the name alone still
// recognises an install whose PODs were patched.
struct SReleaseMatch {
    std::size_t sized = 0;
    std::size_t named = 0;

    auto operator<=>(const SReleaseMatch &) const = default;
};

SReleaseMatch matchRelease(platform::IFileSystem &file_system,
                           std::span<const std::string> installed, const SRelease &release) {
    SReleaseMatch match;
    for (const SReleaseFile &pod : release.pods) {
        const std::optional<std::string> path = findPod(installed, pod.name);
        if (!path) {
            continue;
        }
        ++match.named;
        const std::optional<platform::SFileInfo> info = file_system.getFileInfo(*path);
        if (info && info->size == pod.size) {
            ++match.sized;
        }
    }
    return match;
}

const SRelease &findBestRelease(platform::IFileSystem &file_system,
                                std::span<const std::string> installed,
                                std::span<const SRelease> releases) {
    if (releases.empty()) {
        common::displayErrorAndQuit("No known release of Nocturne to recognise the install by");
    }
    // The first of the best, so the catalogue's order breaks a tie.
    const SRelease *best = &releases.front();
    SReleaseMatch best_match = matchRelease(file_system, installed, *best);
    for (const SRelease &release : releases.subspan(1)) {
        const SReleaseMatch match = matchRelease(file_system, installed, release);
        if (match > best_match) {
            best = &release;
            best_match = match;
        }
    }
    return *best;
}

SPackagePod describePod(platform::IFileSystem &file_system, const SRelease &release,
                        const SReleaseFile &shipped, std::span<const std::string> installed,
                        std::vector<std::string> &notes) {
    const std::optional<std::string> name = findPod(installed, shipped.name);
    if (!name) {
        notes.push_back(std::format("{} is missing", shipped.name));
        return {.path = shipped.name, .size = {}, .modified = {}, .xxh3 = {}};
    }
    SPackagePod pod = recordPod(file_system, "", *name);
    if (!pod.xxh3) {
        notes.push_back(std::format("{} can't be read", *name));
    } else if (pod.size != shipped.size || pod.xxh3 != shipped.xxh3) {
        notes.push_back(std::format("{} isn't the copy {} shipped", *name, release.name));
    }
    return pod;
}

} // namespace

// The retail build mounts every *.pod by name ignoring case, the first answering a name; a later
// manifest POD answers first, so the order is reversed.
SBaseManifest makeBaseManifest(platform::IFileSystem &file_system,
                               std::span<const std::string> installed,
                               std::span<const SRelease> releases) {
    const SRelease &release = findBestRelease(file_system, installed, releases);
    std::vector<SReleaseFile> shipped = release.pods;
    std::ranges::sort(shipped, [](const SReleaseFile &a, const SReleaseFile &b) {
        return common::compareIgnoringAsciiCase(a.name, b.name) > 0;
    });
    SBaseManifest base{.manifest = {.id = std::string(kBasePackageId),
                                    .name = release.name,
                                    .version = {},
                                    .release = release.id,
                                    .dependencies = {},
                                    .required = {},
                                    .pods = {},
                                    .game = release.content},
                       .notes = {}};
    for (const SReleaseFile &pod : shipped) {
        base.manifest.pods.push_back(describePod(file_system, release, pod, installed, base.notes));
    }
    for (const std::string &required : release.required) {
        base.manifest.required.push_back(findPod(installed, required).value_or(required));
    }
    return base;
}

} // namespace nocturne::engine

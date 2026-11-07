#include "engine/package/basemanifest.h"

#include "common/error/error.h"
#include "common/text/ascii.h"
#include "engine/package/packagedata.h"
#include "engine/package/podcheck.h"
#include "platform/filesystem.h"

#include <algorithm>
#include <cstddef>
#include <format>
#include <optional>
#include <ranges>
#include <span>
#include <string>
#include <vector>

namespace nocturne::engine {
namespace {

// The install's PODs: the name each is spelt with on disk.
std::optional<std::string> findPod(std::span<const platform::SFileInfo> installed,
                                   std::string_view name) {
    const auto found = std::ranges::find_if(installed, [name](const platform::SFileInfo &file) {
        return common::equalsIgnoringAsciiCase(file.name, name);
    });
    if (found == installed.end()) {
        return std::nullopt;
    }
    return found->name;
}

const SRelease &findBestRelease(std::span<const platform::SFileInfo> installed,
                                std::span<const SRelease> releases) {
    if (releases.empty()) {
        common::displayErrorAndQuit("No known release of Nocturne to recognise the install by");
    }
    const auto present = [installed](const SRelease &release) {
        return std::ranges::count_if(release.pods, [installed](const SReleasePod &pod) {
            return findPod(installed, pod.name).has_value();
        });
    };
    // The first of the best, so the catalogue's order breaks a tie.
    const SRelease *best = &releases.front();
    for (const SRelease &release : releases) {
        if (present(release) > present(*best)) {
            best = &release;
        }
    }
    return *best;
}

SPackagePod describePod(platform::IFileSystem &file_system, const SRelease &release,
                        const SReleasePod &shipped, std::span<const platform::SFileInfo> installed,
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
                               std::span<const SRelease> releases) {
    const std::vector<platform::SFileInfo> installed = file_system.findFiles("*.pod");
    const SRelease &release = findBestRelease(installed, releases);
    std::vector<SReleasePod> shipped = release.pods;
    std::ranges::sort(shipped, [](const SReleasePod &a, const SReleasePod &b) {
        return common::compareIgnoringAsciiCase(a.name, b.name) > 0;
    });
    SBaseManifest base{.manifest = {.id = std::string(kBasePackageId),
                                    .name = release.name,
                                    .version = {},
                                    .release = release.id,
                                    .dependencies = {},
                                    .required = release.required,
                                    .pods = {}},
                       .notes = {}};
    for (const SReleasePod &pod : shipped) {
        base.manifest.pods.push_back(describePod(file_system, release, pod, installed, base.notes));
    }
    return base;
}

} // namespace nocturne::engine

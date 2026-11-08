#include "engine/package/loadorder.h"

#include "common/text/path.h"
#include "engine/package/basemanifest.h"
#include "engine/package/packagedata.h"
#include "engine/package/packagediscovery.h"
#include "platform/filesystem.h"

#include <algorithm>
#include <cstddef>
#include <format>
#include <optional>
#include <set>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

namespace nocturne::engine {
namespace {

constexpr std::string_view kBlank = " \t\r";

std::string_view trim(std::string_view text) {
    const std::size_t first = text.find_first_not_of(kBlank);
    if (first == std::string_view::npos) {
        return {};
    }
    return text.substr(first, text.find_last_not_of(kBlank) - first + 1);
}

// An id the file names, and whether it is turned on.
struct SListed {
    std::string id;
    bool on = true;
};

// Each id's first line: "id" turns it on, and "# id", nothing but an id after the '#', off. Any
// other line after a '#' is a comment.
std::vector<SListed> readListed(std::string_view text) {
    std::vector<SListed> listed;
    std::size_t start = 0;
    while (start < text.size()) {
        const std::size_t end = std::min(text.find('\n', start), text.size());
        const std::string_view line = trim(text.substr(start, end - start));
        start = end + 1;
        SListed entry;
        if (line.starts_with('#')) {
            entry = {.id = std::string(trim(line.substr(1))), .on = false};
            if (!std::ranges::all_of(entry.id, isIdCharacter)) {
                continue;
            }
        } else {
            entry = {.id = std::string(trim(line.substr(0, line.find('#')))), .on = true};
        }
        if (!entry.id.empty() && !std::ranges::contains(listed, entry.id, &SListed::id)) {
            listed.push_back(std::move(entry));
        }
    }
    return listed;
}

class COrdering {
public:
    COrdering(platform::IFileSystem &file_system, std::vector<SPackage> discovered)
        : file_system_(file_system), unordered_(std::move(discovered)) {}

    SLoadOrder run() && {
        const std::optional<std::string> file = file_system_.readFile(kLoadOrderName);
        std::string text = file.value_or(defaultText());
        for (const SListed &listed : readListed(text)) {
            take(listed);
        }
        if (addUnlisted(text) || !file) {
            write(text);
        }
        std::vector<SPackage> loaded = loadable();
        dropRepeatedPods(loaded);
        return {.packages = std::move(loaded), .notes = std::move(notes_)};
    }

private:
    // The base game, where there is one, is turned on; the rest are added turned off.
    [[nodiscard]] std::string defaultText() const {
        const bool has_base = std::ranges::contains(
            unordered_, kBasePackageId, [](const SPackage &p) { return p.manifest.id; });
        return has_base ? std::format("{}\n", kBasePackageId) : std::string();
    }

    void take(const SListed &listed) {
        const auto found = std::ranges::find(
            unordered_, listed.id, [](const SPackage &package) { return package.manifest.id; });
        if (found == unordered_.end()) {
            if (listed.on) {
                notes_.push_back(
                    std::format("{} names {}, which isn't installed", kLoadOrderName, listed.id));
            }
            return;
        }
        if (listed.on) {
            ordered_.push_back(std::move(*found));
        }
        unordered_.erase(found);
    }

    // Each package the file doesn't name is added to it turned off.
    bool addUnlisted(std::string &text) {
        if (unordered_.empty()) {
            return false;
        }
        if (!text.empty() && !text.ends_with('\n')) {
            text += '\n';
        }
        for (const SPackage &package : unordered_) {
            text += std::format("# {}\n", package.manifest.id);
            notes_.push_back(
                std::format("{} is added to {} turned off; remove the '#' before it to load it",
                            package.manifest.id, kLoadOrderName));
        }
        return true;
    }

    void write(const std::string &text) {
        if (!file_system_.writeFile(kLoadOrderName, text)) {
            notes_.push_back(std::format(
                "{} couldn't be written, so what it lacks is added again on the next start",
                kLoadOrderName));
        }
    }

    // Each package whose requirements are all loaded before it.
    std::vector<SPackage> loadable() {
        std::vector<SPackage> loaded;
        for (SPackage &package : ordered_) {
            const auto missing =
                std::ranges::find_if(package.manifest.dependencies, [&loaded](const auto &id) {
                    return std::ranges::none_of(
                        loaded, [&id](const SPackage &p) { return p.manifest.id == id; });
                });
            if (missing != package.manifest.dependencies.end()) {
                notes_.push_back(std::format("{} needs {} loaded before it, so it isn't loaded",
                                             package.manifest.id, *missing));
                continue;
            }
            loaded.push_back(std::move(package));
        }
        return loaded;
    }

    // A POD that is, links followed, a file an earlier package loads isn't loaded again; a
    // manifest the game wrote is written without it.
    void dropRepeatedPods(std::vector<SPackage> &loaded) {
        std::set<std::string> claimed;
        for (SPackage &package : loaded) {
            const std::size_t dropped =
                std::erase_if(package.manifest.pods, [&](const SPackagePod &pod) {
                    const std::optional<std::string> real =
                        file_system_.getRealPath(common::joinPath(package.folder, pod.path));
                    return real && !claimed.insert(*real).second;
                });
            if (dropped == 0) {
                continue;
            }
            notes_.push_back(
                std::format("{}: {} of its PODs are an earlier package's files, so they aren't "
                            "loaded again",
                            common::joinPath(package.folder, kManifestName), dropped));
            if (package.written_by_game && !writeManifest(file_system_, package)) {
                notes_.push_back(std::format("{} couldn't be written",
                                             common::joinPath(package.folder, kManifestName)));
            }
        }
    }

    platform::IFileSystem &file_system_;
    std::vector<SPackage> unordered_;
    std::vector<SPackage> ordered_;
    std::vector<std::string> notes_;
};

} // namespace

SLoadOrder orderPackages(platform::IFileSystem &file_system, std::vector<SPackage> discovered) {
    return COrdering(file_system, std::move(discovered)).run();
}

} // namespace nocturne::engine

#include "engine/package/loadorder.h"

#include "engine/package/packagediscovery.h"
#include "platform/filesystem.h"

#include <algorithm>
#include <cstddef>
#include <format>
#include <optional>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

namespace nocturne::engine {
namespace {

constexpr std::string_view kBlank = " \t\r";

// The ids the file lists, each once, without comments or blank lines.
std::vector<std::string> readIds(std::string_view text) {
    std::vector<std::string> ids;
    std::size_t start = 0;
    while (start < text.size()) {
        const std::size_t end = std::min(text.find('\n', start), text.size());
        std::string_view line = text.substr(start, end - start);
        line = line.substr(0, line.find('#'));
        const std::size_t first = line.find_first_not_of(kBlank);
        if (first != std::string_view::npos) {
            const std::string id(line.substr(first, line.find_last_not_of(kBlank) - first + 1));
            if (!std::ranges::contains(ids, id)) {
                ids.push_back(id);
            }
        }
        start = end + 1;
    }
    return ids;
}

class COrdering {
public:
    COrdering(platform::IFileSystem &file_system, std::vector<SPackage> discovered)
        : file_system_(file_system), unordered_(std::move(discovered)) {}

    SLoadOrder run() && {
        ordered_.push_back(std::move(unordered_.front()));
        unordered_.erase(unordered_.begin());
        const std::string text = file_system_.readFile(kLoadOrderName).value_or("");
        for (const std::string &id : readIds(text)) {
            takeListed(id);
        }
        appendUnlisted(text);
        return {.packages = loadable(), .notes = std::move(notes_)};
    }

private:
    void takeListed(const std::string &id) {
        if (id == ordered_.front().manifest.id) {
            return;
        }
        const auto found = std::ranges::find(
            unordered_, id, [](const SPackage &package) { return package.manifest.id; });
        if (found == unordered_.end()) {
            notes_.push_back(std::format("{} names {}, which isn't installed", kLoadOrderName, id));
            return;
        }
        ordered_.push_back(std::move(*found));
        unordered_.erase(found);
    }

    void appendUnlisted(std::string text) {
        if (unordered_.empty()) {
            return;
        }
        if (!text.empty() && !text.ends_with('\n')) {
            text += '\n';
        }
        for (SPackage &package : unordered_) {
            text += package.manifest.id + '\n';
            ordered_.push_back(std::move(package));
        }
        if (!file_system_.writeFile(kLoadOrderName, text)) {
            notes_.push_back(std::format(
                "{} couldn't be written, so the packages it lacks are added again on the next "
                "start",
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

    platform::IFileSystem &file_system_;
    std::vector<SPackage> unordered_;
    std::vector<SPackage> ordered_;
    std::vector<std::string> notes_;
};

} // namespace

// The base game is the discovery's first.
SLoadOrder orderPackages(platform::IFileSystem &file_system, std::vector<SPackage> discovered) {
    return COrdering(file_system, std::move(discovered)).run();
}

} // namespace nocturne::engine

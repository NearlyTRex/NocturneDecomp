#include "engine/package/packagediscovery.h"

#include "common/text/ascii.h"
#include "common/text/path.h"
#include "engine/package/basemanifest.h"
#include "engine/package/packagedata.h"
#include "engine/package/podcheck.h"
#include "platform/filesystem.h"

#include <algorithm>
#include <cstddef>
#include <expected>
#include <format>
#include <optional>
#include <span>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

namespace nocturne::engine {
namespace {

std::vector<platform::SFileInfo> listByName(platform::IFileSystem &file_system,
                                            std::string_view folder, std::string_view pattern) {
    std::vector<platform::SFileInfo> files =
        file_system.findFiles(common::joinPath(folder, pattern));
    std::ranges::sort(files, [](const platform::SFileInfo &a, const platform::SFileInfo &b) {
        return common::compareIgnoringAsciiCase(a.name, b.name) < 0;
    });
    return files;
}

// The folder's own PODs, by name ignoring case.
std::vector<std::string> findPods(platform::IFileSystem &file_system, std::string_view folder) {
    std::vector<std::string> pods;
    for (const platform::SFileInfo &file : listByName(file_system, folder, "*.pod")) {
        if (!file.is_directory) {
            pods.push_back(file.name);
        }
    }
    return pods;
}

// A folder's path as an id: its separators dots, and anything else an id can't hold '_'.
std::string idFromFolder(std::string_view folder) {
    std::string id(folder);
    for (char &c : id) {
        if (c == '/') {
            c = '.';
        } else if (!isIdCharacter(c)) {
            c = '_';
        }
    }
    return id;
}

// A folder's nocturne.toml: nothing when it has none, else the package or what is wrong with it.
std::optional<std::expected<SPackage, std::string>> readPackage(platform::IFileSystem &file_system,
                                                                std::string_view folder) {
    const std::string path = common::joinPath(folder, kManifestName);
    const std::optional<std::string> text = file_system.readFile(path);
    if (!text) {
        return std::nullopt;
    }
    std::expected<SPackageManifest, std::string> manifest = parsePackageManifest(*text);
    if (!manifest) {
        return std::unexpected(std::format("{}: {}", path, manifest.error()));
    }
    return SPackage{.manifest = std::move(*manifest),
                    .folder = std::string(folder),
                    .written_by_game = text->starts_with(kWrittenByGame)};
}

class CDiscovery {
public:
    CDiscovery(platform::IFileSystem &file_system, std::span<const SRelease> releases)
        : file_system_(file_system), releases_(releases) {}

    SPackageDiscovery run() && {
        addBasePackage();
        searchFolder("");
        dropRepeatedIds();
        return std::move(found_);
    }

private:
    // A broken manifest of the base game's own is left as the player wrote it.
    void addBasePackage() {
        std::optional<std::expected<SPackage, std::string>> read = readPackage(file_system_, "");
        if (read && *read) {
            found_.packages.push_back(std::move(**read));
        } else {
            SBaseManifest base = makeBaseManifest(file_system_, releases_);
            found_.notes.insert(found_.notes.end(), base.notes.begin(), base.notes.end());
            SPackage package{
                .manifest = std::move(base.manifest), .folder = {}, .written_by_game = true};
            if (read) {
                found_.notes.push_back(
                    std::format("{}; the install is read as {} and the file is left as it is",
                                read->error(), package.manifest.name));
            } else {
                write(package);
            }
            found_.packages.push_back(std::move(package));
        }
        noteUnlistedPods(found_.packages.front().manifest);
    }

    void noteUnlistedPods(const SPackageManifest &base) {
        for (const std::string &pod : findPods(file_system_, "")) {
            if (std::ranges::none_of(base.pods, [&pod](const SPackagePod &listed) {
                    return common::equalsIgnoringAsciiCase(listed.path, pod);
                })) {
                found_.notes.push_back(
                    std::format("{} isn't in a package's manifest, so it isn't loaded", pod));
            }
        }
    }

    void searchFolder(std::string_view folder) {
        for (const platform::SFileInfo &entry : listByName(file_system_, folder, "*")) {
            // Hidden folders, .git's among them, hold no packages.
            if (!entry.is_directory || entry.is_hidden || entry.name.starts_with('.')) {
                continue;
            }
            const std::string subfolder = common::joinPath(folder, entry.name);
            if (std::optional<std::expected<SPackage, std::string>> read =
                    readPackage(file_system_, subfolder)) {
                addPackage(std::move(*read));
                continue;
            }
            const std::vector<std::string> pods = findPods(file_system_, subfolder);
            if (!pods.empty()) {
                addFolderPackage(subfolder, pods);
            }
            searchFolder(subfolder);
        }
    }

    void addPackage(std::expected<SPackage, std::string> read) {
        if (!read) {
            found_.notes.push_back(std::format("{}; the package isn't loaded", read.error()));
            return;
        }
        found_.packages.push_back(std::move(*read));
    }

    // A folder of PODs is given a manifest naming them, its id its path.
    void addFolderPackage(const std::string &folder, const std::vector<std::string> &pods) {
        SPackage package{.manifest = {.id = idFromFolder(folder),
                                      .name = folder,
                                      .version = {},
                                      .release = {},
                                      .dependencies = {},
                                      .required = {},
                                      .pods = {}},
                         .folder = folder,
                         .written_by_game = true};
        for (const std::string &pod : pods) {
            package.manifest.pods.push_back(recordPod(file_system_, folder, pod));
        }
        write(package);
        found_.packages.push_back(std::move(package));
    }

    void write(const SPackage &package) {
        if (!writeManifest(file_system_, package)) {
            found_.notes.push_back(
                std::format("{} couldn't be written, so it is made again on the next start",
                            common::joinPath(package.folder, kManifestName)));
        }
    }

    // The first folder, by name, keeps an id.
    void dropRepeatedIds() {
        std::vector<SPackage> kept;
        for (SPackage &package : found_.packages) {
            const auto first = std::ranges::find(kept, package.manifest.id,
                                                 [](const SPackage &p) { return p.manifest.id; });
            if (first != kept.end()) {
                found_.notes.push_back(std::format(
                    "{}: the id {} is {}'s too, so it isn't loaded", package.folder,
                    package.manifest.id, first->folder.empty() ? "the base game" : first->folder));
                continue;
            }
            kept.push_back(std::move(package));
        }
        found_.packages = std::move(kept);
    }

    platform::IFileSystem &file_system_;
    std::span<const SRelease> releases_;
    SPackageDiscovery found_;
};

} // namespace

SPackageDiscovery discoverPackages(platform::IFileSystem &file_system,
                                   std::span<const SRelease> releases) {
    return CDiscovery(file_system, releases).run();
}

bool writeManifest(platform::IFileSystem &file_system, const SPackage &package) {
    return file_system.writeFile(
        common::joinPath(package.folder, kManifestName),
        std::format("{}\n{}", kWrittenByGame, formatPackageManifest(package.manifest)));
}

} // namespace nocturne::engine

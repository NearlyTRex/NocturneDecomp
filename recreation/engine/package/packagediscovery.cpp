#include "engine/package/packagediscovery.h"

#include "common/text/ascii.h"
#include "common/text/path.h"
#include "engine/package/archive.h"
#include "engine/package/archivecache.h"
#include "engine/package/basemanifest.h"
#include "engine/package/packagedata.h"
#include "engine/package/podcheck.h"
#include "platform/filesystem.h"

#include <algorithm>
#include <cstddef>
#include <expected>
#include <format>
#include <optional>
#include <set>
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
    // Names the same but for case go in byte order, so the order doesn't depend on the listing's.
    std::ranges::sort(files, [](const platform::SFileInfo &a, const platform::SFileInfo &b) {
        const int order = common::compareIgnoringAsciiCase(a.name, b.name);
        return order != 0 ? order < 0 : a.name < b.name;
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

// The folder a path is in, "" for the install folder.
std::string_view parentOf(std::string_view path) {
    const std::size_t slash = path.rfind('/');
    return slash == std::string_view::npos ? std::string_view() : path.substr(0, slash);
}

// Whether the folder, "" being the install folder, holds the path.
bool isInside(std::string_view folder, std::string_view path) {
    return folder.empty() || path.starts_with(std::format("{}/", folder));
}

// The folder holding every one of the paths.
std::string findCommonFolder(std::span<const std::string> paths) {
    std::string_view common = paths.empty() ? std::string_view() : parentOf(paths.front());
    for (const std::string &path : paths) {
        while (!isInside(common, path)) {
            common = parentOf(common);
        }
    }
    return std::string(common);
}

// The path from the folder when the folder holds it, else as it is.
std::string relativeTo(std::string_view folder, std::string_view path) {
    if (folder.empty() || !isInside(folder, path)) {
        return std::string(path);
    }
    return std::string(path.substr(folder.size() + 1));
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

// A folder of the install, the install folder ("") among them, or of an archive, and its PODs.
// A folder with a manifest is its package's, and the base game's isn't looked for in it; one
// whose manifest is broken is left for its author to mend: no manifest is written over it.
struct SFolder {
    std::string path;
    // Its path in the install, or in the archive it came in; "" for their own folders.
    std::string inner;
    // The archive it came in, "" for the install's.
    std::string archive;
    std::vector<std::string> pods;
    bool has_manifest = false;
    bool has_broken_manifest = false;

    // As the player knows it: by its archive.
    [[nodiscard]] std::string name() const {
        if (archive.empty()) {
            return path;
        }
        return inner.empty() ? archive : common::joinPath(archive, inner);
    }

    // A package made for its PODs is named by its path in the install or its archive; the
    // install folder's PODs are given none, and an archive's own folder's are named by the
    // archive.
    [[nodiscard]] std::optional<std::string> generatedId() const {
        if (!inner.empty()) {
            return idFromFolder(inner);
        }
        if (archive.empty()) {
            return std::nullopt;
        }
        return idFromFolder(common::pathStem(archive));
    }
};

bool isPod(std::string_view name) {
    return common::equalsIgnoringAsciiCase(common::pathExtension(name), ".pod");
}

class CDiscovery {
public:
    CDiscovery(platform::IFileSystem &file_system, std::span<const SRelease> releases,
               EArchiveUnpacking unpacking)
        : file_system_(file_system), releases_(releases), unpacking_(unpacking) {}

    SPackageDiscovery run() && {
        searchFolder("", "", "");
        pruneArchiveCache(file_system_, unpacked_);
        if (!hasPackage(kBasePackageId)) {
            addBasePackage();
        }
        for (const SFolder &folder : folders_) {
            addFolderPackage(folder);
        }
        return std::move(found_);
    }

private:
    // Each folder before those in it, an archive searched where it lies, as the folder it is
    // unpacked in. Hidden files and folders, .git's and the archive cache among them, hold no
    // packages.
    void searchFolder(const std::string &folder, const std::string &inner,
                      const std::string &archive) {
        std::optional<std::expected<SPackage, std::string>> read =
            readPackage(file_system_, folder);
        folders_.push_back({.path = folder,
                            .inner = inner,
                            .archive = archive,
                            .pods = findPods(file_system_, folder),
                            .has_manifest = read && *read,
                            .has_broken_manifest = read && !*read});
        if (read) {
            addManifestPackage(std::move(*read));
        }
        for (const platform::SFileInfo &entry : listByName(file_system_, folder, "*")) {
            if (entry.is_hidden || entry.name.starts_with('.')) {
                continue;
            }
            const std::string path = common::joinPath(folder, entry.name);
            if (entry.is_directory) {
                searchFolder(path, common::joinPath(inner, entry.name), archive);
            } else if (!isPod(entry.name) &&
                       !common::equalsIgnoringAsciiCase(entry.name, kManifestName) &&
                       isArchive(file_system_, path)) {
                searchArchive(path);
            }
        }
    }

    void searchArchive(const std::string &path) {
        if (unpacking_ == EArchiveUnpacking::Later && !findUnpacked(file_system_, path)) {
            // Only one that would be unpacked is left; listing it takes no time.
            if (const std::expected<void, std::string> checked =
                    checkUnpackable(file_system_, path);
                !checked) {
                found_.notes.push_back(std::format("{}, so it isn't loaded", checked.error()));
            } else {
                found_.archives_left.push_back(path);
            }
            return;
        }
        const std::expected<std::string, std::string> unpacked = unpackToCache(file_system_, path);
        if (!unpacked) {
            found_.notes.push_back(std::format("{}, so it isn't loaded", unpacked.error()));
            return;
        }
        unpacked_.push_back(*unpacked);
        searchFolder(*unpacked, "", path);
    }

    void addManifestPackage(std::expected<SPackage, std::string> read) {
        if (!read) {
            found_.notes.push_back(std::format("{}; the package isn't loaded", read.error()));
            return;
        }
        if (isStaleBaseManifest(*read)) {
            dropStaleBaseManifest(*read);
            return;
        }
        if (!isIdTaken(*read)) {
            refreshGameContent(*read);
            claim(*read);
            found_.packages.push_back(std::move(*read));
        }
    }

    // A manifest the game wrote from a release carries the content this build has for its game.
    void refreshGameContent(SPackage &package) {
        if (!package.written_by_game) {
            return;
        }
        const auto release = std::ranges::find(releases_, package.manifest.release, &SRelease::id);
        if (release == releases_.end() || package.manifest.game == release->content) {
            return;
        }
        package.manifest.game = release->content;
        found_.notes.push_back(std::format("{} is written again with {}'s game content",
                                           common::joinPath(package.folder, kManifestName),
                                           release->name));
        write(package);
    }

    // A base manifest the game wrote that has lost a POD it needs.
    [[nodiscard]] bool isStaleBaseManifest(const SPackage &package) {
        return package.manifest.id == kBasePackageId && package.written_by_game &&
               !std::ranges::all_of(package.manifest.required, [&](const std::string &pod) {
                   return file_system_.getFileInfo(common::joinPath(package.folder, pod))
                       .has_value();
               });
    }

    // Removed before it takes the base game's id, so another manifest may have it, or one is
    // written again from where the PODs are now; its folder is then searched as any other.
    void dropStaleBaseManifest(const SPackage &package) {
        found_.notes.push_back(std::format("{} has lost a POD it needs, so it is written again",
                                           common::joinPath(package.folder, kManifestName)));
        static_cast<void>(file_system_.removeFile(common::joinPath(package.folder, kManifestName)));
        folders_.back().has_manifest = false;
    }

    // In the folder holding the release's PODs, from the PODs no manifest has; not written
    // without the PODs the release needs.
    void addBasePackage() {
        std::vector<std::string> unlisted;
        for (const SFolder &folder : folders_) {
            if (folder.has_manifest) {
                continue;
            }
            for (const std::string &pod : folder.pods) {
                if (const std::string path = common::joinPath(folder.path, pod); !isClaimed(path)) {
                    unlisted.push_back(path);
                }
            }
        }
        SBaseManifest base = makeBaseManifest(file_system_, unlisted, releases_);
        if (!std::ranges::all_of(base.manifest.required, [&](const std::string &pod) {
                return std::ranges::contains(unlisted, pod);
            })) {
            found_.notes.push_back(std::format(
                "{}'s PODs weren't found, so the base game has no manifest", base.manifest.name));
            return;
        }
        found_.notes.insert(found_.notes.end(), base.notes.begin(), base.notes.end());
        std::vector<std::string> present;
        for (const SPackagePod &pod : base.manifest.pods) {
            if (pod.xxh3) {
                present.push_back(pod.path);
            }
        }
        SPackage package{.manifest = std::move(base.manifest),
                         .folder = findCommonFolder(present),
                         .written_by_game = true};
        for (SPackagePod &pod : package.manifest.pods) {
            pod.path = relativeTo(package.folder, pod.path);
        }
        for (std::string &pod : package.manifest.required) {
            pod = relativeTo(package.folder, pod);
        }
        SFolder &folder = *std::ranges::find(folders_, package.folder, &SFolder::path);
        if (folder.has_broken_manifest) {
            found_.notes.push_back(std::format("the install is read as {} and {} is left as it is",
                                               package.manifest.name,
                                               common::joinPath(package.folder, kManifestName)));
        } else {
            write(package);
            folder.has_manifest = true;
        }
        claim(package);
        found_.packages.insert(found_.packages.begin(), std::move(package));
    }

    // A subfolder's PODs that no manifest has are given one naming them, its id its path; those
    // of the install folder or of a folder with a manifest are only noted.
    void addFolderPackage(const SFolder &folder) {
        std::vector<std::string> unlisted;
        for (const std::string &pod : folder.pods) {
            if (!isClaimed(common::joinPath(folder.path, pod))) {
                unlisted.push_back(pod);
            }
        }
        if (unlisted.empty()) {
            return;
        }
        const std::optional<std::string> id = folder.generatedId();
        if (!id || folder.has_manifest || folder.has_broken_manifest) {
            for (const std::string &pod : unlisted) {
                found_.notes.push_back(
                    std::format("{} isn't in a package's manifest, so it isn't loaded",
                                common::joinPath(folder.name(), pod)));
            }
            return;
        }
        SPackage package{.manifest = {.id = *id,
                                      .name = folder.name(),
                                      .version = {},
                                      .release = {},
                                      .dependencies = {},
                                      .required = {},
                                      .pods = {},
                                      .game = {}},
                         .folder = folder.path,
                         .written_by_game = true};
        for (const std::string &pod : unlisted) {
            package.manifest.pods.push_back(recordPod(file_system_, folder.path, pod));
        }
        if (isIdTaken(package)) {
            return;
        }
        write(package);
        claim(package);
        found_.packages.push_back(std::move(package));
    }

    void claim(const SPackage &package) {
        for (const SPackagePod &pod : package.manifest.pods) {
            if (const std::optional<std::string> real =
                    file_system_.getRealPath(common::joinPath(package.folder, pod.path))) {
                claimed_.insert(*real);
            }
        }
    }

    // A link to a file a manifest has is that file.
    [[nodiscard]] bool isClaimed(const std::string &path) {
        const std::optional<std::string> real = file_system_.getRealPath(path);
        return real && claimed_.contains(*real);
    }

    [[nodiscard]] bool hasPackage(std::string_view id) const {
        return std::ranges::contains(found_.packages, id,
                                     [](const SPackage &p) { return p.manifest.id; });
    }

    // The first folder, by name, keeps an id.
    [[nodiscard]] bool isIdTaken(const SPackage &package) {
        const auto first = std::ranges::find(found_.packages, package.manifest.id,
                                             [](const SPackage &p) { return p.manifest.id; });
        if (first == found_.packages.end()) {
            return false;
        }
        found_.notes.push_back(std::format("{}: the id {} is {}'s too, so it isn't loaded",
                                           common::joinPath(package.folder, kManifestName),
                                           package.manifest.id,
                                           common::joinPath(first->folder, kManifestName)));
        return true;
    }

    void write(const SPackage &package) {
        if (!writeManifest(file_system_, package)) {
            found_.notes.push_back(
                std::format("{} couldn't be written, so it is made again on the next start",
                            common::joinPath(package.folder, kManifestName)));
        }
    }

    platform::IFileSystem &file_system_;
    std::span<const SRelease> releases_;
    EArchiveUnpacking unpacking_;
    std::vector<SFolder> folders_;
    // The cache folders of the archives found.
    std::vector<std::string> unpacked_;
    // The real paths of the PODs the manifests found so far list.
    std::set<std::string> claimed_;
    SPackageDiscovery found_;
};

} // namespace

SPackageDiscovery discoverPackages(platform::IFileSystem &file_system,
                                   std::span<const SRelease> releases,
                                   EArchiveUnpacking unpacking) {
    return CDiscovery(file_system, releases, unpacking).run();
}

bool writeManifest(platform::IFileSystem &file_system, const SPackage &package) {
    return file_system.writeFile(
        common::joinPath(package.folder, kManifestName),
        std::format("{}\n{}", kWrittenByGame, formatPackageManifest(package.manifest)));
}

} // namespace nocturne::engine

#include "core/podmain/demonpod.h"

#include "common/error/error.h"
#include "common/text/ascii.h"
#include "common/text/path.h"
#include "engine/dosio/dosio.h"
#include "engine/dosio/foundfileinfo.h"
#include "engine/package/loadorder.h"
#include "engine/package/packagediscovery.h"
#include "engine/package/podcheck.h"
#include "engine/pod/podfile.h"
#include "platform/file.h"
#include "platform/filesystem.h"
#include "platform/log.h"

#include <algorithm>
#include <expected>
#include <format>
#include <memory>
#include <ranges>
#include <span>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

namespace nocturne::core {
namespace {

using engine::EPodState;

bool isPresent(EPodState state) {
    return state != EPodState::Missing && state != EPodState::Unreadable;
}

// A POD that isn't there to be loaded.
std::string_view describeAbsence(EPodState state) {
    return state == EPodState::Missing ? "is missing" : "can't be read";
}

std::string joinNotes(std::span<const std::string> notes) {
    std::string joined;
    for (const std::string &note : notes) {
        joined += (joined.empty() ? "" : "; ") + note;
    }
    return joined;
}

} // namespace

// staticInit built the global instance and registered its destructor; its owner constructs it now.
// nocedit 0x00551990
// nocedit 0x00551b00
CDemonPod::CDemonPod(platform::IFileSystem &file_system, const engine::CDosIo &dosio,
                     std::span<const engine::SRelease> releases, platform::ILog &log)
    : CPod(file_system, dosio), dosio_(dosio), releases_(releases), log_(log) {}

// nocedit 0x00551b20
CDemonPod::~CDemonPod() = default;

// The original mounted pod.ini's list in its order, or else every *.pod in the install folder;
// the packages do both jobs, each manifest listing its PODs and loadorder.txt choosing and
// ordering the packages. The latest loaded is mounted first, so a search finds its PODs first.
// nocedit 0x005519c0
void CDemonPod::load() {
    engine::SPackageDiscovery found = engine::discoverPackages(getFileSystem(), releases_);
    engine::SLoadOrder order = engine::orderPackages(getFileSystem(), std::move(found.packages));
    for (const std::string &note : found.notes) {
        report(note);
    }
    for (const std::string &note : order.notes) {
        report(note);
    }
    left_out_.clear();
    for (engine::SPackage &package : order.packages | std::views::reverse) {
        loadPackage(package);
    }
    mounted_count_ = getPodFiles().size();
    if (packages_.empty()) {
        // They were tried latest first.
        std::ranges::reverse(left_out_);
        common::displayErrorAndQuit(
            left_out_.empty()
                ? std::format("{} turns on no package to load", engine::kLoadOrderName)
                : std::format("Nothing could be loaded: {}", joinNotes(left_out_)));
    }
}

// A manifest the game wrote takes a POD's new time once its hash shows it unchanged.
void CDemonPod::loadPackage(engine::SPackage &package) {
    const std::vector<engine::SPodCheck> checks =
        engine::checkPackagePods(getFileSystem(), package.folder, package.manifest);
    if (package.written_by_game &&
        std::ranges::contains(checks, EPodState::Rehashed, &engine::SPodCheck::state) &&
        !engine::writeManifest(getFileSystem(), package)) {
        report(std::format("{} couldn't be written",
                           common::joinPath(package.folder, engine::kManifestName)));
    }
    for (const engine::SPodCheck &check : checks) {
        const std::string path = common::joinPath(package.folder, check.path);
        if (!isPresent(check.state)) {
            report(std::format("{} {}, so it isn't loaded", path, describeAbsence(check.state)));
        } else if (check.state == EPodState::Changed) {
            report(std::format("{} has changed since its manifest was written", path));
        }
    }
    if (!hasRequiredPods(package, checks)) {
        return;
    }
    SLoadedPackage loaded{.folder = package.folder, .pods = {}, .mounted = {}};
    mountPods(package, checks, loaded);
    packages_.push_back(std::move(loaded));
}

// Without one, the package isn't loaded.
bool CDemonPod::hasRequiredPods(const engine::SPackage &package,
                                std::span<const engine::SPodCheck> checks) {
    for (const std::string &required : package.manifest.required) {
        const auto check = std::ranges::find_if(checks, [&required](const engine::SPodCheck &c) {
            return common::equalsIgnoringAsciiCase(c.path, required);
        });
        const std::string path = common::joinPath(package.folder, required);
        const EPodState state = check == checks.end() ? EPodState::Missing : check->state;
        const std::string_view why = isPresent(state) ? whyNotAPod(path) : describeAbsence(state);
        if (why.empty()) {
            continue;
        }
        left_out_.push_back(
            std::format("{} can't do without {}, which {}", package.manifest.id, path, why));
        report(std::format("{}, so it isn't loaded", left_out_.back()));
        return false;
    }
    return true;
}

// The manifest's last answers first, so it is mounted first.
void CDemonPod::mountPods(const engine::SPackage &package,
                          std::span<const engine::SPodCheck> checks, SLoadedPackage &loaded) {
    for (std::size_t i = checks.size(); i-- > 0;) {
        if (!isPresent(checks[i].state)) {
            continue;
        }
        const std::string path = common::joinPath(package.folder, checks[i].path);
        const std::expected<const engine::CPodFile *, std::string> pod = mountIfValid(path);
        if (!pod) {
            const std::string_view why = whyNotAPod(path);
            report(why.empty() ? std::format("{} isn't loaded: {}", path, pod.error())
                               : std::format("{} {}, so it isn't loaded", path, why));
            continue;
        }
        loaded.pods.push_back((*pod)->getFilename());
        loaded.mounted.push_back(*pod);
    }
}

std::string_view CDemonPod::whyNotAPod(const std::string &path) {
    if (getFileSystem().openFile(path, platform::EFileMode::Read) == nullptr) {
        return describeAbsence(EPodState::Unreadable);
    }
    engine::CPodFile pod(getFileSystem(), dosio_);
    return pod.mountFromFile(path) ? std::string_view() : "isn't a POD";
}

// The latest package first: its PODs, then its folder's loose files.
bool CDemonPod::findFile(engine::SFoundFileInfo &found_file_info) {
    if (getPodFiles().size() != mounted_count_) {
        refreshMounted();
    }
    for (const SLoadedPackage &package : packages_) {
        for (const engine::CPodFile *pod : package.mounted) {
            if (const int index = pod->findFileIndex(found_file_info.found_path); index >= 0) {
                pod->populateFileInfo(index, found_file_info);
                return true;
            }
        }
        if (!package.folder.empty() && findLooseFile(package, found_file_info)) {
            return true;
        }
    }
    return false;
}

bool CDemonPod::findLooseFile(const SLoadedPackage &package,
                              engine::SFoundFileInfo &found_file_info) const {
    std::string asked = std::move(found_file_info.found_path);
    found_file_info.found_path = common::joinPath(package.folder, asked);
    const bool found = dosio_.findFileNormally(found_file_info);
    found_file_info.found_path = std::move(asked);
    return found;
}

void CDemonPod::dismount(std::string_view filename) {
    CPod::dismount(filename);
    refreshMounted();
}

void CDemonPod::refreshMounted() {
    const std::vector<std::unique_ptr<engine::CPodFile>> &pods = getPodFiles();
    for (SLoadedPackage &package : packages_) {
        package.mounted.clear();
        for (const std::string &name : package.pods) {
            const auto pod = std::ranges::find(
                pods, name,
                [](const std::unique_ptr<engine::CPodFile> &mounted) -> const std::string & {
                    return mounted->getFilename();
                });
            if (pod != pods.end()) {
                package.mounted.push_back(pod->get());
            }
        }
    }
    mounted_count_ = pods.size();
}

void CDemonPod::report(std::string_view note) {
    log_.print(platform::ELogSubsystem::FileIo, "{}", note);
}

} // namespace nocturne::core

#include "core/podmain/demonpod.h"

#include "common/error/error.h"
#include "common/text/ascii.h"
#include "common/text/path.h"
#include "engine/dosio/dosio.h"
#include "engine/dosio/foundfileinfo.h"
#include "engine/package/gamecontent.h"
#include "engine/package/loadorder.h"
#include "engine/package/packagediscovery.h"
#include "engine/package/podcheck.h"
#include "engine/pod/podfile.h"
#include "platform/file.h"
#include "platform/filesystem.h"
#include "platform/log.h"

#include <algorithm>
#include <array>
#include <chrono>
#include <ctime>
#include <expected>
#include <format>
#include <memory>
#include <optional>
#include <ranges>
#include <span>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

namespace nocturne::core {
namespace {

using engine::EPodAuditOperation;
using engine::EPodState;

// By EPodAuditOperation, which getAuditRecord holds to these three.
constexpr std::array<std::string_view, 3> kAuditOperationVerbs = {"added", "removed", "changed"};

std::string_view describeAuditOperation(EPodAuditOperation operation) {
    return kAuditOperationVerbs.at(std::to_underlying(operation));
}

// In UTC, so a log reads the same wherever it was written.
std::string formatAuditTime(std::time_t time) {
    return std::format("{:%Y-%m-%d %H:%M:%S}",
                       std::chrono::sys_seconds(std::chrono::seconds(time)));
}

std::string describeAuditRecord(std::string_view pod, const engine::CPodAuditRecord &record) {
    return std::format("{}: {} {} {} at {}, {} to {} bytes", pod, record.user_name,
                       describeAuditOperation(record.operation_type), record.filename,
                       formatAuditTime(record.timestamp), record.original_file_size,
                       record.new_file_size);
}

bool isPresent(EPodState state) {
    return state != EPodState::Missing && state != EPodState::Unreadable;
}

// A POD that isn't there to be loaded.
std::string_view describeAbsence(EPodState state) {
    return state == EPodState::Missing ? "is missing" : "can't be read";
}

// The game the load runs: its game package, or without one the first package, which every other
// is loaded over; the install's when nothing is turned on.
engine::SChosenGame findGame(std::span<const engine::SPackage> packages) {
    const auto game = std::ranges::find_if(packages, &engine::SPackage::isGame);
    if (game != packages.end()) {
        return {.folder = game->folder, .id = game->manifest.id};
    }
    if (!packages.empty()) {
        return {.folder = packages.front().folder, .id = packages.front().manifest.id};
    }
    return {};
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
    loadPackages(engine::EArchiveUnpacking::Later);
}

bool CDemonPod::hasArchivesToUnpack() const {
    return !archives_left_.empty();
}

// What the first load mounted is mounted again in the new order.
void CDemonPod::unpackArchives() {
    if (archives_left_.empty()) {
        return;
    }
    cleanup();
    packages_.clear();
    loadPackages(engine::EArchiveUnpacking::Now);
}

// With archives left, this load only brings up the loading screen, so what it would say or find
// fatal waits for the load after them.
void CDemonPod::loadPackages(engine::EArchiveUnpacking unpacking) {
    engine::SPackageDiscovery found =
        engine::discoverPackages(getFileSystem(), releases_, unpacking);
    archives_left_ = std::move(found.archives_left);
    reporting_ = archives_left_.empty();
    engine::SLoadOrder order = engine::orderPackages(getFileSystem(), std::move(found.packages));
    for (const std::string &note : found.notes) {
        report(note);
    }
    for (const std::string &note : order.notes) {
        report(note);
    }
    left_out_.clear();
    engine::SChosenGame game = findGame(order.packages);
    game_folder_ = game.folder;
    chooseGame(game);
    std::vector<const engine::SGameContent *> content;
    for (engine::SPackage &package : order.packages | std::views::reverse) {
        if (loadPackage(package)) {
            content.push_back(&package.manifest.game);
        }
    }
    mounted_count_ = getPodFiles().size();
    std::ranges::reverse(content);
    engine::SMergedGameContent merged = engine::mergeGameContent(content);
    for (const std::string &note : merged.notes) {
        report(note);
    }
    game_content_ = std::move(merged.content);
    if (packages_.empty() && reporting_) {
        // They were tried latest first.
        std::ranges::reverse(left_out_);
        common::displayErrorAndQuit(
            left_out_.empty()
                ? std::format("{} turns on no package to load", engine::kLoadOrderName)
                : std::format("Nothing could be loaded: {}", joinNotes(left_out_)));
    }
}

const engine::SGameContent &CDemonPod::getGameContent() const {
    return game_content_;
}

// A manifest the game wrote takes a POD's new time once its hash shows it unchanged.
bool CDemonPod::loadPackage(engine::SPackage &package) {
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
        return false;
    }
    SLoadedPackage loaded{.folder = package.folder, .pods = {}, .mounted = {}};
    mountPods(package, checks, loaded);
    packages_.push_back(std::move(loaded));
    return true;
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
        if (getSettings().log_audit_trail) {
            logAuditTrail(**pod);
        }
    }
}

// In the order the builder appended the records.
void CDemonPod::logAuditTrail(const engine::CPodFile &pod) {
    for (int i = 0; i < pod.getAuditCount(); ++i) {
        const std::optional<engine::CPodAuditRecord> record = pod.getAuditRecord(i);
        if (!record) {
            report(std::format("{}'s audit trail ends at record {} of {}", pod.getFilename(), i,
                               pod.getAuditCount()));
            return;
        }
        report(describeAuditRecord(pod.getFilename(), *record));
    }
}

std::string_view CDemonPod::whyNotAPod(const std::string &path) {
    if (getFileSystem().openFile(path, platform::EFileMode::Read) == nullptr) {
        return describeAbsence(EPodState::Unreadable);
    }
    engine::CPodFile pod(getFileSystem(), dosio_);
    return pod.mountFromFile(path) ? std::string_view() : "isn't a POD";
}

// The latest package first: its PODs, then its folder's loose files. The game's own loose files
// are the disk's, which the lookup after this one finds, the user's copies first.
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
        if (!package.folder.empty() && package.folder != game_folder_ &&
            findLooseFile(package, found_file_info)) {
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
    if (!reporting_) {
        return;
    }
    log_.print(platform::ELogSubsystem::FileIo, "{}", note);
}

} // namespace nocturne::core

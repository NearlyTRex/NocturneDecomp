#include "common/error/error.h"
#include "common/text/ascii.h"
#include "common/text/textscanner.h"
#include "core/actor/actor.h"
#include "core/actor/actor_functions.h"
#include "core/actor/actorarchive.h"
#include "core/actor/demonactor.h"
#include "core/actor/demonactortype.h"
#include "core/actor/notported.h"
#include "core/hero/heroplaceholder.h"
#include "core/loadingscreen.h"
#include "core/mission/demonmission.h"
#include "engine/dosio/dosio.h"
#include "engine/texture/texture.h"
#include "shape/edittool/editortools.h"
#include "shape/edittool/picklist.h"
#include "support/newmsg/newmsg.h"

#include <algorithm>
#include <cstddef>
#include <format>
#include <memory>
#include <optional>
#include <string>
#include <string_view>
#include <utility>

namespace nocturne::core {
namespace {

using common::CTextScanner;

constexpr int kNewestVersion = 7;
constexpr int kOldestActorFormat = 4;
// The versions that first held the mission's name, its classes' versions, and carried items.
constexpr int kNamedVersion = 2;
constexpr int kTypedVersion = 3;
constexpr int kInventoryVersion = 6;
constexpr int kMaxActors = 2000;
// What a class's name reads as when the file has none where one should be.
constexpr std::string_view kMissingClassName = "corrupt!";
constexpr std::string_view kPlaceholderPrompt =
    "Mission has no hero placeholders.\n\nSelect a hero to convert into a hero placeholder, or\n"
    "press ESC to leave mission as is.\n\n(You will not be able to play the mission without a "
    "hero placeholder.)";

// "%d\n": the number, or the fallback when there is none.
int readNumber(CTextScanner &scanner, int fallback) {
    const std::optional<int> number = scanner.scanInteger();
    if (!number) {
        return fallback;
    }
    scanner.skipWhitespace();
    return *number;
}

// "%s\n".
std::string_view readWord(CTextScanner &scanner) {
    const std::string_view word = scanner.scanWord();
    scanner.skipWhitespace();
    return word;
}

// "%s \"%[^\"]\"\n": a class and the actor's name, each empty when it can't be read.
std::pair<std::string, std::string> readActorEntry(CTextScanner &scanner) {
    const std::string class_name(scanner.scanWord());
    if (class_name.empty()) {
        return {};
    }
    scanner.skipWhitespace();
    if (!scanner.expect('"')) {
        return {class_name, ""};
    }
    const std::optional<std::string_view> name = scanner.scanUntil('"');
    if (!name) {
        return {class_name, ""};
    }
    scanner.expect('"');
    scanner.skipWhitespace();
    return {class_name, std::string(*name)};
}

[[noreturn]] void quitReadingActor(const CDemonActor &owner, std::string_view description) {
    common::displayErrorAndQuit(
        std::format("Error reading actor pointer.\nOwner: {}\nDescription: {}\n",
                    owner.getActorName(), description));
}

} // namespace

// The original read the file as text, turning CR LF into LF; the scanner reads either.
// nocedit 0x00522d90
void CDemonMission::load(std::string_view mission_filename, bool keep_assets) {
    const std::optional<std::string> text = owners_.dosio.readFile("world", mission_filename);
    if (!text) {
        common::displayErrorAndQuit("CDemonMission::load - Unable to open file");
    }
    owners_.loading_screen.update(owners_.messages.getLocalizedString("Loading mission"), false);
    CTextScanner scanner(*text);
    readMissionFile(scanner, keep_assets);
    ensureHeroPlaceholder();
}

// Each section starts after a line of its own; a number that can't be read leaves what was
// there, which for a count is none. nocedit could also skip the blood, an editor setting.
// The current set is forgotten after; the editor's actor import kept it.
// The carried items come after the actors, each taken off the list as a hero's inventory claims
// it, so any left over are fatal. The original's check that none was left unclaimed after that
// could never fail.
// deferred: recording each actor in the table save files refer to actors by, with saveActor
// deferred: reading the blood pools and splats the file ends with, with CGore's renderers
// nocedit 0x00522eb0
void CDemonMission::readMissionFile(CTextScanner &scanner, bool keep_assets) {
    clearMissionData();
    if (!keep_assets) {
        freeAllAssets();
    }
    scanner.skipLine();
    int actor_format = 0;
    if (const std::optional<int> version = scanner.scanInteger()) {
        mission_version_num_ = *version;
        if (scanner.expect(',')) {
            actor_format = readNumber(scanner, actor_format);
        }
    }
    if (mission_version_num_ > kNewestVersion) {
        common::displayErrorAndQuit(std::format(
            "Invalid mission version number: {}, current version is {}.  (You probably have an "
            "old .exe)",
            mission_version_num_, kNewestVersion));
    }
    if (actor_format < kOldestActorFormat) {
        common::displayErrorAndQuit(std::format(
            "This mission uses actor format version {}, which we don't support anymore!",
            actor_format));
    }
    if (mission_version_num_ < kNamedVersion) {
        common::displayErrorAndQuit("No name in mission");
    }
    scanner.skipLine();
    mission_name_ = readWord(scanner);
    scanner.skipLine();
    const int set_count = readNumber(scanner, 0);
    for (int i = 0; i < set_count; ++i) {
        set_names_.emplace_back(readWord(scanner));
    }
    owners_.actor.resetSavedVersions();
    if (mission_version_num_ >= kTypedVersion) {
        readActorTypes(scanner);
    }
    scanner.skipLine();
    const int actor_count = readNumber(scanner, 0);
    int carried_count = 0;
    if (mission_version_num_ >= kInventoryVersion) {
        scanner.skipLine();
        carried_count = readNumber(scanner, 0);
    }
    scanner.skipLine();
    for (int i = 0; i < actor_count + carried_count; ++i) {
        auto [class_name, actor_name] = readActorEntry(scanner);
        std::unique_ptr<CDemonActor> actor = owners_.actor.createActorByName(class_name);
        actor->setActorName(actor_name);
        addActorToList(std::move(actor));
        if (i >= kMaxActors) {
            common::displayErrorAndQuit("Too many actors");
        }
    }
    scanner.skipLine();
    if (mission_version_num_ >= kInventoryVersion) {
        carried_start_ = static_cast<std::size_t>(std::max(actor_count, 0));
    }
    for (int i = 0; i < actor_count; ++i) {
        if (static_cast<std::size_t>(i) >= actors_.size()) {
            common::displayErrorAndQuit("CDemonMission::load - actor list count mismatch #1!");
        }
        actors_[static_cast<std::size_t>(i)]->load(
            scanner,
            {.actor_classes = owners_.actor, .actors = *this, .crt_random = owners_.crt_random});
    }
    carried_start_.reset();
    if (actors_.size() > static_cast<std::size_t>(std::max(actor_count, 0))) {
        common::displayErrorAndQuit("CDemonMission::load - actor list count mismatch #3!");
    }
    current_set_index_ = -1;
}

// deferred: reading the hex number save files write a script's marker for no victim as, and the
//   error for a reference that is neither, with save games
// nocedit 0x00523990
CDemonActor *CDemonMission::loadActor(CTextScanner &scanner, const CDemonActor &owner,
                                      std::string_view description) const {
    const std::string_view described = description.empty() ? "(unknown)" : description;
    scanner.skipWhitespace();
    if (!scanner.expect('"')) {
        quitNotPorted("CDemonMission", "loadActor's actor saved as a number");
    }
    const std::optional<std::string_view> name = scanner.scanUntil('"');
    if (!name) {
        quitReadingActor(owner, described);
    }
    CDemonActor *actor = nullptr;
    if (!common::equalsIgnoringAsciiCase(*name, "(none)")) {
        actor = findActorByName(*name);
        if (actor == nullptr) {
            owners_.editor_tools.showError(std::format(
                "WARNING.  Can't find actor '{}' in {} property {}.  (Please note this in a bug "
                "report...)",
                *name, owner.getActorName(), described));
        }
    }
    if (!scanner.expect('"')) {
        quitReadingActor(owner, described);
    }
    static_cast<void>(scanner.scanUntil('\n'));
    if (!scanner.expect('\n')) {
        quitReadingActor(owner, described);
    }
    return actor;
}

// Each claimed comes off the list, which leaves the next where the first was.
// nocedit 0x00523520
std::unique_ptr<CDemonActor> CDemonMission::takeCarriedActor(std::string_view name) {
    if (!carried_start_) {
        return nullptr;
    }
    if (*carried_start_ >= actors_.size()) {
        common::displayErrorAndQuit("CDemonMission::getNextLoadedInventoryActor - no more!");
    }
    const CDemonActor &next = *actors_[*carried_start_];
    if (!common::equalsIgnoringAsciiCase(next.getActorName(), name)) {
        common::displayErrorAndQuit(
            std::format("CDemonMission::getNextLoadedInventoryActor - requested {}, but next "
                        "actor was {}!",
                        name, next.getActorName()));
    }
    return removeActorFromList(next);
}

// A class's saved version newer than the game's own is fatal.
void CDemonMission::readActorTypes(CTextScanner &scanner) {
    scanner.skipLine();
    const int type_count = readNumber(scanner, 0);
    // The original kept the last version read when a line had none.
    int saved_version = 0;
    for (int i = 0; i < type_count; ++i) {
        std::string_view class_name = scanner.scanWord();
        if (class_name.empty()) {
            class_name = kMissingClassName;
        } else {
            saved_version = readNumber(scanner, saved_version);
        }
        const CDemonActorType *type = owners_.actor.getActorClassByName(class_name);
        if (type == nullptr) {
            continue;
        }
        if (type->latest_version < saved_version) {
            common::displayErrorAndQuit(
                std::format("Actor type {} is saved in mission in format version {}, but the "
                            "latest version this .EXE supports is {}!",
                            class_name, saved_version, type->latest_version));
        }
        owners_.actor.setSavedVersion(*type, saved_version);
    }
}

// nocedit also zeroed the count of visible corona globes; retail doesn't.
// deferred: clearing actor_lookup_count, with saveActor
// nocedit 0x00522d30
void CDemonMission::clearMissionData() {
    removeAllActors();
    carried_start_.reset();
    set_names_.clear();
    mission_name_.clear();
}

// deferred: freeing the keyframed models, deformable models and skeletons the mission's actors
//   loaded, with their pools
// nocedit 0x005248e0
void CDemonMission::freeAllAssets() {
    owners_.textures.clearTextureCache();
}

// The original quit when the picked name found no actor, which a hero's name always does.
// nocedit 0x00524c20
void CDemonMission::ensureHeroPlaceholder() {
    shape::CPickList heroes(owners_.pick_list);
    for (const std::unique_ptr<CDemonActor> &actor : actors_) {
        if (isOfClass(actor.get(), "CHero")) {
            heroes.add(actor->getActorName());
        }
        const auto *placeholder = dynamic_cast<const CHeroPlaceholder *>(
            castToClassHash(actor.get(), CHeroPlaceholder::kType.name_hash));
        if (placeholder != nullptr && placeholder->getIndex() == 0) {
            return;
        }
    }
    if (heroes.getItemCount() < 1) {
        owners_.editor_tools.showMessage(
            "Warning: mission has no hero placeholders, and no heros.");
        return;
    }
    const int picked = heroes.displayChoicesAndWaitForInput(kPlaceholderPrompt, -1);
    if (picked < 0) {
        return;
    }
    const CDemonActor &hero = *findActorByName(heroes.getStringAt(picked));
    auto placeholder = std::make_unique<CHeroPlaceholder>();
    placeholder->setLocation(hero.getLocation());
    placeholder->setOrientation(hero.getOrientation());
    generateActorName(*placeholder);
    removeActor(hero);
    addActorToList(std::move(placeholder));
    owners_.editor_tools.showMessage(
        "Replaced hero OK.  You will need to save the mission for changes to be perminent.");
}

} // namespace nocturne::core

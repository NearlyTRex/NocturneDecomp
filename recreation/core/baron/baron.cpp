#include "core/baron/baron.h"

#include "core/actor/actorarchive.h"
#include "core/actor/demonactortype.h"

#include <memory>
#include <string>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 2;
// The version that first held the events and whether the Baron is summoned.
constexpr int kSummonVersion = 2;

} // namespace

// nocedit 0x00412b20
constinit const CDemonActorType CBaron::kType =
    makeActorType("CBaron", &CHero::kType, &CBaron::create, kVersion);

// deferred: loading the model baron.dfm, with CDeformableModelInstance::init
// deferred: naming the shell's model baronshell.kfm, and the defaults the constructor gives the
//   head, target, attack, transparency and shell fields, with the steps that read them
// nocedit 0x00412bc0
CBaron::CBaron() = default;

// nocedit 0x00414100
CBaron::~CBaron() = default;

// nocedit 0x00412bb0
const CDemonActorType &CBaron::getActorType() const {
    return kType;
}

// nocedit 0x00413a70
void CBaron::archive(CActorArchive &actor_archive) {
    CHero::archive(actor_archive);
    if (actor_archive.getSavedVersion(kType) < kSummonVersion) {
        return;
    }
    actor_archive.archiveString(summon_event_, "summonEvent");
    actor_archive.archiveString(go_away_event_, "goAwayEvent");
    actor_archive.archiveFlag(summoned_, "summoned");
}

const std::string &CBaron::getSummonEvent() const {
    return summon_event_;
}

const std::string &CBaron::getGoAwayEvent() const {
    return go_away_event_;
}

bool CBaron::isSummoned() const {
    return summoned_;
}

// nocedit 0x00412b80
std::unique_ptr<CDemonActor> CBaron::create() {
    return std::make_unique<CBaron>();
}

} // namespace nocturne::core

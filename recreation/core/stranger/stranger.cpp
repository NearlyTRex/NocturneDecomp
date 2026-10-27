#include "core/stranger/stranger.h"

#include "core/actor/actorarchive.h"
#include "core/actor/demonactortype.h"

#include <memory>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 9;
// Versions 2 to 4 held what the hero was on the way to, which CHero holds from its version 7, and
// version 2 alone what each hand carries.
constexpr int kInteractionVersion = 2;
constexpr int kNoInteractionVersion = 5;
constexpr int kCarryVersion = 2;
// The versions that first held the ladder to descend, whether the guns are drawn, the weapon, the
// pending action and the layer action.
constexpr int kLadderVersion = 4;
constexpr int kGunsVersion = 6;
constexpr int kWeaponVersion = 7;
constexpr int kActionVersion = 8;
constexpr int kLayerActionVersion = 9;

} // namespace

// nocedit 0x005bae80
constinit const CDemonActorType CStranger::kType =
    makeActorType("CStranger", &CHero::kType, &CStranger::create, kVersion);

// deferred: loading the model stranger.dfm, with CDeformableModelInstance::init
// deferred: naming the gun's model gat.kfm, with the weapon classes
// deferred: adding the layer actions that draw each weapon, with addLayerAction
// deferred: the defaults the constructor gives the Stranger's aiming, recoil, melee, turning,
//   carried object and airborne fields, with the steps that read them
// nocedit 0x005bb120
CStranger::CStranger() = default;

// nocedit 0x005c69c0
CStranger::~CStranger() = default;

// nocedit 0x005bb110
const CDemonActorType &CStranger::getActorType() const {
    return kType;
}

// nocedit 0x005c2fe0
void CStranger::archive(CActorArchive &actor_archive) {
    CHero::archive(actor_archive);
    const int saved_version = actor_archive.getSavedVersion(kType);
    if (saved_version >= kInteractionVersion && saved_version < kNoInteractionVersion) {
        archiveInteractionTargets(actor_archive);
    }
    if (saved_version == kCarryVersion) {
        archiveCarryObjects(actor_archive);
    }
    if (saved_version >= kLadderVersion) {
        actor_archive.archiveActor(ladder_to_descend_, "ladderToDescend");
    }
    if (saved_version >= kGunsVersion) {
        actor_archive.archiveFlag(guns_drawn_, "gunsDrawn");
    }
    if (saved_version >= kWeaponVersion) {
        actor_archive.archiveActor(weapon_, "weapon");
    }
    if (saved_version >= kActionVersion) {
        actor_archive.archiveInteger(action_pending_, "actionPending");
    }
    if (saved_version >= kLayerActionVersion) {
        archiveLayerAction(actor_archive);
    }
}

CDemonActor *CStranger::getLadderToDescend() const {
    return ladder_to_descend_;
}

bool CStranger::areGunsDrawn() const {
    return guns_drawn_;
}

CDemonActor *CStranger::getWeapon() const {
    return weapon_;
}

int CStranger::getActionPending() const {
    return action_pending_;
}

// nocedit 0x005bb0e0
std::unique_ptr<CDemonActor> CStranger::create() {
    return std::make_unique<CStranger>();
}

} // namespace nocturne::core

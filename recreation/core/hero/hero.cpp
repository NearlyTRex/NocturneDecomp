#include "core/hero/hero.h"

#include "core/actor/actorarchive.h"
#include "core/actor/demonactortype.h"
#include "core/charactr/healthbarmode.h"
#include "core/hero/herocontroltype.h"
#include "core/hero/herotask.h"

#include <format>
#include <string>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 12;
// The versions that first held the motion state, the parts, grabber and hit points, all of
// CCharacter's fields, how the hero is steered, its inventory, what it was on the way to, its
// task and its gas mask.
constexpr int kMotionVersion = 2;
constexpr int kPartsVersion = 3;
constexpr int kCharacterVersion = 4;
constexpr int kControlVersion = 5;
constexpr int kInventoryVersion = 6;
constexpr int kInteractionVersion = 7;
constexpr int kTaskVersion = 9;
constexpr int kGasMaskVersion = 12;
// The versions that dropped a second grabber, that held the keys as a count, and that dropped
// the names of the keys, which came in the version that dropped the grabber.
constexpr int kNoSecondGrabberVersion = 8;
constexpr int kKeyCountVersion = 10;
constexpr int kNoKeyNamesVersion = 11;
constexpr int kKeyNameCount = 32;

} // namespace

// nocedit 0x004f2120
constinit const CDemonActorType CHero::kType =
    makeActorType("CHero", &CCharacter::kType, nullptr, kVersion);

// deferred: the path map and input, the inventory's owner, and the defaults the constructor gives
//   the collision, invincibility, aiming, nearby actor, target and flame fields, with the steps
//   that read them
// deferred: creating the default weapon, with the weapon classes
// nocedit 0x004f2340
CHero::CHero() {
    setHealthBarMode(EHealthBarMode::kWhenHurt);
}

// The original also took the hero off the mission's heroes, which the mission does here as it
// destroys one.
// nocedit 0x004f2470
CHero::~CHero() = default;

// Before version 4 a hero held only CDemonActor's fields of CCharacter's, with the motion state
// from 2 and the parts, grabber and hit points from 3. The keys, and their names, are read and
// dropped.
// nocedit 0x004f2610
void CHero::archive(CActorArchive &actor_archive) {
    const int saved_version = actor_archive.getSavedVersion(kType);
    if (saved_version < kCharacterVersion) {
        archiveDemonActorFields(actor_archive);
        if (saved_version >= kMotionVersion) {
            actor_archive.archiveMotionState(getModel(), "motion state");
        }
        if (saved_version >= kPartsVersion) {
            actor_archive.archivePartStatus(getModel(), "partStatus");
            archiveGrabbedBy(actor_archive);
            archiveHitPoints(actor_archive);
        }
        return;
    }
    CCharacter::archive(actor_archive);
    actor_archive.archiveMotionState(getModel(), "motion state");
    actor_archive.archivePartStatus(getModel(), "partStatus");
    if (saved_version < kNoSecondGrabberVersion) {
        archiveGrabbedBy(actor_archive);
        clearGrabbedType();
    }
    if (saved_version >= kControlVersion) {
        auto control_type = static_cast<int>(control_type_);
        actor_archive.archiveInteger(control_type, "controlType");
        control_type_ = static_cast<EHeroControlType>(control_type);
    }
    if (saved_version >= kInteractionVersion) {
        actor_archive.archiveActor(object_to_pick_up_, "objectToPickUp");
        actor_archive.archiveActor(door_to_open_, "doorToOpen");
        actor_archive.archiveActor(lever_to_pull_, "leverToPull");
        actor_archive.archiveActor(ladder_to_climb_, "ladderToClimb");
        actor_archive.archiveActor(pushed_object_, "pushedObject");
    }
    if (saved_version == kKeyCountVersion) {
        int keys = 0;
        actor_archive.archiveInteger(keys, "keys");
    }
    if (saved_version >= kNoSecondGrabberVersion && saved_version < kNoKeyNamesVersion) {
        for (int i = 0; i < kKeyNameCount; ++i) {
            std::string key_name;
            actor_archive.archiveString(key_name, std::format("keyNameList[{}]", i));
        }
    }
    if (saved_version >= kTaskVersion) {
        auto ai_task = static_cast<int>(ai_task_);
        actor_archive.archiveInteger(ai_task, "AITask");
        ai_task_ = static_cast<EHeroTask>(ai_task);
    }
    if (saved_version >= kGasMaskVersion) {
        auto wearing_gas_mask = static_cast<int>(is_wearing_gas_mask_);
        actor_archive.archiveInteger(wearing_gas_mask, "isWearingGasMask");
        is_wearing_gas_mask_ = wearing_gas_mask != 0;
    }
    if (saved_version >= kInventoryVersion) {
        inventory_.load(actor_archive);
    }
}

const CInventory &CHero::getInventory() const {
    return inventory_;
}

EHeroControlType CHero::getControlType() const {
    return control_type_;
}

CDemonActor *CHero::getObjectToPickUp() const {
    return object_to_pick_up_;
}

CDemonActor *CHero::getDoorToOpen() const {
    return door_to_open_;
}

CDemonActor *CHero::getLeverToPull() const {
    return lever_to_pull_;
}

CDemonActor *CHero::getLadderToClimb() const {
    return ladder_to_climb_;
}

CDemonActor *CHero::getPushedObject() const {
    return pushed_object_;
}

EHeroTask CHero::getAiTask() const {
    return ai_task_;
}

bool CHero::isWearingGasMask() const {
    return is_wearing_gas_mask_;
}

} // namespace nocturne::core

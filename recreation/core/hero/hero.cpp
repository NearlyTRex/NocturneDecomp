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
// deferred: a hero breaking out of a non-scripted grab after 1.5 s held, steered through STAND
//   into GETGRABBED, then ESCAPEGRAB or PUSHOFF, released once neither is blended in, with fire
//   consumed while held (the decomp's hero_grab.h nocturne_hero_grab_escape), with
//   CColonel::process, CGabriella::process, CHaystack::process, CIcePick::process,
//   CMoloch::process, CScat::process and CSvetlana::process
// deferred: a sentinel carrying a grabbed hero to its claws through CCharacter::moveAndCollide,
//   where the original writes the position through walls and out of the level (the decomp's
//   hero_grab.h nocturne_grab_carry_move), with CSentinel::attractActorToward
// deferred: a player hero's use_item spending a selected health item, and the health bar's timer
//   ticking (the decomp's hero_items.h nocturne_hero_items_process), with CColonel::process,
//   CGabriella::process, CHaystack::process, CIcePick::process, CMoloch::process,
//   CScat::process and CSvetlana::process
// deferred: a killing blow spending a health item when autoUseHealth is set, and every hit
//   restarting the health bar's timer (the decomp's nocturne_hero_items_damage_taken), with
//   CColonel::processDamage, CGabriella::processDamage, CHaystack::processDamage,
//   CIcePick::processDamage, CScat::processDamage and CSvetlana::processDamage
// deferred: a player hero at zero hit points that reads alive and no longer wants DIE or DEAD
//   jumped into DIE (the decomp's hero_death.h nocturne_hero_check_death), with
//   CColonel::process, CGabriella::process, CHaystack::process, CIcePick::process,
//   CScat::process and CSvetlana::process
// deferred: the Stranger's landing damage for a player hero: (speed - 20) * 5 from 20 units/s
//   and fatal over 100, none in god mode or with damage off (the decomp's hero_fall.h
//   nocturne_hero_fall_move), with CColonel::process, CGabriella::process, CHaystack::process,
//   CIcePick::process and CScat::process
// deferred: cold breath for a player hero standing idle in fog under 32 degrees (the decomp's
//   hero_breath.h), with CCharacter::processSmoking, CColonel::process, CGabriella::process,
//   CHaystack::process, CIcePick::process and CScat::process
// deferred: what a player hero may hold by class (the Stranger anything, Gabriella guns, ammo,
//   dynamite and the Baron, the rest health items, keys and plain items for all), the slot text
//   of a hero's own item, weapons not in hand put back in the inventory each frame, and no ammo
//   shown for the Baron weapon or a melee hero's shovel (the decomp's hero_weapon.h), with
//   CInventory's items and display
// deferred: each network player's own flashlight switch, beam, lens glow, goggles flag and
//   battery drain, another hero's beam giving way when the dynamic lights are full (the decomp's
//   hero_light.h), with CNetGame and the weapons' lights
// deferred: the light button toggling a player Gabriella's, Scat's or the Colonel's gun light by
//   the Stranger's rules: only while the selected weapon takes a light, drawing it when switched
//   on with the weapon away, and off with a click on holstering (the decomp's gun_flashlight.h),
//   with CNetGame::applySimFrameHistory
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
        actor_archive.archiveEnum(control_type_, "controlType");
    }
    if (saved_version >= kInteractionVersion) {
        archiveInteractionTargets(actor_archive);
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
        actor_archive.archiveEnum(ai_task_, "AITask");
    }
    if (saved_version >= kGasMaskVersion) {
        actor_archive.archiveEnum(gas_mask_state_, "isWearingGasMask");
    }
    if (saved_version >= kInventoryVersion) {
        inventory_.load(actor_archive);
    }
}

void CHero::archiveInteractionTargets(CActorArchive &actor_archive) {
    actor_archive.archiveActor(object_to_pick_up_, "objectToPickUp");
    actor_archive.archiveActor(door_to_open_, "doorToOpen");
    actor_archive.archiveActor(lever_to_pull_, "leverToPull");
    actor_archive.archiveActor(ladder_to_climb_, "ladderToClimb");
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

EGasMaskState CHero::getGasMaskState() const {
    return gas_mask_state_;
}

} // namespace nocturne::core

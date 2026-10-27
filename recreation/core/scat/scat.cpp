#include "core/scat/scat.h"

#include "core/actor/demonactortype.h"

#include <memory>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// nocedit 0x00556e00
constinit const CDemonActorType CScat::kType =
    makeActorType("CScat", &CHero::kType, &CScat::create, kVersion);

// deferred: loading the model scat.dfm, with CDeformableModelInstance::init
// deferred: creating Scat's default weapon, with the weapon classes
// deferred: adding the layer actions that draw the pistols, with addLayerAction
// deferred: the defaults the constructor gives Scat's own fields, with the steps that read them
// deferred: a player Scat's fire opening doors, pulling levers and talking with the weapon away,
//   which the original never reaches (the decomp's hero_interact.h nocturne_hero_fire_interact),
//   with CScat::process
// deferred: a player Scat putting the Baron away when deselected while standing, where the
//   original leaves him summoned (the decomp's hero_weapon.h nocturne_hero_put_away_weapon), with
//   CScat::updateWeaponState
// deferred: the network pistol's reserve topped up after each shot (the decomp's hero_weapon.h
//   nocturne_hero_reload_extra_gun), with CScat::process and CNetGame
// nocedit 0x00556ed0
CScat::CScat() = default;

// nocedit 0x00559160
CScat::~CScat() = default;

// nocedit 0x00556ec0
const CDemonActorType &CScat::getActorType() const {
    return kType;
}

// nocedit 0x00557db0
void CScat::archive(CActorArchive &actor_archive) {
    CHero::archive(actor_archive);
}

// nocedit 0x00556e90
std::unique_ptr<CDemonActor> CScat::create() {
    return std::make_unique<CScat>();
}

} // namespace nocturne::core

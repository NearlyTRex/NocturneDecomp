#include "core/weapon/weapon.h"

#include "core/actor/actorarchive.h"
#include "core/actor/demonactortype.h"
#include "core/ammo/ammotype.h"
#include "core/dmodel/keyframedmodelinstance.h"
#include "core/weapon/weaponstate.h"

#include <string>
#include <string_view>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 7;
// The versions that first held who carries the weapon, its state and ammunition, and its clock,
// and the one that held a shown name.
constexpr int kCarriedVersion = 3;
constexpr int kStateVersion = 4;
constexpr int kNamedVersion = 5;
constexpr int kTimedVersion = 7;

} // namespace

// nocedit 0x005ede40
constinit const CDemonActorType CWeapon::kType =
    makeActorType("CWeapon", &CDemonActor::kType, nullptr, kVersion);

// deferred: the physics box, and the defaults the constructor gives the weight, collision,
//   firing, light, muzzle flash and rendering fields, with the steps that read them
// nocedit 0x005ede70
CWeapon::CWeapon() {
    model_.setModelName("gat.kfm");
}

// nocedit 0x005edf80
CWeapon::~CWeapon() = default;

// Version 5 held a shown name, which is read and dropped.
// nocedit 0x005ee250
void CWeapon::archive(CActorArchive &actor_archive) {
    CDemonActor::archive(actor_archive);
    actor_archive.archiveKeyframedModelInstance(model_, "modelName");
    const int saved_version = actor_archive.getSavedVersion(kType);
    if (saved_version >= kCarriedVersion) {
        actor_archive.archiveActor(carried_by_actor_, "carriedByActor");
    }
    if (saved_version >= kStateVersion) {
        actor_archive.archiveEnum(weapon_state_, "weaponState");
        actor_archive.archiveInteger(ammo_count_, "ammoCount");
        actor_archive.archiveEnum(ammo_type_, "ammoType");
    }
    if (saved_version == kNamedVersion) {
        std::string descriptive_name;
        actor_archive.archiveLocalizedString(descriptive_name, "descriptiveName");
    }
    if (saved_version >= kTimedVersion) {
        actor_archive.archiveFloat(sim_timer_, "simTimer");
    }
}

// nocedit 0x005ee490
CDemonActor *CWeapon::getCarrier() {
    return carried_by_actor_;
}

void CWeapon::setModelName(std::string_view filename) {
    model_.setModelName(filename);
}

const CKeyFramedModelInstance &CWeapon::getModel() const {
    return model_;
}

EWeaponState CWeapon::getWeaponState() const {
    return weapon_state_;
}

int CWeapon::getAmmoCount() const {
    return ammo_count_;
}

EAmmoType CWeapon::getAmmoType() const {
    return ammo_type_;
}

float CWeapon::getSimTimer() const {
    return sim_timer_;
}

} // namespace nocturne::core

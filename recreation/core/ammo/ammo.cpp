#include "core/ammo/ammo.h"

#include "core/actor/actor.h"
#include "core/actor/actorarchive.h"
#include "core/actor/demonactortype.h"
#include "core/actor/notported.h"
#include "core/ammo/ammotype.h"
#include "core/dmodel/keyframedmodelinstance.h"

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <string_view>
#include <utility>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

[[noreturn]] void notPorted(std::string_view function) {
    quitNotPorted("CAmmo", function);
}

// A pistol's rounds by their kind; the rest are its plain bullets.
std::string_view getPistolRoundModel(EAmmoType ammo_type) {
    switch (ammo_type) {
    case EAmmoType::kHoly:
        return "holybullet.kfm";
    case EAmmoType::kWood:
        return "woodbullet.kfm";
    case EAmmoType::kSilver:
        return "silverbullet.kfm";
    case EAmmoType::kGold:
        return "goldbullet.kfm";
    case EAmmoType::kLithium:
        return "lithiumbullet.kfm";
    case EAmmoType::kMercury:
        return "mercurybullet.kfm";
    default:
        return "gatbullet.kfm";
    }
}

// The model of a weapon class's rounds; empty for a class with none of its own.
std::string_view getRoundModel(std::string_view weapon_class_name, EAmmoType ammo_type) {
    if (weapon_class_name == "CGun") {
        return getPistolRoundModel(ammo_type);
    }
    if (weapon_class_name == "CCrossbow") {
        return ammo_type == EAmmoType::kHoly ? "holystake.kfm" : "stake.kfm";
    }
    constexpr std::array<std::pair<std::string_view, std::string_view>, 5> kRounds{{
        {"CShotgun", "shell.kfm"},
        {"CDynamite", "dynamitebundle.kfm"},
        {"CTommyGun", "tommybullet.kfm"},
        {"CFlameThrower", "fgunammo.kfm"},
        {"CElephantGun", "eleshell.kfm"},
    }};
    const auto *found = std::ranges::find(kRounds, weapon_class_name,
                                          &std::pair<std::string_view, std::string_view>::first);
    return found == kRounds.end() ? std::string_view() : found->second;
}

} // namespace

// nocedit 0x00410d50
constinit const CDemonActorType CAmmo::kType =
    makeActorType("CAmmo", &CDemonActor::kType, &CAmmo::create, kVersion);

// nocedit 0x00410dc0
CAmmo::CAmmo(CActor &classes) : model_(classes.getKeyFramedModels()) {
    model_.setModelName("bullet.kfm");
}

// nocedit 0x004114e0
// bw2 0x0040de50
CAmmo::~CAmmo() = default;

// nocedit 0x00410db0
const CDemonActorType &CAmmo::getActorType() const {
    return kType;
}

// nocedit 0x00410d80
// bw1 0x0040db90
// bw2 0x0040dd80
// bw3 0x0040de30
std::unique_ptr<CDemonActor> CAmmo::create(CActor &classes) {
    return std::make_unique<CAmmo>(classes);
}

// The original's buffer for the weapon class held 64 characters.
// nocedit 0x00410f40
// bw2 0x0040e1b0
void CAmmo::archive(CActorArchive &actor_archive) {
    CDemonActor::archive(actor_archive);
    actor_archive.archiveKeyframedModelInstance(model_, "modelName");
    actor_archive.archiveString(weapon_class_name_, "weaponClassName");
    actor_archive.archiveInteger(ammo_count_, "ammoCount");
    actor_archive.archiveEnum(ammo_type_, "ammoType");
}

const CKeyFramedModelInstance &CAmmo::getModel() const {
    return model_;
}

const std::string &CAmmo::getWeaponClassName() const {
    return weapon_class_name_;
}

int CAmmo::getAmmoCount() const {
    return ammo_count_;
}

EAmmoType CAmmo::getAmmoType() const {
    return ammo_type_;
}

// deferred: BW1's and BW2's light gun rounds, CLightgun's batterylarge.kfm, with the Blair Witch
//   light guns
// deferred: BW2's bullets6_1.kfm for a pistol's plain, flaming and blank rounds, which would
//   change Nocturne's, with the superset changes' review
// nocedit 0x00410fd0
void CAmmo::setWeaponClass(std::string_view weapon_class_name) {
    weapon_class_name_ = weapon_class_name;
    if (const std::string_view model = getRoundModel(weapon_class_name, ammo_type_);
        !model.empty()) {
        model_.setModelName(model);
    }
    model_.preCache();
}

// nocedit 0x004111b0
// bw1 0x0040dfd0
// bw2 0x0040e440
// bw3 0x0040e070
void CAmmo::setAmmoCount(int ammo_count) {
    ammo_count_ = ammo_count;
}

void CAmmo::setAmmoType(EAmmoType ammo_type) {
    ammo_type_ = ammo_type;
}

// nocedit 0x00410e50
// bw1 0x0040dc50
// bw2 0x0040deb0
// bw3 0x0040def0
void CAmmo::setup() {
    model_.preCache();
    CDemonActor::setup();
}

void CAmmo::process(float /*delta_time*/) {
    notPorted("process");
}

int CAmmo::renderOpaque() {
    notPorted("renderOpaque");
}

CBoundingBox3D *CAmmo::getBoundingBox(CBoundingBox3D * /*out_box*/) {
    notPorted("getBoundingBox");
}

ECollisionType CAmmo::getCollisionType(SCollisionInfo * /*collision_info*/) {
    notPorted("getCollisionType");
}

int CAmmo::canPickup(CDemonActor * /*picker*/) {
    notPorted("canPickup");
}

} // namespace nocturne::core

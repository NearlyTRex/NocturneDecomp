#include "core/ammo/ammo.h"

#include "core/actor/actorarchive.h"
#include "core/actor/demonactortype.h"
#include "core/actor/notported.h"
#include "core/ammo/ammotype.h"
#include "core/dmodel/keyframedmodelinstance.h"

#include <memory>
#include <string>
#include <string_view>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

[[noreturn]] void notPorted(std::string_view function) {
    quitNotPorted("CAmmo", function);
}

} // namespace

// nocedit 0x00410d50
constinit const CDemonActorType CAmmo::kType =
    makeActorType("CAmmo", &CDemonActor::kType, &CAmmo::create, kVersion);

// nocedit 0x00410dc0
CAmmo::CAmmo() {
    model_.setModelName("bullet.kfm");
}

// nocedit 0x004114e0
CAmmo::~CAmmo() = default;

// nocedit 0x00410db0
const CDemonActorType &CAmmo::getActorType() const {
    return kType;
}

// nocedit 0x00410d80
std::unique_ptr<CDemonActor> CAmmo::create() {
    return std::make_unique<CAmmo>();
}

// The original's buffer for the weapon class held 64 characters.
// nocedit 0x00410f40
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

void CAmmo::setup() {
    notPorted("setup");
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

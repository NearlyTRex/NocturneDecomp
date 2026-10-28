#include "core/actor/notported.h"
#include "core/weapon/weapon.h"

#include <string_view>

// The virtual functions every weapon class reaches before their own steps port them. Each quits,
// naming itself, until its port replaces it here.

namespace nocturne::core {
namespace {

[[noreturn]] void notPorted(std::string_view function) {
    quitNotPorted("CWeapon", function);
}

} // namespace

void CWeapon::setup() {
    notPorted("setup");
}

void CWeapon::process(float /*delta_time*/) {
    notPorted("process");
}

int CWeapon::renderOpaque() {
    notPorted("renderOpaque");
}

CBoundingBox3D *CWeapon::getBoundingBox(CBoundingBox3D * /*out_box*/) {
    notPorted("getBoundingBox");
}

ECollisionType CWeapon::getCollisionType(SCollisionInfo * /*collision_info*/) {
    notPorted("getCollisionType");
}

void CWeapon::onPickup(CDemonActor * /*owner*/) {
    notPorted("onPickup");
}

int CWeapon::canPickup(CDemonActor * /*picker*/) {
    notPorted("canPickup");
}

void CWeapon::pickup(CDemonActor * /*carrier*/) {
    notPorted("pickup");
}

void CWeapon::onDropped(common::CVector3f * /*drop_position*/) {
    notPorted("onDropped");
}

void CWeapon::onFired() {
    notPorted("onFired");
}

void CWeapon::setWeaponState(int /*weapon_state*/) {
    notPorted("setWeaponState");
}

common::CVector3f *CWeapon::getMuzzlePoint(common::CVector3f * /*out_point*/) {
    notPorted("getMuzzlePoint");
}

int CWeapon::fire() {
    notPorted("fire");
}

int CWeapon::isReadyToFire() {
    notPorted("isReadyToFire");
}

float CWeapon::getDamage() {
    notPorted("getDamage");
}

void CWeapon::renderAimBeam() {
    notPorted("renderAimBeam");
}

void CWeapon::updateLighting() {
    notPorted("updateLighting");
}

} // namespace nocturne::core

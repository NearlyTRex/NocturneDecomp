#include "core/actor/notported.h"
#include "core/charactr/character.h"

#include <cstdint>
#include <string_view>

// The virtual functions every character class reaches before their own steps port them. Each
// quits, naming itself, until its port replaces it here.

namespace nocturne::core {
namespace {

[[noreturn]] void notPorted(std::string_view function) {
    quitNotPorted("CCharacter", function);
}

} // namespace

void CCharacter::setup() {
    notPorted("setup");
}

int CCharacter::renderOpaque() {
    notPorted("renderOpaque");
}

int CCharacter::renderTransparent() {
    notPorted("renderTransparent");
}

void CCharacter::renderBackground(int /*layer_flag*/) {
    notPorted("renderBackground");
}

CBoundingBox3D *CCharacter::getBoundingBox(CBoundingBox3D * /*out_box*/) {
    notPorted("getBoundingBox");
}

ECollisionType CCharacter::getCollisionType(SCollisionInfo * /*collision_info*/) {
    notPorted("getCollisionType");
}

int CCharacter::canLookAt() {
    notPorted("canLookAt");
}

void CCharacter::setPositionAndOrientation(common::CVector3f * /*new_position*/,
                                           common::CVector3f * /*new_orientation*/) {
    notPorted("setPositionAndOrientation");
}

void CCharacter::drop(CDemonActor * /*carrier*/, common::CVector3f * /*drop_position*/) {
    notPorted("drop");
}

void CCharacter::spawnFlies(int /*fly_count*/, float /*spawn_radius*/) {
    notPorted("spawnFlies");
}

void CCharacter::calculateChecksum(std::uint32_t * /*out_crc*/) {
    notPorted("calculateChecksum");
}

void CCharacter::applyDamage(int /*damage_type*/, float /*damage_amount*/) {
    notPorted("applyDamage");
}

void CCharacter::kill(int /*damage_type*/, common::CVector3f * /*damage_direction*/,
                      float /*impact_force*/) {
    notPorted("kill");
}

int CCharacter::isInvulnerable() {
    notPorted("isInvulnerable");
}

int CCharacter::isGrabbable(CDemonActor * /*grabber*/) {
    notPorted("isGrabbable");
}

int CCharacter::canBeGrabbed(CDemonActor * /*grabber*/, int /*grab_type*/) {
    notPorted("canBeGrabbed");
}

int CCharacter::getGrabbed(CDemonActor * /*grabber*/, int /*grab_type*/) {
    notPorted("getGrabbed");
}

void CCharacter::releaseFromGrab() {
    notPorted("releaseFromGrab");
}

void CCharacter::releaseVictim() {
    notPorted("releaseVictim");
}

void CCharacter::onVictimLost(CDemonActor * /*lost_actor*/) {
    notPorted("onVictimLost");
}

int CCharacter::checkCylinderCollisionWorld(common::CVector3f * /*world_point*/,
                                            float /*tolerance*/, SDamageInfo * /*damage_info*/) {
    notPorted("checkCylinderCollisionWorld");
}

int CCharacter::testDamageLine(common::CVector3f * /*start*/, common::CVector3f * /*end*/,
                               SDamageInfo * /*damage_info*/, common::CVector3f * /*out_hit*/) {
    notPorted("testDamageLine");
}

void CCharacter::processDamage(SDamageInfo * /*damage_info*/) {
    notPorted("processDamage");
}

EDeathState CCharacter::getDeathState() {
    notPorted("getDeathState");
}

int CCharacter::attractActorToward(CDemonActor * /*actor*/,
                                   common::CVector3f * /*target_local_point*/) {
    notPorted("attractActorToward");
}

int CCharacter::canBeAttracted(common::CVector3f * /*out_attract_position*/) {
    notPorted("canBeAttracted");
}

int CCharacter::getPartDominantBone(int /*part_index*/) {
    notPorted("getPartDominantBone");
}

void CCharacter::setDoorTarget(CDoor * /*door_target*/) {
    notPorted("setDoorTarget");
}

void CCharacter::clearDoorTarget() {
    notPorted("clearDoorTarget");
}

int CCharacter::hasDoorTarget() {
    notPorted("hasDoorTarget");
}

void CCharacter::dropCarriedObject(int /*hand_index*/, common::CVector3f * /*drop_direction*/) {
    notPorted("dropCarriedObject");
}

common::CMatrix3x4f *CCharacter::getCarryObjToBodyXForm(int /*hand_index*/,
                                                        common::CMatrix3x4f * /*out_matrix*/) {
    notPorted("getCarryObjToBodyXForm");
}

void CCharacter::setWalkTarget(CDemonActor * /*target*/, float /*min_distance*/,
                               float /*max_distance*/) {
    notPorted("setWalkTarget");
}

void CCharacter::setWalkTargetImmediate(CDemonActor * /*target*/) {
    notPorted("setWalkTargetImmediate");
}

void CCharacter::setWalkTimeout(float /*timeout*/) {
    notPorted("setWalkTimeout");
}

int CCharacter::isWalkComplete() {
    notPorted("isWalkComplete");
}

} // namespace nocturne::core

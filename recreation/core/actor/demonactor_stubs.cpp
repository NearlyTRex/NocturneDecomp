#include "core/actor/demonactor.h"
#include "core/actor/notported.h"

#include <cstdint>
#include <string_view>

// The virtual functions every actor class reaches before their own steps port them. Each quits,
// naming itself, until its port replaces it here.

namespace nocturne::core {
namespace {

[[noreturn]] void notPorted(std::string_view function) {
    quitNotPorted("CDemonActor", function);
}

} // namespace

void CDemonActor::setup() {
    notPorted("setup");
}

void CDemonActor::process(float /*delta_time*/) {
    notPorted("process");
}

int CDemonActor::renderOpaque() {
    notPorted("renderOpaque");
}

int CDemonActor::renderTransparent() {
    notPorted("renderTransparent");
}

void CDemonActor::renderBackground(int /*layer_flag*/) {
    notPorted("renderBackground");
}

CBoundingBox3D *CDemonActor::getBoundingBox(CBoundingBox3D * /*out_box*/) {
    notPorted("getBoundingBox");
}

std::uint32_t CDemonActor::processFootstep(float /*volume*/) {
    notPorted("processFootstep");
}

std::uint32_t CDemonActor::processFootstepAtOffset(common::CVector3f * /*location*/,
                                                   float /*volume*/) {
    notPorted("processFootstepAtOffset");
}

std::uint32_t CDemonActor::handleFootstep(common::CVector3f * /*position*/,
                                          EGroundType /*ground_type*/, float /*volume*/) {
    notPorted("handleFootstep");
}

std::uint32_t CDemonActor::playSound(char * /*sound_name*/) {
    notPorted("playSound");
}

std::uint32_t CDemonActor::playAmbientSound(char * /*sound_name*/) {
    notPorted("playAmbientSound");
}

std::uint32_t CDemonActor::playSoundWithDelay(char * /*sound_name*/, float /*delay*/) {
    notPorted("playSoundWithDelay");
}

std::uint32_t CDemonActor::playAmbientSoundWithDelay(char * /*sound_name*/, float /*delay*/) {
    notPorted("playAmbientSoundWithDelay");
}

ECollisionType CDemonActor::getCollisionType(SCollisionInfo * /*collision_info*/) {
    notPorted("getCollisionType");
}

float CDemonActor::cylinderGroundCheck(float /*radius*/, common::CVector3f * /*out_normal*/) {
    notPorted("cylinderGroundCheck");
}

EGroundType CDemonActor::getGroundType() {
    notPorted("getGroundType");
}

int CDemonActor::getBlockVirtualDirectorFlag() {
    notPorted("getBlockVirtualDirectorFlag");
}

int CDemonActor::allowBulletHoles() {
    notPorted("allowBulletHoles");
}

void CDemonActor::updateCollisionData() {
    notPorted("updateCollisionData");
}

int CDemonActor::getTargetPoints(common::CVector3f * /*out_points_array*/) {
    notPorted("getTargetPoints");
}

void CDemonActor::renderTargetPoints() {
    notPorted("renderTargetPoints");
}

int CDemonActor::canLookAt() {
    notPorted("canLookAt");
}

float CDemonActor::evaluateTriggerCondition(CDemonActor * /*querying_actor*/,
                                            common::CVector3f * /*query_position*/) {
    notPorted("evaluateTriggerCondition");
}

int CDemonActor::processActionButton() {
    notPorted("processActionButton");
}

void CDemonActor::setPositionAndOrientation(common::CVector3f * /*new_position*/,
                                            common::CVector3f * /*new_orientation*/) {
    notPorted("setPositionAndOrientation");
}

void CDemonActor::onPickup(CDemonActor * /*owner*/) {
    notPorted("onPickup");
}

int CDemonActor::shouldIgnoreForTargeting() {
    notPorted("shouldIgnoreForTargeting");
}

int CDemonActor::getAllowedMeleeAttackTypes() {
    notPorted("getAllowedMeleeAttackTypes");
}

int CDemonActor::processMeleeHit(int /*hit_type*/) {
    notPorted("processMeleeHit");
}

void CDemonActor::fillAttackDamageInfo(int /*attack_flags*/, SDamageInfo * /*out_damage_info*/,
                                       CDemonActor * /*victim*/) {
    notPorted("fillAttackDamageInfo");
}

void CDemonActor::playAttackHitEffects(int /*attack_flags*/, SDamageInfo * /*damage_info*/,
                                       CDemonActor * /*victim*/) {
    notPorted("playAttackHitEffects");
}

int CDemonActor::canPickup(CDemonActor * /*picker*/) {
    notPorted("canPickup");
}

void CDemonActor::pickup(CDemonActor * /*carrier*/) {
    notPorted("pickup");
}

void CDemonActor::onDropped(common::CVector3f * /*drop_position*/) {
    notPorted("onDropped");
}

void CDemonActor::drop(CDemonActor * /*carrier*/, common::CVector3f * /*drop_position*/) {
    notPorted("drop");
}

CDemonActor *CDemonActor::getCarrier() {
    notPorted("getCarrier");
}

void CDemonActor::getInteractionInfo(SInteractionInfo * /*out_info*/) {
    notPorted("getInteractionInfo");
}

int CDemonActor::startInteraction(CDemonActor * /*user*/) {
    notPorted("startInteraction");
}

int CDemonActor::updateInteraction(common::UOrientationVector * /*user_orientation*/,
                                   SPlayerInput * /*player_control*/) {
    notPorted("updateInteraction");
}

void CDemonActor::stopInteraction(CDemonActor * /*user*/) {
    notPorted("stopInteraction");
}

void CDemonActor::spawnFlies(int /*fly_count*/, float /*spawn_radius*/) {
    notPorted("spawnFlies");
}

int CDemonActor::testCylinderCollision(SCollisionReturnInfo * /*collision_info*/,
                                       float /*tolerance*/) {
    notPorted("testCylinderCollision");
}

int CDemonActor::testLineIntersection(common::CVector3f * /*line_start*/,
                                      common::CVector3f * /*line_end*/,
                                      common::CVector3f * /*out_intersection_point*/) {
    notPorted("testLineIntersection");
}

void CDemonActor::onLaserHit(SLaserInfo * /*laser_info*/) {
    notPorted("onLaserHit");
}

float CDemonActor::customRayIntersect(common::CVector3f * /*ray_origin*/,
                                      common::CVector3f * /*ray_direction*/,
                                      common::CVector3f * /*out_normal*/) {
    notPorted("customRayIntersect");
}

void CDemonActor::customIntersectCylinderXZ(SIntersectXZCylinder * /*cylinder*/) {
    notPorted("customIntersectCylinderXZ");
}

int CDemonActor::customGetFloorHeight(common::CVector3f * /*position*/, float /*search_radius*/,
                                      float * /*out_floor_height*/) {
    notPorted("customGetFloorHeight");
}

CPathMap *CDemonActor::getPathMap() {
    notPorted("getPathMap");
}

void CDemonActor::calculateChecksum(std::uint32_t * /*out_crc*/) {
    notPorted("calculateChecksum");
}

void CDemonActor::archive(CActorArchive & /*actor_archive*/) {
    notPorted("archive");
}

} // namespace nocturne::core

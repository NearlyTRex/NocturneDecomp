#include "core/actor/notported.h"
#include "core/hero/hero.h"

#include <string_view>

// The CHero functions not ported yet. Each quits, naming itself, until its port replaces it
// here.

namespace nocturne::core {
namespace {

[[noreturn]] void notPorted(std::string_view function) {
    quitNotPorted("CHero", function);
}

} // namespace

void CHero::setup() {
    notPorted("setup");
}

int CHero::canLookAt() {
    notPorted("canLookAt");
}

int CHero::testCylinderCollision(SCollisionReturnInfo * /*collision_info*/, float /*tolerance*/) {
    notPorted("testCylinderCollision");
}

int CHero::testLineIntersection(common::CVector3f * /*line_start*/,
                                common::CVector3f * /*line_end*/,
                                common::CVector3f * /*out_intersection_point*/) {
    notPorted("testLineIntersection");
}

CPathMap *CHero::getPathMap() {
    notPorted("getPathMap");
}

void CHero::kill(int /*damage_type*/, common::CVector3f * /*damage_direction*/,
                 float /*impact_force*/) {
    notPorted("kill");
}

int CHero::isInvulnerable() {
    notPorted("isInvulnerable");
}

int CHero::isGrabbable(CDemonActor * /*grabber*/) {
    notPorted("isGrabbable");
}

int CHero::canBeGrabbed(CDemonActor * /*grabber*/, int /*grab_type*/) {
    notPorted("canBeGrabbed");
}

int CHero::getGrabbed(CDemonActor * /*grabber*/, int /*grab_type*/) {
    notPorted("getGrabbed");
}

void CHero::releaseFromGrab() {
    notPorted("releaseFromGrab");
}

void CHero::createDefaultWeapon() {
    notPorted("createDefaultWeapon");
}

void CHero::reset() {
    notPorted("reset");
}

} // namespace nocturne::core

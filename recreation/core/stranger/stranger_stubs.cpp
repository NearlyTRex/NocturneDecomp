#include "core/actor/notported.h"
#include "core/stranger/stranger.h"

#include <string_view>

// The CStranger functions not ported yet. Each quits, naming itself, until its port replaces it
// here.

namespace nocturne::core {
namespace {

[[noreturn]] void notPorted(std::string_view function) {
    quitNotPorted("CStranger", function);
}

} // namespace

void CStranger::setup() {
    notPorted("setup");
}

void CStranger::process(float /*delta_time*/) {
    notPorted("process");
}

int CStranger::renderOpaque() {
    notPorted("renderOpaque");
}

int CStranger::renderTransparent() {
    notPorted("renderTransparent");
}

void CStranger::setPositionAndOrientation(common::CVector3f * /*new_position*/,
                                          common::CVector3f * /*new_orientation*/) {
    notPorted("setPositionAndOrientation");
}

void CStranger::drop(CDemonActor * /*carrier*/, common::CVector3f * /*drop_position*/) {
    notPorted("drop");
}

int CStranger::getGrabbed(CDemonActor * /*grabber*/, int /*grab_type*/) {
    notPorted("getGrabbed");
}

void CStranger::processDamage(SDamageInfo * /*damage_info*/) {
    notPorted("processDamage");
}

EDeathState CStranger::getDeathState() {
    notPorted("getDeathState");
}

void CStranger::dropCarriedObject(int /*hand_index*/, common::CVector3f * /*drop_direction*/) {
    notPorted("dropCarriedObject");
}

common::CMatrix3x4f *CStranger::getCarryObjToBodyXForm(int /*hand_index*/,
                                                       common::CMatrix3x4f * /*out_matrix*/) {
    notPorted("getCarryObjToBodyXForm");
}

void CStranger::drawWeapon(int /*drawn*/) {
    notPorted("drawWeapon");
}

int CStranger::isWeaponDrawn() {
    notPorted("isWeaponDrawn");
}

void CStranger::reset() {
    notPorted("reset");
}

} // namespace nocturne::core

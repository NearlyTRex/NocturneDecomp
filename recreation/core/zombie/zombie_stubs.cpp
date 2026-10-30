#include "core/actor/notported.h"
#include "core/zombie/zombie.h"

#include <string_view>

// The CZombie virtual functions not ported yet. Each quits, naming itself, until its port
// replaces it here.

namespace nocturne::core {
namespace {

[[noreturn]] void notPorted(std::string_view function) {
    quitNotPorted("CZombie", function);
}

} // namespace

void CZombie::setup() {
    notPorted("setup");
}

void CZombie::process(float /*delta_time*/) {
    notPorted("process");
}

int CZombie::renderOpaque() {
    notPorted("renderOpaque");
}

int CZombie::renderTransparent() {
    notPorted("renderTransparent");
}

int CZombie::getTargetPoints(common::CVector3f * /*out_points_array*/) {
    notPorted("getTargetPoints");
}

int CZombie::shouldIgnoreForTargeting() {
    notPorted("shouldIgnoreForTargeting");
}

int CZombie::isGrabbable(CDemonActor * /*grabber*/) {
    notPorted("isGrabbable");
}

int CZombie::canBeGrabbed(CDemonActor * /*grabber*/, int /*grab_type*/) {
    notPorted("canBeGrabbed");
}

int CZombie::getGrabbed(CDemonActor * /*grabber*/, int /*grab_type*/) {
    notPorted("getGrabbed");
}

void CZombie::processDamage(SDamageInfo * /*damage_info*/) {
    notPorted("processDamage");
}

int CZombie::canBeAttracted(common::CVector3f * /*out_attract_position*/) {
    notPorted("canBeAttracted");
}

common::CMatrix3x4f *CZombie::getCarryObjToBodyXForm(int /*hand_index*/,
                                                     common::CMatrix3x4f * /*out_matrix*/) {
    notPorted("getCarryObjToBodyXForm");
}

} // namespace nocturne::core

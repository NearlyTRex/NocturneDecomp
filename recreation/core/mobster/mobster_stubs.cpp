#include "core/actor/notported.h"
#include "core/mobster/mobster.h"

#include <string_view>

// The CMobster virtual functions not ported yet. Each quits, naming itself, until its port
// replaces it here.

namespace nocturne::core {
namespace {

[[noreturn]] void notPorted(std::string_view function) {
    quitNotPorted("CMobster", function);
}

} // namespace

void CMobster::setup() {
    notPorted("setup");
}

void CMobster::process(float /*delta_time*/) {
    notPorted("process");
}

ECollisionType CMobster::getCollisionType(SCollisionInfo * /*collision_info*/) {
    notPorted("getCollisionType");
}

int CMobster::getTargetPoints(common::CVector3f * /*out_points_array*/) {
    notPorted("getTargetPoints");
}

void CMobster::processDamage(SDamageInfo * /*damage_info*/) {
    notPorted("processDamage");
}

common::CMatrix3x4f *CMobster::getCarryObjToBodyXForm(int /*hand_index*/,
                                                      common::CMatrix3x4f * /*out_matrix*/) {
    notPorted("getCarryObjToBodyXForm");
}

void CMobster::reset() {
    notPorted("reset");
}

} // namespace nocturne::core

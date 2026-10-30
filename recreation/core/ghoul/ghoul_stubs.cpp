#include "core/actor/notported.h"
#include "core/ghoul/ghoul.h"

#include <string_view>

// The CGhoul virtual functions not ported yet. Each quits, naming itself, until its port replaces
// it here.

namespace nocturne::core {
namespace {

[[noreturn]] void notPorted(std::string_view function) {
    quitNotPorted("CGhoul", function);
}

} // namespace

void CGhoul::setup() {
    notPorted("setup");
}

void CGhoul::process(float /*delta_time*/) {
    notPorted("process");
}

void CGhoul::renderBackground(int /*layer_flag*/) {
    notPorted("renderBackground");
}

int CGhoul::getTargetPoints(common::CVector3f * /*out_points_array*/) {
    notPorted("getTargetPoints");
}

void CGhoul::processDamage(SDamageInfo * /*damage_info*/) {
    notPorted("processDamage");
}

int CGhoul::canBeAttracted(common::CVector3f * /*out_attract_position*/) {
    notPorted("canBeAttracted");
}

common::CVector3f *CGhoul::getTargetPoint(common::CVector3f * /*out_point*/) {
    notPorted("getTargetPoint");
}

} // namespace nocturne::core

#include "core/actor/notported.h"
#include "core/door/door.h"

#include <string_view>

// The CDoor virtual functions not ported yet. Each quits, naming itself, until its port replaces
// it here.

namespace nocturne::core {
namespace {

[[noreturn]] void notPorted(std::string_view function) {
    quitNotPorted("CDoor", function);
}

} // namespace

void CDoor::process(float /*delta_time*/) {
    notPorted("process");
}

int CDoor::renderOpaque() {
    notPorted("renderOpaque");
}

void CDoor::renderBackground(int /*layer_flag*/) {
    notPorted("renderBackground");
}

CBoundingBox3D *CDoor::getBoundingBox(CBoundingBox3D * /*out_box*/) {
    notPorted("getBoundingBox");
}

ECollisionType CDoor::getCollisionType(SCollisionInfo * /*collision_info*/) {
    notPorted("getCollisionType");
}

void CDoor::updateCollisionData() {
    notPorted("updateCollisionData");
}

} // namespace nocturne::core

#include "core/actor/notported.h"
#include "core/platfrm/platform.h"

#include <string_view>

// The CPlatform virtual functions not ported yet. Each quits, naming itself, until its port replaces it
// here.

namespace nocturne::core {
namespace {

[[noreturn]] void notPorted(std::string_view function) {
    quitNotPorted("CPlatform", function);
}

} // namespace

void CPlatform::process(float /*delta_time*/) {
    notPorted("process");
}

int CPlatform::renderOpaque() {
    notPorted("renderOpaque");
}

void CPlatform::renderBackground(int /*layer_flag*/) {
    notPorted("renderBackground");
}

CBoundingBox3D *CPlatform::getBoundingBox(CBoundingBox3D * /*out_box*/) {
    notPorted("getBoundingBox");
}

ECollisionType CPlatform::getCollisionType(SCollisionInfo * /*collision_info*/) {
    notPorted("getCollisionType");
}

} // namespace nocturne::core

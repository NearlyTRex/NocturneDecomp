#include "core/actor/notported.h"
#include "core/backgnd/backgroundactor.h"

#include <string_view>

// The CBackgroundActor functions not ported yet. Each quits, naming itself, until its port
// replaces it here.

namespace nocturne::core {
namespace {

[[noreturn]] void notPorted(std::string_view function) {
    quitNotPorted("CBackgroundActor", function);
}

} // namespace

void CBackgroundActor::setup() {
    notPorted("setup");
}

int CBackgroundActor::renderOpaque() {
    notPorted("renderOpaque");
}

void CBackgroundActor::renderBackground(int /*layer_flag*/) {
    notPorted("renderBackground");
}

CBoundingBox3D *CBackgroundActor::getBoundingBox(CBoundingBox3D * /*out_box*/) {
    notPorted("getBoundingBox");
}

ECollisionType CBackgroundActor::getCollisionType(SCollisionInfo * /*collision_info*/) {
    notPorted("getCollisionType");
}

} // namespace nocturne::core

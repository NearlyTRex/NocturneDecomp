#include "core/actor/notported.h"
#include "core/barrier/barrier.h"

#include <string_view>

// The CBarrier functions not ported yet. Each quits, naming itself, until its port replaces it
// here.

namespace nocturne::core {
namespace {

[[noreturn]] void notPorted(std::string_view function) {
    quitNotPorted("CBarrier", function);
}

} // namespace

void CBarrier::setup() {
    notPorted("setup");
}

int CBarrier::renderTransparent() {
    notPorted("renderTransparent");
}

CBoundingBox3D *CBarrier::getBoundingBox(CBoundingBox3D * /*out_box*/) {
    notPorted("getBoundingBox");
}

ECollisionType CBarrier::getCollisionType(SCollisionInfo * /*collision_info*/) {
    notPorted("getCollisionType");
}

void CBarrier::updateCollisionData() {
    notPorted("updateCollisionData");
}

} // namespace nocturne::core

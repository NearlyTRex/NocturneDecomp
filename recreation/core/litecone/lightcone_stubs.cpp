#include "core/actor/notported.h"
#include "core/litecone/lightcone.h"

#include <string_view>

// The CLightCone functions not ported yet. Each quits, naming itself, until its port replaces it
// here.

namespace nocturne::core {
namespace {

[[noreturn]] void notPorted(std::string_view function) {
    quitNotPorted("CLightCone", function);
}

} // namespace

void CLightCone::setup() {
    notPorted("setup");
}

void CLightCone::process(float /*delta_time*/) {
    notPorted("process");
}

int CLightCone::renderTransparent() {
    notPorted("renderTransparent");
}

CBoundingBox3D *CLightCone::getBoundingBox(CBoundingBox3D * /*out_box*/) {
    notPorted("getBoundingBox");
}

ECollisionType CLightCone::getCollisionType(SCollisionInfo * /*collision_info*/) {
    notPorted("getCollisionType");
}

} // namespace nocturne::core

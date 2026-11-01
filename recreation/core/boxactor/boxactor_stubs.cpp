#include "core/actor/notported.h"
#include "core/boxactor/boxactor.h"

#include <string_view>

// The CBoxActor virtual functions not ported yet. Each quits, naming itself, until its port replaces it
// here.

namespace nocturne::core {
namespace {

[[noreturn]] void notPorted(std::string_view function) {
    quitNotPorted("CBoxActor", function);
}

} // namespace

void CBoxActor::process(float /*delta_time*/) {
    notPorted("process");
}

int CBoxActor::renderOpaque() {
    notPorted("renderOpaque");
}

int CBoxActor::renderTransparent() {
    notPorted("renderTransparent");
}

ECollisionType CBoxActor::getCollisionType(SCollisionInfo * /*collision_info*/) {
    notPorted("getCollisionType");
}

void CBoxActor::setPositionAndOrientation(common::CVector3f * /*new_position*/,
                                          common::CVector3f * /*new_orientation*/) {
    notPorted("setPositionAndOrientation");
}

void CBoxActor::onPickup(CDemonActor * /*owner*/) {
    notPorted("onPickup");
}

void CBoxActor::onDropped(common::CVector3f * /*drop_position*/) {
    notPorted("onDropped");
}

} // namespace nocturne::core

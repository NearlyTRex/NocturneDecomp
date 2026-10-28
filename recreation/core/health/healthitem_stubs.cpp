#include "core/actor/notported.h"
#include "core/health/healthitem.h"

#include <string_view>

// The CHealthItem functions not ported yet. Each quits, naming itself, until its port replaces it
// here.

namespace nocturne::core {
namespace {

[[noreturn]] void notPorted(std::string_view function) {
    quitNotPorted("CHealthItem", function);
}

} // namespace

void CHealthItem::setup() {
    notPorted("setup");
}

int CHealthItem::renderOpaque() {
    notPorted("renderOpaque");
}

CBoundingBox3D *CHealthItem::getBoundingBox(CBoundingBox3D * /*out_box*/) {
    notPorted("getBoundingBox");
}

ECollisionType CHealthItem::getCollisionType(SCollisionInfo * /*collision_info*/) {
    notPorted("getCollisionType");
}

void CHealthItem::onPickup(CDemonActor * /*owner*/) {
    notPorted("onPickup");
}

int CHealthItem::canPickup(CDemonActor * /*picker*/) {
    notPorted("canPickup");
}

} // namespace nocturne::core
